
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class MapController : MonoBehaviour {



	public static List<GameObject> stateList;
	public static Text correctText;
	public static Text missedText;
	public static Text timerText;
	public static Text scoreText;
	public static Text stateText;
	public static Text incorrectStateText;
	public static Text totalTimeText;

	public static int correct;
	public static int missed;
	public static int stateIndex;
	public static float score;

	private static GameObject[] states;
	private static GameObject[] inactive;
	private static GameObject USA;
	private static GameObject Europe;
	private static GameObject button_newgame;
	private static GameObject button_mainmenu;
	private static GameObject sound_correct;
	private static GameObject sound_miss;
	private static GameObject sound_victory;
	private static float timeLeft;
	private static float totalTime;
	private static float incorrectTextTimer;
	private static bool isGameOver;

	private const float MISS_TIMER = 30.0f;
	private const float INCORRECT_TEXT_TIMER = 2.0f;

	private const int ALLOWABLE_MISSES = 5;


	void Start() {
		correctText = GameObject.Find("Correct").GetComponent<Text> ();
		missedText = GameObject.Find("Missed").GetComponent<Text> ();
		timerText = GameObject.Find ("Timer").GetComponent<Text> ();
		scoreText = GameObject.Find ("Score").GetComponent<Text> ();
		stateText = GameObject.Find ("StateText").GetComponent<Text> ();
		incorrectStateText = GameObject.Find ("Text_IncorrectState").GetComponent<Text> ();
		totalTimeText = GameObject.Find ("Text_TotalTime").GetComponent<Text> ();
		USA = GameObject.Find ("USA State Map");
		Europe = GameObject.Find ("Europe Map");
		button_newgame = GameObject.Find ("Button_NewGame");
		button_mainmenu = GameObject.Find ("Button_MainMenu");
		sound_correct = GameObject.Find ("Sound_Correct");
		sound_miss = GameObject.Find ("Sound_Miss");
		sound_victory = GameObject.Find ("Sound_Victory");


		correct = 0;
		missed = 0;
		stateIndex = 0;
		score = 0;
		isGameOver = false;
		totalTime = 0;

		resetTimeLeft ();
		resetIncorrectTextTimer (); 


		button_newgame.SetActive (false); // needs to be instantiated and assigned to a variable so that I can use SetActive()
		button_mainmenu.SetActive (false);
		totalTimeText.text = "";

		switch (MainMenuController.getRegion() )
		{
		case 1:
			Europe.SetActive (false);

			/*
			inactive = GameObject.FindGameObjectsWithTag ("Europe"); //set all inactive
			for (int i = 0; i < inactive.Length; i++)
			{
				inactive[i].SetActive(false);
			}
			*/
			break;
		
		case 2:
			
			USA.SetActive (false);

			break;

		}

		states = GameObject.FindGameObjectsWithTag ("Easy");
		stateList = new List<GameObject> (states);
		if (MainMenuController.getDifficulty () == 2 || MainMenuController.getDifficulty () == 3) {
			states = GameObject.FindGameObjectsWithTag ("Normal");
			stateList.AddRange (states);
		}
		if (MainMenuController.getDifficulty () == 3) {
			states = GameObject.FindGameObjectsWithTag ("Hard");
			stateList.AddRange (states);
		}


        SelectStateRandomly();
    }

	void Update() 
	{
		timeLeft -= Time.deltaTime;
		totalTime += Time.deltaTime;
		timerText.text = "Timer: " + timeLeft.ToString ("F1");
		if (timeLeft <= 0 && isGameOver != true) {
			Miss();
			resetTimeLeft ();
		}

		incorrectTextTimer -= Time.deltaTime;
		if (incorrectTextTimer <= 0) {
			SetIncorrectStateText ("");
			resetIncorrectTextTimer ();

		}

	}

	public static void GameOver() {
		isGameOver = true;
		button_mainmenu.SetActive (true);
		button_newgame.SetActive (true);
		scoreText.GetComponentInParent<RectTransform>().localPosition = new Vector3(-150,500,0);
		correctText.GetComponentInParent<RectTransform>().localPosition = new Vector3(-150,350,0);
		missedText.GetComponentInParent<RectTransform>().localPosition = new Vector3(150,350,0);
		timerText.gameObject.SetActive (false);
		GameObject.Find ("UIPanel_Bottom").GetComponent<Image> ().enabled = false;
		GameObject.Find ("UIPanel_Top").SetActive (false);
		GameObject.Find ("Button_Confirm").SetActive (false);
		GameObject.Find ("Pointer").SetActive (false);
	}

    public static void SelectStateRandomly() {
		if (stateList.Count == 0) {
			// win condition
			SaveScore();
			PlaySound (sound_victory);
			GameOver();
		}
		stateIndex = Random.Range (0, stateList.Count); 
		stateText.text = getCurrentRegionName ();
		TouchCamera.ResetCamera ();
    }

	public static void Correct() {
		correct++;
		SetCorrectText ();
		PlaySound (sound_correct);
		UpdateScore (); // must be before SelectStateRandomly(), otherwise timer will reset

		RemoveStateFromList ();
		SelectStateRandomly ();
		resetTimeLeft ();
	}

	public static void Miss() {
		missed++;
		SetMissedText ();
		PlaySound (sound_miss);
		UpdateScore ();

		if(missed >= getAllowableMisses()) {
			SaveScore ();
			GameOver ();
		} else {
			SelectStateRandomly ();
			resetTimeLeft ();
		}
			
	}

	public static void SetCorrectText(){
		correctText.text = "Correct: " + correct.ToString ();
	}

	public static void SetMissedText(){
		missedText.text = "Missed: " + missed.ToString ();
	}

	public static void SetIncorrectStateText(string stateString){
		resetIncorrectTextTimer ();
		incorrectStateText.text = stateString;
	}


	public static void UpdateScore(){
		score = (float)correct / ((float)correct + (float)missed);
		scoreText.text = "Score: " + score.ToString ("P0");
	}


	public static float getTimeLeft(){
		return timeLeft;
	}

	private static void resetTimeLeft() {
		timeLeft = MISS_TIMER;

	}

	private static void resetIncorrectTextTimer() {
		incorrectTextTimer = INCORRECT_TEXT_TIMER;
	}

	private static int getAllowableMisses() {
		return ALLOWABLE_MISSES;
	}

	public static void RemoveStateFromList() {
		stateList.RemoveAt(stateIndex);
	}

	public static string getCurrentRegionName() {
		return stateList [stateIndex].gameObject.name.ToString ();
	}

	public static void SaveScore (){
		int timeScore = (int)totalTime;
		totalTimeText.text = "Time: " + HighScoreController.convertSecondstoString (timeScore);

		switch (MainMenuController.getRegion()) {
		case 1: // USA states
			switch (MainMenuController.getDifficulty ()) {
			case 1: // Easy
				if (score > PlayerPrefs.GetFloat ("USAStates_Easy_Score_Key") || (score == PlayerPrefs.GetFloat ("USAStates_Easy_Score_Key") && timeScore < PlayerPrefs.GetFloat ("USAStates_Easy_Time_Key")))
					PlayerPrefs.SetFloat ("USAStates_Easy_Score_Key", score);
					PlayerPrefs.SetInt ("USAStates_Easy_Time_Key", timeScore);
				break;
			
			case 2: // Normal
				if (score > PlayerPrefs.GetFloat ("USAStates_Normal_Score_Key") || (score == PlayerPrefs.GetFloat ("USAStates_Normal_Score_Key") && timeScore < PlayerPrefs.GetFloat ("USAStates_Normal_Time_Key")))
					PlayerPrefs.SetFloat ("USAStates_Normal_Score_Key", score);
				PlayerPrefs.SetInt ("USAStates_Normal_Time_Key", timeScore);
				break;

			case 3: // Hard
				if (score > PlayerPrefs.GetFloat ("USAStates_Hard_Score_Key") || (score == PlayerPrefs.GetFloat ("USAStates_Hard_Score_Key")  && timeScore < PlayerPrefs.GetFloat ("USAStates_Hard_Time_Key")))
					PlayerPrefs.SetFloat ("USAStates_Hard_Score_Key", score);
					PlayerPrefs.SetInt ("USAStates_Hard_Time_Key", timeScore);
				break;
			
			default:
				break;
			}

			break;

		case 2: // Europe
			switch (MainMenuController.getDifficulty ()) {
			case 1: // Easy
				if (score > PlayerPrefs.GetFloat ("Europe_Easy_Score_Key") || (score == PlayerPrefs.GetFloat ("Europe_Easy_Score_Key") && timeScore < PlayerPrefs.GetFloat ("Europe_Easy_Time_Key")))
					PlayerPrefs.SetFloat ("Europe_Easy_Score_Key", score);
					PlayerPrefs.SetInt ("Europe_Easy_Time_Key", timeScore);
				
				break;

			case 2: // Normal
				if (score > PlayerPrefs.GetFloat ("Europe_Normal_Score_Key") || (score == PlayerPrefs.GetFloat ("Europe_Normal_Score_Key") && timeScore < PlayerPrefs.GetFloat ("Europe_Normal_Time_Key")))
					PlayerPrefs.SetFloat ("Europe_Normal_Score_Key", score);
					PlayerPrefs.SetInt ("Europe_Normal_Time_Key", timeScore);
				break;

			case 3: // Hard
				if (score > PlayerPrefs.GetFloat ("Europe_Hard_Score_Key") || (score == PlayerPrefs.GetFloat ("Europe_Hard_Score_Key") && timeScore < PlayerPrefs.GetFloat ("Europe_Hard_Time_Key")))
					PlayerPrefs.SetFloat ("Europe_Hard_Score_Key", score);
					PlayerPrefs.SetInt ("Europe_Hard_Time_Key", timeScore);
				break;

			default:
				break;
			}

			break;

		default:
			break;
		}

	}

	public static void PlaySound(GameObject sound){
		if (PlayerPrefs.GetInt ("SETTINGS_Sound") == 1) {
			sound.GetComponent<AudioSource> ().Play ();
		}
			
	}

	public void clickMainMenu() {
		SceneManager.LoadScene ("Menu");
	}

	public void clickNewGame() {
		SceneManager.LoadScene ("Map");
	}

}

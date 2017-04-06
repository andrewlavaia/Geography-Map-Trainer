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

	public static int correct;
	public static int missed;
	public static int stateIndex;

	private static GameObject[] states;
	private static GameObject button_newgame;
	private static GameObject button_mainmenu;
	private static GameObject sound_correct;
	private static GameObject sound_miss;
	private static GameObject sound_victory;
	private static float timeLeft;
	private static float score;
	private static float incorrectTextTimer;

	private const float MISS_TIMER_EASY = 60.0f;
	private const float MISS_TIMER_NORMAL = 30.0f;
	private const float MISS_TIMER_HARD = 15.0f;
	private const float INCORRECT_TEXT_TIMER = 2.0f;

	private const int ALLOWABLE_MISSES_EASY = 15;
	private const int ALLOWABLE_MISSES_NORMAL = 8;
	private const int ALLOWABLE_MISSES_HARD = 3;


	void Start() {
		correctText = GameObject.Find("Correct").GetComponent<Text> ();
		missedText = GameObject.Find("Missed").GetComponent<Text> ();
		timerText = GameObject.Find ("Timer").GetComponent<Text> ();
		scoreText = GameObject.Find ("Score").GetComponent<Text> ();
		stateText = GameObject.Find ("StateText").GetComponent<Text> ();
		incorrectStateText = GameObject.Find ("Text_IncorrectState").GetComponent<Text> (); 
		button_newgame = GameObject.Find ("Button_NewGame");
		button_mainmenu = GameObject.Find ("Button_MainMenu");
		sound_correct = GameObject.Find ("Sound_Correct");
		sound_miss = GameObject.Find ("Sound_Miss");
		sound_victory = GameObject.Find ("Sound_Victory");

		correct = 0;
		missed = 0;
		stateIndex = 0;
		score = 0;

		resetTimeLeft ();
		resetIncorrectTextTimer ();

        states = GameObject.FindGameObjectsWithTag("State");
		stateList = new List<GameObject> (states);

		button_newgame.SetActive (false); // needs to be instantiated and assigned to a variable so that I can use SetActive()
		button_mainmenu.SetActive (false);

        SelectStateRandomly();
    }

	void Update() 
	{
		timeLeft -= Time.deltaTime;
		timerText.text = "Timer: " + timeLeft.ToString ("F1");
		if (timeLeft <= 0 && stateList.Count != 0) {
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
		button_mainmenu.SetActive (true);
		button_newgame.SetActive (true);
		scoreText.GetComponentInParent<RectTransform>().localPosition = new Vector3(-250,500,0);
		correctText.GetComponentInParent<RectTransform>().localPosition = new Vector3(0,500,0);
		missedText.GetComponentInParent<RectTransform>().localPosition = new Vector3(250,500,0);
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
		score += (timeLeft / (missed + 1)) * 10;
		scoreText.text = "Score: " + score.ToString ("F1");
	}

	public static float getTimeLeft(){
		return timeLeft;
	}

	private static void resetTimeLeft() {
		switch (MainMenuController.getDifficulty()) {
			case 1:
				timeLeft = MISS_TIMER_EASY;
				break;
			case 2:
				timeLeft = MISS_TIMER_NORMAL;
				break;
			case 3:
				timeLeft = MISS_TIMER_HARD;
				break;
			default:
				timeLeft = MISS_TIMER_NORMAL;
				break;
		}

	}

	private static void resetIncorrectTextTimer() {
		incorrectTextTimer = INCORRECT_TEXT_TIMER;
	}

	private static int getAllowableMisses() {
		switch (MainMenuController.getDifficulty()) {
			case 1:
				return ALLOWABLE_MISSES_EASY;
			case 2:
				return ALLOWABLE_MISSES_NORMAL;
			case 3:
				return ALLOWABLE_MISSES_HARD;
			default:
				return ALLOWABLE_MISSES_NORMAL;
		}
	}

	public static void RemoveStateFromList() {
		stateList.RemoveAt(stateIndex);
	}

	public static string getCurrentRegionName() {
		return stateList [stateIndex].gameObject.name.ToString ();
	}

	public static void SaveScore (){
		switch (MainMenuController.getDifficulty()) {
		case 1: // Easy
			if (score > PlayerPrefs.GetFloat("USAStates_Easy_Key"))
				PlayerPrefs.SetFloat ("USAStates_Easy_Key", score);
			break;
		
		case 2: // Normal
			if (score > PlayerPrefs.GetFloat("USAStates_Normal_Key"))
				PlayerPrefs.SetFloat ("USAStates_Normal_Key", score);
			break;

		case 3: // Hard
			if (score > PlayerPrefs.GetFloat("USAStates_Hard_Key"))
				PlayerPrefs.SetFloat ("USAStates_Hard_Key", score);
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

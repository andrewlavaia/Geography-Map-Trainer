
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class MapController : MonoBehaviour {

	public static List<GameObject> stateList;
	public static int stateCount;
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
	public static int missedIndex;
	public static bool missedFlag;
	public static bool correctFlag;
	public static float score;

	public static int region;	
	public static int difficulty;

	private static GameObject[] states;
	private static GameObject[] inactive;
	private static GameObject WorldMap;
	private static GameObject USA;
	private static GameObject Europe;
	private static GameObject Africa;
	private static GameObject Asia;
	private static GameObject LatinAmerica;
	private static GameObject MiddleEast;

	private static GameObject UIPanel_Bottom;
	private static GameObject UIPanel_Top;
	private static GameObject Button_Confirm;
	private static GameObject Pointer;
	private static GameObject button_newgame;
	private static GameObject button_resume;
	private static GameObject button_restart;
	private static GameObject button_mainmenu;
	private static GameObject button_options;
	private static GameObject correct_indicator;
	private static GameObject miss_indicator;
	private static GameObject sound_correct;
	private static GameObject sound_miss;
	private static GameObject sound_victory;
	private static float timeLeft;
	private static float totalTime;
	private static float missDelay;
	private static float correctDelay;
	private static float blinkTimer; 
	private static bool blinkFlag;
	private static bool isGameOver;
	private static bool isPaused;

	private const int ALLOWABLE_MISSES = 5;
	private const float MISS_TIMER = 30.0f;
	private const float DELAY_TIMER_SHORT = 0.5f;
	private const float DELAY_TIMER_MEDIUM = 1.25f;
	private const float DELAY_TIMER_LONG = 2.5f;
	private const float BLINK_TIMER_INTERVAL = 0.15f;

	void Start() {
		correctText = GameObject.Find("Correct").GetComponent<Text> ();
		missedText = GameObject.Find("Missed").GetComponent<Text> ();
		timerText = GameObject.Find ("Timer").GetComponent<Text> ();
		scoreText = GameObject.Find ("Score").GetComponent<Text> ();
		stateText = GameObject.Find ("StateText").GetComponent<Text> ();
		incorrectStateText = GameObject.Find ("Text_IncorrectState").GetComponent<Text> ();
		totalTimeText = GameObject.Find ("Text_TotalTime").GetComponent<Text> ();
		WorldMap = GameObject.Find ("World Map");
		USA = GameObject.Find ("USA State Map");
		Europe = GameObject.Find ("Europe Map");
		Africa = GameObject.Find ("Africa Map");
		Asia = GameObject.Find ("Asia Map");
		LatinAmerica = GameObject.Find ("Latin America Map");
		MiddleEast = GameObject.Find ("Middle East Map");

		UIPanel_Bottom = GameObject.Find ("UIPanel_Bottom");
		UIPanel_Top = GameObject.Find ("UIPanel_Top");
		Button_Confirm = GameObject.Find ("Button_Confirm");
		Pointer = GameObject.Find ("Pointer");
		button_newgame = GameObject.Find ("Button_NewGame");
		button_resume = GameObject.Find ("Button_Resume");
		button_restart = GameObject.Find ("Button_Restart");
		button_mainmenu = GameObject.Find ("Button_MainMenu");
		button_options = GameObject.Find ("Button_Options");
		correct_indicator = GameObject.Find ("Correct_Indicator");
		miss_indicator = GameObject.Find ("Miss_Indicator");
		sound_correct = GameObject.Find ("Sound_Correct");
		sound_miss = GameObject.Find ("Sound_Miss");
		sound_victory = GameObject.Find ("Sound_Victory");

		correct = 0;
		missed = 0;
		stateIndex = 0;
		missedIndex = 0;
		missedFlag = false;
		correctFlag = false;
		score = 0;
		isGameOver = false;
		totalTime = 0;
		blinkFlag = false;
		isPaused = false;

		region = MainMenuController.getRegion();
		difficulty = DifficultyController.getDifficulty();

		resetTimeLeft ();
		resetMissDelay (); 
		resetCorrectDelay ();
		resetBlinkTimer ();

		button_newgame.SetActive (false); // needs to be instantiated and assigned to a variable so that I can use SetActive()
		button_mainmenu.SetActive (false);
		button_options.SetActive (false);
		button_resume.SetActive (false);
		button_restart.SetActive (false);
		correct_indicator.SetActive (false);
		miss_indicator.SetActive (false);
		totalTimeText.text = "";

		setActiveRegion();
		setStateList();
		stateCount = stateList.Count;

		loadGameState();
		
        SelectStateRandomly();
    }

	void Update() 
	{
		if (isPaused) {
			return;
		}

		if (isGameOver) {
			UIPanel_Top.SetActive (false);
			return;
		}

		if (!missedFlag && !correctFlag) {
			timeLeft -= Time.deltaTime;
			totalTime += Time.deltaTime;
		}

		timerText.text = "Timer: " + timeLeft.ToString ("F1");

		if (timeLeft <= 0 && !isGameOver) {
			Miss ();
			resetTimeLeft ();
		}
			
		if (missedFlag) {
			missDelay -= Time.deltaTime;
			stateText.text = getMissedRegionName ();
			stateText.color = new Color32 (163, 66, 66, 255);
			miss_indicator.SetActive (true);
			blinkMissedRegion ();

			if (missDelay <= 0) {
				stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;
				miss_indicator.SetActive (false);
				SelectStateRandomly ();
				if (isGameOver) {
					UIPanel_Top.SetActive (false);
				} 
				else {
					resetTimeLeft ();
					stateText.text = getCurrentRegionName ();
					stateText.color = Color.black;
					Button_Confirm.SetActive (true);
					Pointer.SetActive (true);
				} 

				resetMissDelay ();
				resetBlinkTimer ();
				missedFlag = false;
			}
		}

		if (correctFlag) {
			correctDelay -= Time.deltaTime;
			correct_indicator.SetActive (true);
			stateList [stateIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;

			if (correctDelay <= 0) {
				stateList [stateIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;
				correct_indicator.SetActive (false);
				RemoveStateFromList ();
				SelectStateRandomly ();
				if (isGameOver) {
					UIPanel_Top.SetActive (false);					
				} 
				else {
					resetTimeLeft ();
					stateText.text = getCurrentRegionName ();
					stateText.color = Color.black;
					Button_Confirm.SetActive (true);
					Pointer.SetActive (true);

					resetCorrectDelay ();
					correctFlag = false;
				}
			}
		}
	}

	private static void setActiveRegion() {
		switch (region)
		{
		case 0: // World
			USA.SetActive (false);
			Europe.SetActive (false);
			Africa.SetActive (false);
			Asia.SetActive (false);
			LatinAmerica.SetActive (false);
			MiddleEast.SetActive (false);
			break;

		case 1: // USA States
			WorldMap.SetActive (false);
			Europe.SetActive (false);
			Africa.SetActive (false);
			Asia.SetActive (false);
			LatinAmerica.SetActive (false);
			MiddleEast.SetActive (false);
			break;
		
		case 2: // Europe
			WorldMap.SetActive (false);
			USA.SetActive (false);
			Africa.SetActive (false);
			Asia.SetActive (false);
			LatinAmerica.SetActive (false);
			MiddleEast.SetActive (false);
			break;
		
		case 3: // Africa
			WorldMap.SetActive (false);
			USA.SetActive (false);
			Asia.SetActive (false);
			Europe.SetActive (false);
			LatinAmerica.SetActive (false);
			MiddleEast.SetActive (false);
			break;

		case 4: // Latin America
			WorldMap.SetActive (false);
			USA.SetActive (false);
			Asia.SetActive (false);
			Europe.SetActive (false);
			Africa.SetActive (false);
			MiddleEast.SetActive (false);
			break;

		case 5: // Asia 
			WorldMap.SetActive (false);
			USA.SetActive (false);
			Europe.SetActive (false);
			Africa.SetActive (false);
			LatinAmerica.SetActive (false);
			MiddleEast.SetActive (false);
			break;

		case 6: // Middle East
			WorldMap.SetActive (false);
			USA.SetActive (false);
			Europe.SetActive (false);
			Africa.SetActive (false);
			Asia.SetActive (false);
			LatinAmerica.SetActive (false);
			break;
		}
	}

	private static void setStateList() {
		states = GameObject.FindGameObjectsWithTag ("Easy");
		stateList = new List<GameObject> (states);
		if (difficulty == 2 || difficulty == 3) {
			states = GameObject.FindGameObjectsWithTag ("Normal");
			stateList.AddRange (states);
		}
		if (difficulty == 3) {
			states = GameObject.FindGameObjectsWithTag ("Hard");
			stateList.AddRange (states);
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
		UIPanel_Bottom.GetComponent<Image> ().enabled = false;
		UIPanel_Top.SetActive (false);
		Button_Confirm.SetActive (false);
		Pointer.SetActive (false);
		foreach (string s in PointerController.collisionList) {
			GameObject.Find (s).GetComponent<SpriteRenderer> ().enabled = false;
		}
		PointerController.collisionList.Clear ();
	}

    public static void SelectStateRandomly() {
		if (stateList.Count == 0) {
			// win condition
			SaveScore();
			PlaySound (sound_victory);
			GameOver();
		} 
		else { 
			stateIndex = Random.Range (0, stateList.Count); 
			stateText.text = getCurrentRegionName ();
			TouchCamera.ResetCamera ();
		}
    }

	public static void Correct() {
		correct++;
		correctFlag = true;
		resetCorrectDelay ();
		SetCorrectText ();
		HighlightRegion (stateIndex);
		PlaySound (sound_correct);
		UpdateScore (); // must be before SelectStateRandomly(), otherwise timer will reset
	}

	public static void Miss() {
		missed++;
		missedIndex = stateIndex;
		missedFlag = true;
		resetMissDelay ();
		resetBlinkTimer ();
		SetMissedText ();
		HighlightRegion (missedIndex);

		TouchCamera.MoveCamera (stateList [missedIndex].gameObject);
		PlaySound (sound_miss);
		UpdateScore ();

		if (missed >= getAllowableMisses()) {
			SaveScore ();
			GameOver ();
		}
	}

	public static void SetCorrectText(){
		correctText.text = "Correct: " + correct.ToString ();
	}

	public static void SetMissedText(){
		missedText.text = "Missed: " + missed.ToString ();
	}

	public static void HighlightRegion(int regionIndex) {
		stateList [regionIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		Button_Confirm.SetActive (false);
		Pointer.SetActive (false);
		foreach (string s in PointerController.collisionList) {
			GameObject.Find (s).GetComponent<SpriteRenderer> ().enabled = false;
		}
		PointerController.collisionList.Clear ();
	}

	public static void SetIncorrectStateText(string stateString){
		incorrectStateText.text = stateString;
	}

	public static void UpdateScore(){
		score = (float)correct / stateCount;
		scoreText.text = "Score: " + score.ToString ("P0");
	}

	public static float getTimeLeft(){
		return timeLeft;
	}

	private static void resetTimeLeft() {
		timeLeft = MISS_TIMER;

	}

	private static void resetMissDelay() {
		switch (PlayerPrefs.GetInt ("SETTINGS_Delay")) {
			case 1: // Short
				missDelay = DELAY_TIMER_SHORT;
				break;

			case 2: // Medium
				missDelay = DELAY_TIMER_MEDIUM;
				break;

			case 3: // Long
				missDelay = DELAY_TIMER_LONG;
				break;

			default:
				missDelay = DELAY_TIMER_MEDIUM;
				break;			
		}
	}

	private static void resetCorrectDelay() {
		switch (PlayerPrefs.GetInt ("SETTINGS_Delay")) {
			case 1: // Short
				correctDelay = DELAY_TIMER_SHORT;
				break;

			case 2: // Medium
				correctDelay = DELAY_TIMER_MEDIUM;
				break;

			case 3: // Long
				correctDelay = DELAY_TIMER_LONG;
				break;
			
			default:
				correctDelay = DELAY_TIMER_MEDIUM;
				break;
		}
	}

	private static void resetBlinkTimer() {
		blinkTimer = BLINK_TIMER_INTERVAL;
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

	public static string getMissedRegionName() {
		return stateList [missedIndex].gameObject.name.ToString ();
	}

	public static void SaveScore (){
		int timeScore = (int)totalTime;
		totalTimeText.text = "Time: " + HighScoreController.convertSecondstoString (timeScore);

		string regionName = MainMenuController.getRegionName ();
		string difficultyName = DifficultyController.getDifficultyName ();
		string scoreKey = regionName + "_" + difficultyName + "_Score_Key";
		string timeKey = regionName + "_" + difficultyName + "_Time_Key";
		float highScore = PlayerPrefs.GetFloat (scoreKey);
		int bestTime = PlayerPrefs.GetInt (timeKey);

		if (score > highScore || (score >= highScore && timeScore < bestTime)) {
			PlayerPrefs.SetFloat (scoreKey, score);
			PlayerPrefs.SetInt (timeKey, timeScore);
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

	public void clickOptions() {
		saveGameState();
		SceneManager.LoadScene ("Options");
	}

	public void clickResume() {
		button_resume.SetActive (false);
		button_restart.SetActive (false);
		button_mainmenu.SetActive (false);
		button_options.SetActive (false);
		Button_Confirm.SetActive (true);
		UIPanel_Top.SetActive(true);
		UIPanel_Bottom.SetActive(true);
		isPaused = false;
	}

	public void clickPause () {
		if (!isPaused) {
			isPaused = true;
			Button_Confirm.SetActive (false);
			button_resume.SetActive (true);
			button_restart.SetActive (true);
			button_mainmenu.SetActive (true);
			button_options.SetActive(true);
			UIPanel_Top.SetActive(false);
			UIPanel_Bottom.SetActive(false);
		} else {
			clickResume ();
		}
	}

	private void blinkMissedRegion() {
		blinkTimer -= Time.deltaTime;

		if (blinkTimer <= 0) {
			blinkFlag = !blinkFlag;
			resetBlinkTimer ();
		}

		if (blinkFlag) 
			stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		else 
			stateList [missedIndex].gameObject.GetComponent<SpriteRenderer> ().enabled = false;	
	}	

	public void saveGameState() {
		GameState.saved = true;
		GameState.region = region;
		GameState.difficulty = difficulty;
		GameState.correct = correct;
		GameState.missed = missed;
		GameState.score = score;
		GameState.timeLeft = timeLeft;
		
		GameState.state_names.Clear();
		for (int i = 0; i < stateList.Count; i++) {
			GameState.state_names.Add(stateList[i].name);
		}
	}

	public void loadGameState() {
		if (GameState.saved == true) {
			GameState.saved = false;

			region = GameState.region;
			difficulty = GameState.difficulty;
			correct = GameState.correct;
			missed = GameState.missed;
			score = GameState.score;
			timeLeft = GameState.timeLeft;

			for (int i = 0; i < stateList.Count; i++) {
				if (!GameState.state_names.Contains(stateList[i].name)) {
					stateList.RemoveAt(i);
					i--;
				}
			}

			setActiveRegion();

			SetCorrectText ();
			SetMissedText ();
			UpdateScore (); 
		}
	}
}

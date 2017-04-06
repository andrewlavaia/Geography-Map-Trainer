using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class USAMap : MonoBehaviour {

    private static GameObject[] states;

	public static List<GameObject> stateList;
	public static Text correctText;
	public static Text missedText;
	public static Text timerText;
	public static Text scoreText;
	public static int correct;
	public static int missed;
	public static int stateIndex;

	private static float timeLeft;
	private static double score;

	private const float MISS_TIMER_EASY = 60.0f;
	private const float MISS_TIMER_NORMAL = 30.0f;
	private const float MISS_TIMER_HARD = 15.0f;

	private const int ALLOWABLE_MISSES_EASY = 20;
	private const int ALLOWABLE_MISSES_NORMAL = 10;
	private const int ALLOWABLE_MISSES_HARD = 3;

	void Start() {
		correctText = GameObject.Find("Correct").GetComponent<Text> ();
		missedText = GameObject.Find("Missed").GetComponent<Text> ();
		timerText = GameObject.Find ("Timer").GetComponent<Text> ();
		scoreText = GameObject.Find ("Score").GetComponent<Text> ();
		correct = 0;
		missed = 0;
		stateIndex = 0;
		score = 0;

		resetTimeLeft ();

        states = GameObject.FindGameObjectsWithTag("State");
        for (int i = 0; i < states.Length; i++)
        {
            states[i].SetActive(false);
        }
		stateList = new List<GameObject> (states);

        SelectStateRandomly();
    }

	void Update() 
	{
		timeLeft -= Time.deltaTime;
		timerText.text = "Timer: " + timeLeft.ToString ("F1");
		if (timeLeft <= 0) {
			Miss();
			resetTimeLeft ();
		}
	}

    public static void SelectStateRandomly() {
		if (stateList.Count == 0) {
			//!!! win condition
		}
		stateIndex = Random.Range (0, stateList.Count); 
		stateList[stateIndex].SetActive(true);
		TouchCamera.ResetCamera ();
    }

	public static void Correct() {
		stateList[stateIndex].SetActive(false);
		correct++;
		SetCorrectText ();
		UpdateScore (); // must be before SelectStateRandomly(), otherwise timer will reset
		RemoveStateFromList ();
		SelectStateRandomly ();
		resetTimeLeft ();
	}
	public static void Miss() {
		stateList[stateIndex].SetActive(false);
		missed++;
		SetMissedText ();

		if (missed >= getAllowableMisses() ) {
			SceneManager.LoadScene ("Menu");
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


}

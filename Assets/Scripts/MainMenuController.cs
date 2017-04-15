using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

	private static int difficulty; // 1 = easy, 2 = normal, 3 = hard
	private static int region; // 1 = USA, 2 = Europe

	void Start () {
		
	}

	public static int getDifficulty() {
		return difficulty;
	}

	public static int getRegion() {
		return region;
	}

	public void SelectNewGame() {
		SceneManager.LoadScene ("Menu_Region");
	}

	public void SelectOptions() {
		SceneManager.LoadScene ("Options");
	}

	public void SelectHighScores() {
		SceneManager.LoadScene ("HighScores");
	}

	public void SelectUSA() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 1;
	}

	public void SelectEurope() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 2;
	}

	public void LoadDifficultyEasy() {
		difficulty = 1;
		SceneManager.LoadScene ("Map");
	}

	public void LoadDifficultyNormal() {
		difficulty = 2;
		SceneManager.LoadScene ("Map");
	}

	public void LoadDifficultyHard() {
		difficulty = 3;
		SceneManager.LoadScene ("Map");
	}


	public void BackfromRegion() {
		SceneManager.LoadScene ("Menu");
	}

	public void BackfromDifficulty() {
		SceneManager.LoadScene ("Menu_Region");
	}



}

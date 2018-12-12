using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {


	private static int region; // 0 = World, 1 = USA, 2 = Europe, 3 = Africa, 4 = Latin America, 5 = Asia, 6 = Middle East

	void Start () {
		Screen.fullScreen = false;
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

	public void SelectHowToPlay() {
		SceneManager.LoadScene ("HowToPlay");
	}

	public void SelectHighScores() {
		SceneManager.LoadScene ("HighScores");
	}

	public void SelectWorld() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 0;
	}

	public void SelectUSA() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 1;
	}

	public void SelectEurope() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 2;
	}

	public void SelectAfrica() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 3;
	}

	public void SelectLatinAmerica() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 4;
	}

	public void SelectAsia() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 5;
	}

	public void SelectMiddleEast() {
		SceneManager.LoadScene ("Menu_Difficulty");
		region = 6;
	}

	public void BackfromRegion() {
		SceneManager.LoadScene ("Menu");
	}

	public void BackfromDifficulty() {
		SceneManager.LoadScene ("Menu_Region");
	}

	public void ExitGame() {
		Application.Quit ();
	}



}

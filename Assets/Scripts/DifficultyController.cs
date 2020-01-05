using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DifficultyController : MonoBehaviour {

	public Text EasyLabel;
	public Text NormalLabel;
	public Text HardLabel;

	private static int difficulty; // 1 = easy, 2 = normal, 3 = hard
	private static Dictionary<int, string> difficultyDict = new Dictionary<int, string>() {
		{ 1, "Easy" },
		{ 2, "Normal" },
		{ 3, "Hard" },
	};

	public static int getDifficulty() {
		return difficulty;
	}

	public static string getDifficultyName() {
		return difficultyDict [difficulty];
	}

	// Use this for initialization
	void Start () {
		GameState.reset();
		switch ( MainMenuController.getRegion() ){
		case 0: // World
			EasyLabel.text = "50 Countries";
			NormalLabel.text = "100 Countries";
			HardLabel.text = "165 Countries";
			break;

		case 1: // USA States
			EasyLabel.text = "17 States";
			NormalLabel.text = "34 States";
			HardLabel.text = "50 States";
			break;

		case 2: // Europe
			EasyLabel.text = "13 Countries";
			NormalLabel.text = "27 Countries";
			HardLabel.text = "40 Countries";
			break;
		
		case 3: // Africa
			EasyLabel.text = "15 Countries";
			NormalLabel.text = "30 Countries";
			HardLabel.text = "46 Countries";
			break;
		
		case 4: // Latin America
			EasyLabel.text = "9 Countries";
			NormalLabel.text = "18 Countries";
			HardLabel.text = "28 Countries";
			break;
		
		case 5: // Asia
			EasyLabel.text = "9 Countries";
			NormalLabel.text = "18 Countries";
			HardLabel.text = "27 Countries";
			break;

		case 6: // Middle East
			EasyLabel.text = "7 Countries";
			NormalLabel.text = "14 Countries";
			HardLabel.text = "21 Countries";
			break;
		
		default:
			break;

		}
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
}

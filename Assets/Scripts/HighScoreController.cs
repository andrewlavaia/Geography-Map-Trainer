using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class HighScoreController : MonoBehaviour {

	public Text USAStates_Easy_Text;
	public Text USAStates_Normal_Text;
	public Text USAStates_Hard_Text;
	public Text USAStates_MostMisses_Text;

	private float USAStates_Easy_Score;
	private float USAStates_Normal_Score;
	private float USAStates_Hard_Score;
	private int[] missCounter;


	void Start() 
	{

		// Load data from file
		USAStates_Easy_Score = PlayerPrefs.GetFloat("USAStates_Easy_Key", 0);
		USAStates_Normal_Score = PlayerPrefs.GetFloat("USAStates_Normal_Key", 0);
		USAStates_Hard_Score = PlayerPrefs.GetFloat("USAStates_Hard_Key", 0);

		// Update Text values
		USAStates_Easy_Text.text = USAStates_Easy_Score.ToString("F1");
		USAStates_Normal_Text.text = USAStates_Normal_Score.ToString("F1");
		USAStates_Hard_Text.text = USAStates_Hard_Score.ToString("F1");
    }
				

	public void ResetAll()
	{
		PlayerPrefs.DeleteKey ("USAStates_Easy_Key");
		PlayerPrefs.DeleteKey ("USAStates_Normal_Key");
		PlayerPrefs.DeleteKey ("USAStates_Hard_Key");

		USAStates_Easy_Text.text = "0";
		USAStates_Normal_Text.text = "0";
		USAStates_Hard_Text.text = "0";
	}



 

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class HighScoreController : MonoBehaviour {

	public Text USAStates_Easy_Score_Text;
	public Text USAStates_Normal_Score_Text;
	public Text USAStates_Hard_Score_Text;
	public Text USAStates_Easy_Time_Text;
	public Text USAStates_Normal_Time_Text;
	public Text USAStates_Hard_Time_Text;

	public Text Europe_Easy_Score_Text;
	public Text Europe_Normal_Score_Text;
	public Text Europe_Hard_Score_Text;
	public Text Europe_Easy_Time_Text;
	public Text Europe_Normal_Time_Text;
	public Text Europe_Hard_Time_Text;


	private float USAStates_Easy_Score;
	private float USAStates_Normal_Score;
	private float USAStates_Hard_Score;
	private int USAStates_Easy_Time;
	private int USAStates_Normal_Time;
	private int USAStates_Hard_Time;

	private float Europe_Easy_Score;
	private float Europe_Normal_Score;
	private float Europe_Hard_Score;
	private int Europe_Easy_Time;
	private int Europe_Normal_Time;
	private int Europe_Hard_Time;

	//!! create button to stroe individual and career scores

	void Start() 
	{

		// Load data from file
		USAStates_Easy_Score = PlayerPrefs.GetFloat("USAStates_Easy_Score_Key", 0);
		USAStates_Normal_Score = PlayerPrefs.GetFloat("USAStates_Normal_Score_Key", 0);
		USAStates_Hard_Score = PlayerPrefs.GetFloat("USAStates_Hard_Score_Key", 0);
		USAStates_Easy_Time = PlayerPrefs.GetInt("USAStates_Easy_Time_Key", 0);
		USAStates_Normal_Time = PlayerPrefs.GetInt("USAStates_Normal_Time_Key", 0);
		USAStates_Hard_Time = PlayerPrefs.GetInt("USAStates_Hard_Time_Key", 0);

		Europe_Easy_Score = PlayerPrefs.GetFloat("Europe_Easy_Score_Key", 0);
		Europe_Normal_Score = PlayerPrefs.GetFloat("Europe_Normal_Score_Key", 0);
		Europe_Hard_Score = PlayerPrefs.GetFloat("Europe_Hard_Score_Key", 0);
		Europe_Easy_Time = PlayerPrefs.GetInt("Europe_Easy_Time_Key", 0);
		Europe_Normal_Time = PlayerPrefs.GetInt("Europe_Normal_Time_Key", 0);
		Europe_Hard_Time = PlayerPrefs.GetInt("Europe_Hard_Time_Key", 0);

		// Update Text values
		USAStates_Easy_Score_Text.text = USAStates_Easy_Score.ToString("P0");
		USAStates_Normal_Score_Text.text = USAStates_Normal_Score.ToString("P0");
		USAStates_Hard_Score_Text.text = USAStates_Hard_Score.ToString("P0");
		USAStates_Easy_Time_Text.text = convertSecondstoString(USAStates_Easy_Time);
		USAStates_Normal_Time_Text.text = convertSecondstoString(USAStates_Normal_Time);
		USAStates_Hard_Time_Text.text = convertSecondstoString(USAStates_Hard_Time);

		Europe_Easy_Score_Text.text = Europe_Easy_Score.ToString("P0");
		Europe_Normal_Score_Text.text = Europe_Normal_Score.ToString("P0");
		Europe_Hard_Score_Text.text = Europe_Hard_Score.ToString("P0");
		Europe_Easy_Time_Text.text = convertSecondstoString(Europe_Easy_Time);
		Europe_Normal_Time_Text.text = convertSecondstoString(Europe_Normal_Time);
		Europe_Hard_Time_Text.text = convertSecondstoString(Europe_Hard_Time);

    }
				

	public void ResetAll()
	{
		PlayerPrefs.DeleteKey ("USAStates_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("USAStates_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("USAStates_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("USAStates_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("USAStates_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("USAStates_Hard_Time_Key");

		USAStates_Easy_Score_Text.text = "0%";
		USAStates_Normal_Score_Text.text = "0%";
		USAStates_Hard_Score_Text.text = "0%";		
		USAStates_Easy_Time_Text.text = "0:00";
		USAStates_Normal_Time_Text.text = "0:00";
		USAStates_Hard_Time_Text.text = "0:00";

		PlayerPrefs.DeleteKey ("Europe_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("Europe_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("Europe_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("Europe_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("Europe_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("Europe_Hard_Time_Key");

		Europe_Easy_Score_Text.text = "0%";
		Europe_Normal_Score_Text.text = "0%";
		Europe_Hard_Score_Text.text = "0%";
		Europe_Easy_Time_Text.text = "0:00";
		Europe_Normal_Time_Text.text = "0:00";
		Europe_Hard_Time_Text.text = "0:00";
	}

	public static string convertSecondstoString(int seconds) {
		string timeString;

		timeString = string.Format ("{0}:{1:00}", seconds / 60, seconds % 60);

		return timeString;

	}



 

}

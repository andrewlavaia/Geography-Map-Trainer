using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class HighScoreController : MonoBehaviour {

	public Text World_Easy_Score_Text;
	public Text World_Normal_Score_Text;
	public Text World_Hard_Score_Text;
	public Text World_Easy_Time_Text;
	public Text World_Normal_Time_Text;
	public Text World_Hard_Time_Text;

	public Text USAStates_Easy_Score_Text;
	public Text USAStates_Normal_Score_Text;
	public Text USAStates_Hard_Score_Text;
	public Text USAStates_Easy_Time_Text;
	public Text USAStates_Normal_Time_Text;
	public Text USAStates_Hard_Time_Text;

	public Text Africa_Easy_Score_Text;
	public Text Africa_Normal_Score_Text;
	public Text Africa_Hard_Score_Text;
	public Text Africa_Easy_Time_Text;
	public Text Africa_Normal_Time_Text;
	public Text Africa_Hard_Time_Text;

	public Text Asia_Easy_Score_Text;
	public Text Asia_Normal_Score_Text;
	public Text Asia_Hard_Score_Text;
	public Text Asia_Easy_Time_Text;
	public Text Asia_Normal_Time_Text;
	public Text Asia_Hard_Time_Text;

	public Text Europe_Easy_Score_Text;
	public Text Europe_Normal_Score_Text;
	public Text Europe_Hard_Score_Text;
	public Text Europe_Easy_Time_Text;
	public Text Europe_Normal_Time_Text;
	public Text Europe_Hard_Time_Text;

	public Text LatinAmerica_Easy_Score_Text;
	public Text LatinAmerica_Normal_Score_Text;
	public Text LatinAmerica_Hard_Score_Text;
	public Text LatinAmerica_Easy_Time_Text;
	public Text LatinAmerica_Normal_Time_Text;
	public Text LatinAmerica_Hard_Time_Text;

	public Text MiddleEast_Easy_Score_Text;
	public Text MiddleEast_Normal_Score_Text;
	public Text MiddleEast_Hard_Score_Text;
	public Text MiddleEast_Easy_Time_Text;
	public Text MiddleEast_Normal_Time_Text;
	public Text MiddleEast_Hard_Time_Text;


	private float World_Easy_Score;
	private float World_Normal_Score;
	private float World_Hard_Score;
	private int World_Easy_Time;
	private int World_Normal_Time;
	private int World_Hard_Time;

	private float USAStates_Easy_Score;
	private float USAStates_Normal_Score;
	private float USAStates_Hard_Score;
	private int USAStates_Easy_Time;
	private int USAStates_Normal_Time;
	private int USAStates_Hard_Time;

	private float Africa_Easy_Score;
	private float Africa_Normal_Score;
	private float Africa_Hard_Score;
	private int Africa_Easy_Time;
	private int Africa_Normal_Time;
	private int Africa_Hard_Time;

	private float Asia_Easy_Score;
	private float Asia_Normal_Score;
	private float Asia_Hard_Score;
	private int Asia_Easy_Time;
	private int Asia_Normal_Time;
	private int Asia_Hard_Time;

	private float Europe_Easy_Score;
	private float Europe_Normal_Score;
	private float Europe_Hard_Score;
	private int Europe_Easy_Time;
	private int Europe_Normal_Time;
	private int Europe_Hard_Time;

	private float LatinAmerica_Easy_Score;
	private float LatinAmerica_Normal_Score;
	private float LatinAmerica_Hard_Score;
	private int LatinAmerica_Easy_Time;
	private int LatinAmerica_Normal_Time;
	private int LatinAmerica_Hard_Time;

	private float MiddleEast_Easy_Score;
	private float MiddleEast_Normal_Score;
	private float MiddleEast_Hard_Score;
	private int MiddleEast_Easy_Time;
	private int MiddleEast_Normal_Time;
	private int MiddleEast_Hard_Time;




	//!! create button to stroe individual and career scores

	void Start() 
	{

		// Load data from file
		World_Easy_Score = PlayerPrefs.GetFloat("World_Easy_Score_Key", 0);
		World_Normal_Score = PlayerPrefs.GetFloat("World_Normal_Score_Key", 0);
		World_Hard_Score = PlayerPrefs.GetFloat("World_Hard_Score_Key", 0);
		World_Easy_Time = PlayerPrefs.GetInt("World_Easy_Time_Key", 0);
		World_Normal_Time = PlayerPrefs.GetInt("World_Normal_Time_Key", 0);
		World_Hard_Time = PlayerPrefs.GetInt("World_Hard_Time_Key", 0);

		USAStates_Easy_Score = PlayerPrefs.GetFloat("USAStates_Easy_Score_Key", 0);
		USAStates_Normal_Score = PlayerPrefs.GetFloat("USAStates_Normal_Score_Key", 0);
		USAStates_Hard_Score = PlayerPrefs.GetFloat("USAStates_Hard_Score_Key", 0);
		USAStates_Easy_Time = PlayerPrefs.GetInt("USAStates_Easy_Time_Key", 0);
		USAStates_Normal_Time = PlayerPrefs.GetInt("USAStates_Normal_Time_Key", 0);
		USAStates_Hard_Time = PlayerPrefs.GetInt("USAStates_Hard_Time_Key", 0);

		Africa_Easy_Score = PlayerPrefs.GetFloat("Africa_Easy_Score_Key", 0);
		Africa_Normal_Score = PlayerPrefs.GetFloat("Africa_Normal_Score_Key", 0);
		Africa_Hard_Score = PlayerPrefs.GetFloat("Africa_Hard_Score_Key", 0);
		Africa_Easy_Time = PlayerPrefs.GetInt("Africa_Easy_Time_Key", 0);
		Africa_Normal_Time = PlayerPrefs.GetInt("Africa_Normal_Time_Key", 0);
		Africa_Hard_Time = PlayerPrefs.GetInt("Africa_Hard_Time_Key", 0);

		Asia_Easy_Score = PlayerPrefs.GetFloat("Asia_Easy_Score_Key", 0);
		Asia_Normal_Score = PlayerPrefs.GetFloat("Asia_Normal_Score_Key", 0);
		Asia_Hard_Score = PlayerPrefs.GetFloat("Asia_Hard_Score_Key", 0);
		Asia_Easy_Time = PlayerPrefs.GetInt("Asia_Easy_Time_Key", 0);
		Asia_Normal_Time = PlayerPrefs.GetInt("Asia_Normal_Time_Key", 0);
		Asia_Hard_Time = PlayerPrefs.GetInt("Asia_Hard_Time_Key", 0);

		Europe_Easy_Score = PlayerPrefs.GetFloat("Europe_Easy_Score_Key", 0);
		Europe_Normal_Score = PlayerPrefs.GetFloat("Europe_Normal_Score_Key", 0);
		Europe_Hard_Score = PlayerPrefs.GetFloat("Europe_Hard_Score_Key", 0);
		Europe_Easy_Time = PlayerPrefs.GetInt("Europe_Easy_Time_Key", 0);
		Europe_Normal_Time = PlayerPrefs.GetInt("Europe_Normal_Time_Key", 0);
		Europe_Hard_Time = PlayerPrefs.GetInt("Europe_Hard_Time_Key", 0);

		LatinAmerica_Easy_Score = PlayerPrefs.GetFloat("LatinAmerica_Easy_Score_Key", 0);
		LatinAmerica_Normal_Score = PlayerPrefs.GetFloat("LatinAmerica_Normal_Score_Key", 0);
		LatinAmerica_Hard_Score = PlayerPrefs.GetFloat("LatinAmerica_Hard_Score_Key", 0);
		LatinAmerica_Easy_Time = PlayerPrefs.GetInt("LatinAmerica_Easy_Time_Key", 0);
		LatinAmerica_Normal_Time = PlayerPrefs.GetInt("LatinAmerica_Normal_Time_Key", 0);
		LatinAmerica_Hard_Time = PlayerPrefs.GetInt("LatinAmerica_Hard_Time_Key", 0);

		MiddleEast_Easy_Score = PlayerPrefs.GetFloat("MiddleEast_Easy_Score_Key", 0);
		MiddleEast_Normal_Score = PlayerPrefs.GetFloat("MiddleEast_Normal_Score_Key", 0);
		MiddleEast_Hard_Score = PlayerPrefs.GetFloat("MiddleEast_Hard_Score_Key", 0);
		MiddleEast_Easy_Time = PlayerPrefs.GetInt("MiddleEast_Easy_Time_Key", 0);
		MiddleEast_Normal_Time = PlayerPrefs.GetInt("MiddleEast_Normal_Time_Key", 0);
		MiddleEast_Hard_Time = PlayerPrefs.GetInt("MiddleEast_Hard_Time_Key", 0);


		// Update Text values
		World_Easy_Score_Text.text = World_Easy_Score.ToString("P0");
		World_Normal_Score_Text.text = World_Normal_Score.ToString("P0");
		World_Hard_Score_Text.text = World_Hard_Score.ToString("P0");
		World_Easy_Time_Text.text = convertSecondstoString(World_Easy_Time);
		World_Normal_Time_Text.text = convertSecondstoString(World_Normal_Time);
		World_Hard_Time_Text.text = convertSecondstoString(World_Hard_Time);

		USAStates_Easy_Score_Text.text = USAStates_Easy_Score.ToString("P0");
		USAStates_Normal_Score_Text.text = USAStates_Normal_Score.ToString("P0");
		USAStates_Hard_Score_Text.text = USAStates_Hard_Score.ToString("P0");
		USAStates_Easy_Time_Text.text = convertSecondstoString(USAStates_Easy_Time);
		USAStates_Normal_Time_Text.text = convertSecondstoString(USAStates_Normal_Time);
		USAStates_Hard_Time_Text.text = convertSecondstoString(USAStates_Hard_Time);

		Africa_Easy_Score_Text.text = Africa_Easy_Score.ToString("P0");
		Africa_Normal_Score_Text.text = Africa_Normal_Score.ToString("P0");
		Africa_Hard_Score_Text.text = Africa_Hard_Score.ToString("P0");
		Africa_Easy_Time_Text.text = convertSecondstoString(Africa_Easy_Time);
		Africa_Normal_Time_Text.text = convertSecondstoString(Africa_Normal_Time);
		Africa_Hard_Time_Text.text = convertSecondstoString(Africa_Hard_Time);

		Asia_Easy_Score_Text.text = Asia_Easy_Score.ToString("P0");
		Asia_Normal_Score_Text.text = Asia_Normal_Score.ToString("P0");
		Asia_Hard_Score_Text.text = Asia_Hard_Score.ToString("P0");
		Asia_Easy_Time_Text.text = convertSecondstoString(Asia_Easy_Time);
		Asia_Normal_Time_Text.text = convertSecondstoString(Asia_Normal_Time);
		Asia_Hard_Time_Text.text = convertSecondstoString(Asia_Hard_Time);

		Europe_Easy_Score_Text.text = Europe_Easy_Score.ToString("P0");
		Europe_Normal_Score_Text.text = Europe_Normal_Score.ToString("P0");
		Europe_Hard_Score_Text.text = Europe_Hard_Score.ToString("P0");
		Europe_Easy_Time_Text.text = convertSecondstoString(Europe_Easy_Time);
		Europe_Normal_Time_Text.text = convertSecondstoString(Europe_Normal_Time);
		Europe_Hard_Time_Text.text = convertSecondstoString(Europe_Hard_Time);

		LatinAmerica_Easy_Score_Text.text = LatinAmerica_Easy_Score.ToString("P0");
		LatinAmerica_Normal_Score_Text.text = LatinAmerica_Normal_Score.ToString("P0");
		LatinAmerica_Hard_Score_Text.text = LatinAmerica_Hard_Score.ToString("P0");
		LatinAmerica_Easy_Time_Text.text = convertSecondstoString(LatinAmerica_Easy_Time);
		LatinAmerica_Normal_Time_Text.text = convertSecondstoString(LatinAmerica_Normal_Time);
		LatinAmerica_Hard_Time_Text.text = convertSecondstoString(LatinAmerica_Hard_Time);

		MiddleEast_Easy_Score_Text.text = MiddleEast_Easy_Score.ToString("P0");
		MiddleEast_Normal_Score_Text.text = MiddleEast_Normal_Score.ToString("P0");
		MiddleEast_Hard_Score_Text.text = MiddleEast_Hard_Score.ToString("P0");
		MiddleEast_Easy_Time_Text.text = convertSecondstoString(MiddleEast_Easy_Time);
		MiddleEast_Normal_Time_Text.text = convertSecondstoString(MiddleEast_Normal_Time);
		MiddleEast_Hard_Time_Text.text = convertSecondstoString(MiddleEast_Hard_Time);



    }
				

	public void ResetAll()
	{
		PlayerPrefs.DeleteKey ("World_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("World_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("World_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("World_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("World_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("World_Hard_Time_Key");

		World_Easy_Score_Text.text = "0%";
		World_Normal_Score_Text.text = "0%";
		World_Hard_Score_Text.text = "0%";
		World_Easy_Time_Text.text = "0:00";
		World_Normal_Time_Text.text = "0:00";
		World_Hard_Time_Text.text = "0:00";

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

		PlayerPrefs.DeleteKey ("Africa_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("Africa_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("Africa_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("Africa_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("Africa_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("Africa_Hard_Time_Key");

		Africa_Easy_Score_Text.text = "0%";
		Africa_Normal_Score_Text.text = "0%";
		Africa_Hard_Score_Text.text = "0%";
		Africa_Easy_Time_Text.text = "0:00";
		Africa_Normal_Time_Text.text = "0:00";
		Africa_Hard_Time_Text.text = "0:00";

		PlayerPrefs.DeleteKey ("Asia_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("Asia_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("Asia_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("Asia_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("Asia_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("Asia_Hard_Time_Key");

		Asia_Easy_Score_Text.text = "0%";
		Asia_Normal_Score_Text.text = "0%";
		Asia_Hard_Score_Text.text = "0%";
		Asia_Easy_Time_Text.text = "0:00";
		Asia_Normal_Time_Text.text = "0:00";
		Asia_Hard_Time_Text.text = "0:00";

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

		PlayerPrefs.DeleteKey ("LatinAmerica_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("LatinAmerica_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("LatinAmerica_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("LatinAmerica_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("LatinAmerica_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("LatinAmerica_Hard_Time_Key");

		LatinAmerica_Easy_Score_Text.text = "0%";
		LatinAmerica_Normal_Score_Text.text = "0%";
		LatinAmerica_Hard_Score_Text.text = "0%";
		LatinAmerica_Easy_Time_Text.text = "0:00";
		LatinAmerica_Normal_Time_Text.text = "0:00";
		LatinAmerica_Hard_Time_Text.text = "0:00";

		PlayerPrefs.DeleteKey ("MiddleEast_Easy_Score_Key");
		PlayerPrefs.DeleteKey ("MiddleEast_Normal_Score_Key");
		PlayerPrefs.DeleteKey ("MiddleEast_Hard_Score_Key");
		PlayerPrefs.DeleteKey ("MiddleEast_Easy_Time_Key");
		PlayerPrefs.DeleteKey ("MiddleEast_Normal_Time_Key");
		PlayerPrefs.DeleteKey ("MiddleEast_Hard_Time_Key");

		MiddleEast_Easy_Score_Text.text = "0%";
		MiddleEast_Normal_Score_Text.text = "0%";
		MiddleEast_Hard_Score_Text.text = "0%";
		MiddleEast_Easy_Time_Text.text = "0:00";
		MiddleEast_Normal_Time_Text.text = "0:00";
		MiddleEast_Hard_Time_Text.text = "0:00";


	}

	public static string convertSecondstoString(int seconds) {
		string timeString;

		timeString = string.Format ("{0}:{1:00}", seconds / 60, seconds % 60);

		return timeString;

	}



 

}

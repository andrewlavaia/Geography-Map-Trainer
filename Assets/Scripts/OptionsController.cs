using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class OptionsController : MonoBehaviour {

	public Button soundButton;
	public Sprite switchOn;
	public Sprite switchOff;

	public Button delayButtonShort;
	public Button delayButtonMedium;
	public Button delayButtonLong;
	public Sprite radioChecked;
	public Sprite radioUnchecked;

	// Use this for initialization
	void Start () {
		if (PlayerPrefs.GetInt ("SETTINGS_Sound") == 0) {
			soundButton.GetComponent<Image> ().sprite = switchOff;
		} 
		else {
			soundButton.GetComponent<Image> ().sprite = switchOn;
		}

		if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 1) {
			delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;		
		} 
		else if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 3) {
			delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioChecked;
		} 
		else { // default to 1 if setting is not set yet
			delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		}
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void pressSwitch() {
		if (soundButton.GetComponent<Image> ().sprite.Equals(switchOn) ) {
			soundButton.GetComponent<Image> ().sprite = switchOff;
			PlayerPrefs.SetInt ("SETTINGS_Sound", 0);
		} else {
			soundButton.GetComponent<Image> ().sprite = switchOn;
			PlayerPrefs.SetInt ("SETTINGS_Sound", 1);
		}
	}

	public void pressDelayButtonShort() {
		delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 1);
	}

	public void pressDelayButtonMedium() {
		delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 2);
	}

	public void pressDelayButtonLong() {
		delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioChecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 3);
	}

	public void returnToPreviousScreen() {
		if (GameState.saved) {
			SceneManager.LoadScene ("Map");
		} 
		else {
			SceneManager.LoadScene ("Menu");
		}
	}

}

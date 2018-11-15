using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionsController : MonoBehaviour {

	public Button optionButton;
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
			optionButton.GetComponent<Image> ().sprite = switchOff;
		} else {
			optionButton.GetComponent<Image> ().sprite = switchOn;
		}

		if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 0) {
			delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;		
		} else if (PlayerPrefs.GetInt ("SETTINGS_Delay") == 2) {
			delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioChecked;
		} else { // default to 1
			delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
			delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
			delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		}
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void pressSwitch() {
		if (optionButton.GetComponent<Image> ().sprite.Equals(switchOn) ) {
			optionButton.GetComponent<Image> ().sprite = switchOff;
			PlayerPrefs.SetInt ("SETTINGS_Sound", 0);
		} else {
			optionButton.GetComponent<Image> ().sprite = switchOn;
			PlayerPrefs.SetInt ("SETTINGS_Sound", 1);
		}
	}

	public void pressDelayButtonShort() {
		delayButtonShort.GetComponent<Image> ().sprite = radioChecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 0);
	}

	public void pressDelayButtonMedium() {
		delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioChecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioUnchecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 1);
	}

	public void pressDelayButtonLong() {
		delayButtonShort.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonMedium.GetComponent<Image> ().sprite = radioUnchecked;
		delayButtonLong.GetComponent<Image> ().sprite = radioChecked;	
		PlayerPrefs.SetInt ("SETTINGS_Delay", 2);
	}

}

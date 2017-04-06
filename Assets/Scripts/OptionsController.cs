using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionsController : MonoBehaviour {

	public Button optionButton;
	public Sprite switchOn;
	public Sprite switchOff;

	// Use this for initialization
	void Start () {
		if (PlayerPrefs.GetInt ("SETTINGS_Sound") == 0) {
			optionButton.GetComponent<Image> ().sprite = switchOff;
		} else {
			optionButton.GetComponent<Image> ().sprite = switchOn;
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
}

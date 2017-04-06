using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class TextButton : MonoBehaviour, IPointerClickHandler, IPointerEnterHandler, IPointerExitHandler
{

    public GameObject state;
    public Text theText;

    public void OnPointerClick(PointerEventData eventData) {
		if (state.activeSelf == true) { // selected state = only active state
			USAMap.Correct();
			if (MainMenuController.getDifficulty() == 1) { 
				this.gameObject.SetActive (false); // hide text button after correct answer in easy mode
			}
		} else { // wrong state selected
			USAMap.Miss();
		}
    }

    public void OnPointerEnter(PointerEventData eventData) {
        theText.color = Color.blue;
        theText.fontStyle = FontStyle.Bold;
    }

    public void OnPointerExit(PointerEventData eventData) {
        theText.color = Color.black;
        theText.fontStyle = FontStyle.Normal;
    }

}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointerController : MonoBehaviour {


	public Button confirmButton;
	private Rigidbody2D rb2d;
	public static GameObject[] collisionObject = {null, null}; // an array is used for more generous collision checking

	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
	}

	// Update is called once per frame
	void FixedUpdate () {		
		Vector3 pos = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2,Screen.height/2,0));
		rb2d.MovePosition (pos);
	}

	void OnTriggerEnter2D(Collider2D other) {
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		collisionObject [1] = collisionObject [0]; // allows for a correct answer when two regions are selected at once (ie colliders overflow) 
		collisionObject [0] = other.gameObject;
	}

	void OnTriggerExit2D(Collider2D other) {
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		collisionObject [1] = collisionObject [0]; 	// must reset collisionObject[1] otherwise it will be a correct answer if the region was the second to last region selected
													// collisionObject[1] should not be null because it will cause errors in clickConfirm()
	}

	public void clickConfirm() {
		if (collisionObject[0] != null && (collisionObject[0].name.ToString () == MapController.getCurrentRegionName () || collisionObject[1].name.ToString () == MapController.getCurrentRegionName ())) {
			MapController.Correct ();
		} else {
			MapController.Miss ();
		}

	}
		
}

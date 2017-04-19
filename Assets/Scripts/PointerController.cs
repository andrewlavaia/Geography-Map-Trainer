using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointerController : MonoBehaviour {


	public Button confirmButton;

	private Rigidbody2D rb2d;

	//public static Text debugText;
	public static GameObject collisionObject;


	// Use this for initialization
	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		//debugText = GameObject.Find("DebugText").GetComponent<Text>();
		collisionObject = null;
	}

	// Update is called once per frame
	void FixedUpdate () {		
		Vector3 pos = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2,Screen.height/2,0));
		rb2d.MovePosition (pos);
	}

	void Update() {
		

	}

	void OnTriggerEnter2D(Collider2D other) {
		//debugText.text = other.gameObject.name.ToString ();
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		collisionObject = other.gameObject;
	}

	void OnTriggerExit2D(Collider2D other) {
		//debugText.text = "";
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
	}

	public void clickConfirm() {
		if (collisionObject.name.ToString () == MapController.getCurrentRegionName ()) {
			MapController.Correct ();
			//debugText.text = collisionObject.name.ToString ();
		} else {
			//debugText.text = debugText.text = collisionObject.name.ToString () + " - " + MapController.getCurrentRegionName (); 
			MapController.Miss ();
			//MapController.SetIncorrectStateText (collisionObject.name.ToString ());
		}

	}
		
}

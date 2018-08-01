using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PointerController : MonoBehaviour {


	public Button confirmButton;
	private Rigidbody2D rb2d;
	public static List<string> collisionList;

	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		collisionList = new List<string> ();
	}

	// Update is called once per frame
	void FixedUpdate () {		
		Vector3 pos = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width/2,Screen.height/2,0));
		rb2d.MovePosition (pos);
	}

	void OnTriggerEnter2D(Collider2D other) {
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = true;
		collisionList.Add (other.gameObject.name.ToString());
	}

	void OnTriggerExit2D(Collider2D other) {
		other.gameObject.GetComponent<SpriteRenderer> ().enabled = false;
		collisionList.Remove (other.gameObject.name.ToString());
	}

	public void clickConfirm() {
		if (collisionList.Contains(MapController.getCurrentRegionName ())) {
			MapController.Correct ();
		} else {
			MapController.Miss ();
		}

	}
		
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteSwap : MonoBehaviour {

	public Sprite startingSprite;
	public Sprite swappedSprite;

	public void Swap() {
		if (this.GetComponent<SpriteRenderer> ().sprite == startingSprite)
			this.GetComponent<SpriteRenderer> ().sprite = swappedSprite;
		else
			this.GetComponent<SpriteRenderer> ().sprite = startingSprite;
	}
}

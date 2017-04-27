using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// Swap Color In Sprite
/// Takes a Texture2d from current sprite and replaced one specific color within that sprite 
/// Requires: Sprite needs to have read/write enabled and must be uncompressed in RGBA 32 bit

public class SwapColorInSprite : MonoBehaviour {

	private Texture2D uvMap;
	private Color correctColor;
	private Color missColor;

	void Start () {

		// SpriteRenderer may not be enabled intially so initialization was moved down into call functions
		//uvMap = GetComponent<SpriteRenderer> ().sprite.texture; 

		correctColor = new Color32(100,173,229,255); // light blue
		missColor = new Color32(212,25,25,255); // red
	}

	public void SetMissColor() 
	{
		uvMap = GetComponent<SpriteRenderer> ().sprite.texture;
		this.ChangeColor (correctColor, missColor);
	}

	public void SetCorrectColor() 
	{
		uvMap = GetComponent<SpriteRenderer> ().sprite.texture;
		this.ChangeColor (missColor, correctColor);
	}

	private void ChangeColor(Color currentColor, Color newColor)
	{
		Color[] Pixels = uvMap.GetPixels ();

		for(int x = 0; x < uvMap.width; x++) {
			for (int y = 0; y < uvMap.height; y++) {
				
				Color currentPixel = Pixels [x + y * uvMap.width];

				if (currentPixel == currentColor) {
					Pixels [x + y * uvMap.width] = newColor;
				}
			}
		}

		uvMap.SetPixels (Pixels);
		uvMap.Apply ();
	}

}

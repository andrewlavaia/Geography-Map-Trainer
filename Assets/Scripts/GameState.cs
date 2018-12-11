using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameStateSingleton : MonoBehaviour {
	public static GameStateSingleton Instance;
	// public GameState gameState = new GameState();

	void Awake () {
		if (Instance == null) {
			DontDestroyOnLoad(gameObject);
			Instance = this;
		}
		else if (Instance != this) {
			Destroy(gameObject);
		}
	}
}

public static class GameState {
	public static bool saved = false;
	public static int difficulty = 0;	
	public static int region = 0;
	public static List<GameObject> stateList;
	public static int correct = 0;
	public static int missed = 0;
	public static float score = 0;
	public static float timeLeft = 0;

	public static void reset() {
        Debug.Log("resetting game state");
		saved = false;
		difficulty = 0;	
		region = 0;
		stateList = null;
		correct = 0;
		missed = 0;
		score = 0;
		timeLeft = 0;
	}
}

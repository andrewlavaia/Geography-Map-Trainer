using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameState {
	public static bool saved;
	public static int difficulty;	
	public static int region;
	public static List<string> state_names;
	public static int correct;
	public static int missed;
	public static float score;
	public static float timeLeft;

    static GameState() {
       	saved = false;
		difficulty = 0;	
		region = 0;
		state_names = new List<string>();
		correct = 0;
		missed = 0;
		score = 0;
		timeLeft = 0; 
    }

	public static void reset() {
		saved = false;
		difficulty = 0;	
		region = 0;
		state_names.Clear();
		correct = 0;
		missed = 0;
		score = 0;
		timeLeft = 0;
	}
}

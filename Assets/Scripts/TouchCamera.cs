using UnityEngine;

public class TouchCamera : MonoBehaviour {
	static Camera cam;
	static Vector3 starting_position;
	static Quaternion starting_rotation;
	static float starting_size;

	Vector2?[] oldTouchPositions = {
		null,
		null
	};
	Vector2 oldTouchVector;
	float oldTouchDistance;

	void Start() {
		cam = Camera.main;
		starting_position = transform.position;
		starting_rotation = transform.localRotation;
		starting_size = cam.orthographicSize;
	}

	void Update() {
		if (Input.touchCount == 0) {
			oldTouchPositions[0] = null;
			oldTouchPositions[1] = null;
		}
		else if (Input.touchCount == 1) {
			if (oldTouchPositions[0] == null || oldTouchPositions[1] != null) {
				oldTouchPositions[0] = Input.GetTouch(0).position;
				oldTouchPositions[1] = null;
			}
			else {
				Vector2 newTouchPosition = Input.GetTouch(0).position;
				
				transform.position += transform.TransformDirection((Vector3)((oldTouchPositions[0] - newTouchPosition) * cam.orthographicSize / cam.pixelHeight * 2f));
				
				oldTouchPositions[0] = newTouchPosition;
			}
		}
		else {
			if (oldTouchPositions[1] == null) {
				oldTouchPositions[0] = Input.GetTouch(0).position;
				oldTouchPositions[1] = Input.GetTouch(1).position;
				oldTouchVector = (Vector2)(oldTouchPositions[0] - oldTouchPositions[1]);
				oldTouchDistance = oldTouchVector.magnitude;
			}
			else {
				Vector2 screen = new Vector2(cam.pixelWidth, cam.pixelHeight);
				
				Vector2[] newTouchPositions = {
					Input.GetTouch(0).position,
					Input.GetTouch(1).position
				};
				Vector2 newTouchVector = newTouchPositions[0] - newTouchPositions[1];
				float newTouchDistance = newTouchVector.magnitude;

				transform.position += transform.TransformDirection((Vector3)((oldTouchPositions[0] + oldTouchPositions[1] - screen) * cam.orthographicSize / screen.y));

				// Disable rotation of maps
				//transform.localRotation *= Quaternion.Euler(new Vector3(0, 0, Mathf.Asin(Mathf.Clamp((oldTouchVector.y * newTouchVector.x - oldTouchVector.x * newTouchVector.y) / oldTouchDistance / newTouchDistance, -1f, 1f)) / 0.0174532924f));

				cam.orthographicSize *= oldTouchDistance / newTouchDistance;
				transform.position -= transform.TransformDirection((newTouchPositions[0] + newTouchPositions[1] - screen) * cam.orthographicSize / screen.y);

				oldTouchPositions[0] = newTouchPositions[0];
				oldTouchPositions[1] = newTouchPositions[1];
				oldTouchVector = newTouchVector;
				oldTouchDistance = newTouchDistance;
			}
		}
	}

	public static void ResetCamera(){
		if (cam != null) {
			cam.transform.position = starting_position;
			cam.transform.localRotation = starting_rotation;
			cam.orthographicSize = starting_size;
		}
	}

	public static void MoveCamera(GameObject obj){
		Vector3 new_position = obj.transform.position;

		// need to transform position by scale for USA and Europe since they were done differently
		if (MainMenuController.getRegion() == 1 || MainMenuController.getRegion() == 2) {
			new_position.x *= obj.GetComponentInParent<Transform> ().localScale.x;
			new_position.y *= obj.GetComponentInParent<Transform> ().localScale.y;
		}

		if (cam != null) { 
			cam.transform.localRotation = starting_rotation;
			cam.orthographicSize = starting_size;
			cam.transform.position = starting_position + new_position;
		}
	}
}

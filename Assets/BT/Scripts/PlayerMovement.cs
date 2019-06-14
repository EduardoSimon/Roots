using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float Speed = 7;

    // Update is called once per frame
    void Update()
    {
#if UNITY_IOS
        if (Input.touchCount > 0 &&
            Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            // Get movement of the finger since last frame
            var touchDeltaPosition = Input.GetTouch(0).deltaPosition;

            Vector3 mobileMovement = new Vector3(touchDeltaPosition.x * 2 * Time.deltaTime, 0, touchDeltaPosition.y * 2 * Time.deltaTime);
            // Move object across XY plane
            transform.position += mobileMovement;
        }

        return;
#endif
        Vector3 movement =
            new Vector3(Input.GetAxisRaw("Horizontal") * Speed, 0, Input.GetAxisRaw("Vertical") * Speed) *
            Time.deltaTime;

        transform.position += movement;
    }
}
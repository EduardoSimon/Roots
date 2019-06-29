using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float Speed = 7;

    public Joystick Joystick;
    
    // Update is called once per frame
    void Update()
    {
#if UNITY_IOS || UNITY_ANDROID

            Vector3 mobileMovement = new Vector3(Joystick.Horizontal* Speed * Time.deltaTime, 0, Joystick.Vertical * Speed * Time.deltaTime);
            transform.position += mobileMovement;
            return;
#endif
        Vector3 movement =
            new Vector3(Input.GetAxisRaw("Horizontal") * Speed, 0, Input.GetAxisRaw("Vertical") * Speed) *
            Time.deltaTime;

        transform.position += movement;
    }
}
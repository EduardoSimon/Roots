using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float Speed = 7;

    // Update is called once per frame
    void Update()
    {
        Vector3 movement = new Vector3(Input.GetAxisRaw("Horizontal") * Speed,0, Input.GetAxisRaw("Vertical") * Speed) * Time.deltaTime;

        transform.position += movement;
    }
}

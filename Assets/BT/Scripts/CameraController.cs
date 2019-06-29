using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour
{
    public bool lockCursor;
    public float mouseSensitivity = 10;
    public Transform target;
    public float dstFromTarget = 2;
    public Vector2 pitchMinMax = new Vector2(-40, 85);
    public float horizontalOffset;

    public float rotationSmoothTime = .12f;

    public Joystick Joystick;

    Vector3 rotationSmoothVelocity;
    Vector3 currentRotation;

    float yaw;
    float pitch;

    void Start()
    {
#if !UNITY_IOS || UNITY_ANDROID
        Joystick.gameObject.SetActive(false);
#endif

        if (lockCursor)
        {
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }
    }

    void LateUpdate()
    {
#if !UNITY_IOS || UNITY_ANDROID
        float h = Input.GetAxis("Mouse X");
        float v = Input.GetAxis("Mouse Y");
#else
        float h = Joystick.Horizontal;
        float v = Joystick.Vertical;
#endif

        yaw += h * mouseSensitivity;
        pitch -= v * mouseSensitivity;
        pitch = Mathf.Clamp(pitch, pitchMinMax.x, pitchMinMax.y);

        currentRotation = Vector3.SmoothDamp(currentRotation, new Vector3(pitch, yaw), ref rotationSmoothVelocity,
            rotationSmoothTime);
        var transform1 = transform;

        transform1.eulerAngles = currentRotation;

        transform1.position =
            target.position - transform1.forward * dstFromTarget - transform1.right * horizontalOffset;
    }
}
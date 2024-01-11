using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
public class snapGrabbable : MonoBehaviour
{
    private Vector3 _initialPosition;
    public GameObject detectorObj;
    private void Start()
    {
        _initialPosition = transform.position;
        //GetComponent<Grabbable>().onGrabStart.AddListener(OnGrab);
        GetComponent<Grabbable>().onGrabEnd.AddListener(OnRelease);
    }
    private void OnGrab()
    {
        //disable kinematic
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            //rb.isKinematic = false;
        }
    }
    private void OnRelease()
    {
        if (transform.position.y < (_initialPosition.y + 0.03f) )
        {
            List<GameObject> ballsInside = new List<GameObject>();
            ballsInside = detectorObj.GetComponent<ballSequenceDetector>().getSphereInsiede();

            transform.position = new Vector3(transform.position.x, _initialPosition.y, transform.position.z);
            transform.rotation = Quaternion.identity;

            Rigidbody rb = GetComponent<Rigidbody>();
            if (rb != null)
            {
                rb.velocity = Vector3.zero;
                rb.angularVelocity = Vector3.zero;
                //enable kinematic
                //rb.isKinematic = true;
            }
            foreach (var ball in ballsInside)
            {
                ball.transform.position = new Vector3(
                    transform.position.x, ball.transform.position.y, transform.position.z);
                Rigidbody _rb = ball.GetComponent<Rigidbody>();
                if (_rb != null)
                {
                    _rb.velocity = Vector3.zero;
                    _rb.angularVelocity = Vector3.zero;
                }
            }
        }
    }
}
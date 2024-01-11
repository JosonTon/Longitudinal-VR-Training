using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testEnableFeatre : MonoBehaviour
{
    private float _fixedTIme;
    private float _runTime;
    private float deltaFixed;
    private float delta;
    // Start is called before the first frame update
    void Start()
    {
        _fixedTIme = _runTime = 0f;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        _fixedTIme = Time.fixedTime;
        deltaFixed += Time.fixedDeltaTime;
        if (deltaFixed >= 1.0f / 30.0f)
        {
            //output
            //string info;
            //info = "f_time: " + _fixedTIme.ToString();
            //Debug.Log(info);
            deltaFixed = 0f;
        }
    }
    void Update()
    {
        _runTime = Time.time;
        delta += Time.deltaTime;
        if (delta >= 1.0 / 30.0f)
        {
            //output
            string info;
            //info = "time: " + _runTime.ToString();
            //Debug.Log(info);
            info = "f vs t: " + _fixedTIme.ToString() + " | " + _runTime.ToString();
            Debug.Log(info);
            delta = 0;
        }
    }
}

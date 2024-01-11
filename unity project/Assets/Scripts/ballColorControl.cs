using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ballColorControl : MonoBehaviour
{
    public Material mat_red;
    public Material mat_green;
    public Material mat_blue;
    
    void Start()
    {
        switch (gameObject.tag)
        {
            case "Green": gameObject.GetComponent<Renderer>().material = mat_green; break;
            case "Blue": gameObject.GetComponent<Renderer>().material = mat_blue; break;
            default: gameObject.GetComponent<Renderer>().material = mat_red; break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

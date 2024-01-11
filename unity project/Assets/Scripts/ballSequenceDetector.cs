using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Oculus.Interaction.Samples;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

public class ballSequenceDetector : MonoBehaviour
{
    //0 for Red, 1 for Green, 2 for Blue.
    private List<int> ballSeq = new List<int>();
    public GameObject globalManager;
    private List<GameObject> sphereInside = new List<GameObject>();
    public int _posIndex;
    private void removeBall(List<GameObject> list, GameObject ball)
    {
        int id = ball.GetInstanceID();
        int index = -1;
        for (int i = 0; i < list.Count; i++)
        {
            if (list[i].GetInstanceID() == id)
            {
                index = i;
            }
        }
        if (index != -1)
        {
            list.RemoveAt(index);
        }
    }
    void Start()
    {

    } 
    void Update()
    {

    }
    public void updateBallSeq()
    {
        ballSeq.Clear();
        List<float> yPos = new List<float>();
        foreach (GameObject item in sphereInside)
        {
            switch (item.tag)
            {
                case "Green": ballSeq.Add(1); break;
                case "Blue": ballSeq.Add(2); break;
                default: ballSeq.Add(0); break;
            }
            yPos.Add(item.transform.position.y);
        }
        //sort ball sequence by position.y
        //using bubble sort
        float yTemp;
        int idTemp;
        for (int i = 0; i < ballSeq.Count-1; i++)
        {
            for (int j = 0; j < ballSeq.Count-i-1; j++)
            {
                if (yPos[j] > yPos[j+1])
                {
                    //swap y value
                    yTemp = yPos[j];
                    yPos[j] = yPos[j+1];
                    yPos[j+1] = yTemp;
                    //and swap id value
                    idTemp = ballSeq[j];
                    ballSeq[j] = ballSeq[j+1];
                    ballSeq[j+1] = idTemp;
                }
            }
        }
        
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Red") || other.gameObject.CompareTag("Green") || other.gameObject.CompareTag("Blue"))
        {
            //add other to ball id list
            sphereInside.Add(other.gameObject);
            other.gameObject.GetComponent<RespawnOnDrop>().posIndex = _posIndex;
            lockInteract();
            //update ball seq
            //checkResult();
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Red") || other.gameObject.CompareTag("Green") || other.gameObject.CompareTag("Blue"))
        {
            //add other to ball id list
            removeBall(sphereInside, other.gameObject);
            lockInteract();
            //checkResult();
        }
    }
    private void lockInteract()
    {
        int tempIndex = 0;
        float tempY = -1;
        for (int i = 0; i < sphereInside.Count; i++)
        {
            float thisY = sphereInside[i].gameObject.transform.position.y;
            if ( thisY > tempY )
            {
                tempIndex = i;
                tempY = thisY;
            }
        }
        for (int i = 0; i < sphereInside.Count; i++)
        {
            if( i != tempIndex)
            {
                sphereInside[i].GetComponent<Grabbable>().enabled = false;
                sphereInside[i].GetComponent<HandGrabInteractable>().enabled = false;
                sphereInside[i].GetComponent<PhysicsGrabbable>().enabled = false;
            }
            else
            {
                sphereInside[i].GetComponent<Grabbable>().enabled = true;
                sphereInside[i].GetComponent<HandGrabInteractable>().enabled = true;
                sphereInside[i].GetComponent<PhysicsGrabbable>().enabled = true;
            }
        }
    }
    public List<int> getCurrentBallSeq()
    {
        updateBallSeq();
        return ballSeq;
    }
    public void checkResult()
    {
        //check if ball sequence meet the requirements
        updateBallSeq();
        globalManager.GetComponent<globalGameManager>().checkBallSeqStatus();
        globalManager.GetComponent<globalGameManager>().checkBallSequence();
    }
    public List<GameObject> getSphereInsiede()
    {
        return sphereInside;
    }
    // void OnTriggerEnter(Collider other)
    // {
    //     if (other.gameObject.CompareTag("Red") || other.gameObject.CompareTag("Green") || other.gameObject.CompareTag("Blue"))
    //     {
    //         switch (other.gameObject.tag)
    //         {
    //             case "Green": ballSeq.Add(1); break;
    //             case "Blue": ballSeq.Add(2); break;
    //             default: ballSeq.Add(0); break;
    //         }
    //         globalManager.GetComponent<globalGameManager>().checkBallSeqStatus();
    //         globalManager.GetComponent<globalGameManager>().checkBallSequence();
    //         Debug.Log("Enter " + other.gameObject.tag);
    //     }
    // }
    // void OnTriggerExit(Collider other)
    // {
    //     if (other.gameObject.CompareTag("Red") || other.gameObject.CompareTag("Green") || other.gameObject.CompareTag("Blue"))
    //     {
    //         ballSeq.RemoveAt(ballSeq.Count - 1);
    //         globalManager.GetComponent<globalGameManager>().checkBallSeqStatus();
    //         globalManager.GetComponent<globalGameManager>().checkBallSequence();
    //         Debug.Log("Exit");
    //     }
    // }
    
}
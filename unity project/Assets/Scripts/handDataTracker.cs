using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class handDataTracker : MonoBehaviour
{
    [SerializeField] private OVRHand l_hand_prefab;
    [SerializeField] private OVRHand r_hand_prefab;
    [SerializeField] private GameObject handVelMarker_L;
    [SerializeField] private GameObject handVelMarker_R;
    //samples per second
    [SerializeField] private int trackingFrequency = 30;
    //left hand
    [SerializeField] private GameObject l_wrist;
    [SerializeField] private GameObject l_thumb_1;
    [SerializeField] private GameObject l_thumb_2;
    [SerializeField] private GameObject l_thumb_3;
    [SerializeField] private GameObject l_thumb_4;
    [SerializeField] private GameObject l_index_1;
    [SerializeField] private GameObject l_index_2;
    [SerializeField] private GameObject l_index_3;
    [SerializeField] private GameObject l_index_4;
    [SerializeField] private GameObject l_middle_1;
    [SerializeField] private GameObject l_middle_2;
    [SerializeField] private GameObject l_middle_3;
    [SerializeField] private GameObject l_middle_4;
    [SerializeField] private GameObject l_ring_1;
    [SerializeField] private GameObject l_ring_2;
    [SerializeField] private GameObject l_ring_3;
    [SerializeField] private GameObject l_ring_4;
    [SerializeField] private GameObject l_pinky_1;
    [SerializeField] private GameObject l_pinky_2;
    [SerializeField] private GameObject l_pinky_3;
    [SerializeField] private GameObject l_pinky_4;
    //right hand
    [SerializeField] private GameObject r_wrist;
    [SerializeField] private GameObject r_thumb_1;
    [SerializeField] private GameObject r_thumb_2;
    [SerializeField] private GameObject r_thumb_3;
    [SerializeField] private GameObject r_thumb_4;
    [SerializeField] private GameObject r_index_1;
    [SerializeField] private GameObject r_index_2;
    [SerializeField] private GameObject r_index_3;
    [SerializeField] private GameObject r_index_4;
    [SerializeField] private GameObject r_middle_1;
    [SerializeField] private GameObject r_middle_2;
    [SerializeField] private GameObject r_middle_3;
    [SerializeField] private GameObject r_middle_4;
    [SerializeField] private GameObject r_ring_1;
    [SerializeField] private GameObject r_ring_2;
    [SerializeField] private GameObject r_ring_3;
    [SerializeField] private GameObject r_ring_4;
    [SerializeField] private GameObject r_pinky_1;
    [SerializeField] private GameObject r_pinky_2;
    [SerializeField] private GameObject r_pinky_3;
    [SerializeField] private GameObject r_pinky_4;

    //left hand
    private List<Vector3> l_wrist_pos = new List<Vector3>();
    private List<Vector3> l_thumb_1_pos = new List<Vector3>();
    private List<Vector3> l_thumb_2_pos = new List<Vector3>();
    private List<Vector3> l_thumb_3_pos = new List<Vector3>();
    private List<Vector3> l_thumb_4_pos = new List<Vector3>();
    private List<Vector3> l_index_1_pos = new List<Vector3>();
    private List<Vector3> l_index_2_pos = new List<Vector3>();
    private List<Vector3> l_index_3_pos = new List<Vector3>();
    private List<Vector3> l_index_4_pos = new List<Vector3>();
    private List<Vector3> l_middle_1_pos = new List<Vector3>();
    private List<Vector3> l_middle_2_pos = new List<Vector3>();
    private List<Vector3> l_middle_3_pos = new List<Vector3>();
    private List<Vector3> l_middle_4_pos = new List<Vector3>();
    private List<Vector3> l_ring_1_pos = new List<Vector3>();
    private List<Vector3> l_ring_2_pos = new List<Vector3>();
    private List<Vector3> l_ring_3_pos = new List<Vector3>();
    private List<Vector3> l_ring_4_pos = new List<Vector3>();
    private List<Vector3> l_pinky_1_pos = new List<Vector3>();
    private List<Vector3> l_pinky_2_pos = new List<Vector3>();
    private List<Vector3> l_pinky_3_pos = new List<Vector3>();
    private List<Vector3> l_pinky_4_pos = new List<Vector3>();
    //right hand
    private List<Vector3> r_wrist_pos = new List<Vector3>();
    private List<Vector3> r_thumb_1_pos = new List<Vector3>();
    private List<Vector3> r_thumb_2_pos = new List<Vector3>();
    private List<Vector3> r_thumb_3_pos = new List<Vector3>();
    private List<Vector3> r_thumb_4_pos = new List<Vector3>();
    private List<Vector3> r_index_1_pos = new List<Vector3>();
    private List<Vector3> r_index_2_pos = new List<Vector3>();
    private List<Vector3> r_index_3_pos = new List<Vector3>();
    private List<Vector3> r_index_4_pos = new List<Vector3>();
    private List<Vector3> r_middle_1_pos = new List<Vector3>();
    private List<Vector3> r_middle_2_pos = new List<Vector3>();
    private List<Vector3> r_middle_3_pos = new List<Vector3>();
    private List<Vector3> r_middle_4_pos = new List<Vector3>();
    private List<Vector3> r_ring_1_pos = new List<Vector3>();
    private List<Vector3> r_ring_2_pos = new List<Vector3>();
    private List<Vector3> r_ring_3_pos = new List<Vector3>();
    private List<Vector3> r_ring_4_pos = new List<Vector3>();
    private List<Vector3> r_pinky_1_pos = new List<Vector3>();
    private List<Vector3> r_pinky_2_pos = new List<Vector3>();
    private List<Vector3> r_pinky_3_pos = new List<Vector3>();
    private List<Vector3> r_pinky_4_pos = new List<Vector3>();
    // tracking confidence
    private List<Vector2> l_thumb_info = new List<Vector2>();
    private List<Vector2> l_index_info = new List<Vector2>();
    private List<Vector2> l_middle_info = new List<Vector2>();
    private List<Vector2> l_ring_info = new List<Vector2>();
    private List<Vector2> l_pinky_info = new List<Vector2>();
    private List<Vector2> r_thumb_info = new List<Vector2>();
    private List<Vector2> r_index_info = new List<Vector2>();
    private List<Vector2> r_middle_info = new List<Vector2>();
    private List<Vector2> r_ring_info = new List<Vector2>();
    private List<Vector2> r_pinky_info = new List<Vector2>();

    private List<float> timePoint = new List<float>();

    // [SerializeField] private float yMultiplier = 0.1f;
    //range for velocity chart drawing
    // [SerializeField] private int drawRange = 3;
    // [SerializeField] private int maximumSampleCount = 256;
    // [SerializeField] private Vector3 originPostion = Vector3.zero;
    // [SerializeField] private GameObject graphObject;
    private Vector3 previousPos_L;
    private Vector3 previousPos_R;
    // private List<Vector3> points = new List<Vector3>();
    private List<float> savedVelData_L = new List<float>();
    private List<float> savedVelData_R = new List<float>();
    private float runtime = 0f;
    private float delta = 0f;
    private bool recordCurrent = false;
    private List<Vector2> testRange_timeInfo = new List<Vector2>();
    public void setRecordFlag()
    {
        recordCurrent = true;
    }
    void Start()
    {
        previousPos_L = handVelMarker_L.transform.position;
        previousPos_R = handVelMarker_R.transform.position;
        // if (graphObject != null)
        // {
        //     var trans = graphObject.GetComponent<RectTransform>();
        //     Vector3[] corners = new Vector3[4];
        //     trans.GetWorldCorners(corners);
        //     originPostion.x = corners[0].x;
        //     originPostion.y = corners[0].y;
        //     originPostion.z = corners[0].z - 0.01f;
        // }
    }
    void FixedUpdate()
    {
        // runtime += Time.deltaTime;
        runtime = Time.fixedTime;
        delta += Time.fixedDeltaTime;
        if ( delta > ( 1.0f / (float)trackingFrequency ) )
        {
            timePoint.Add(runtime);
            savedVelData_L.Add( Vector3.Distance(handVelMarker_L.transform.position, previousPos_L) / Time.deltaTime);
            savedVelData_R.Add( Vector3.Distance(handVelMarker_R.transform.position, previousPos_R) / Time.deltaTime);
            previousPos_L = handVelMarker_L.transform.position;
            previousPos_R = handVelMarker_R.transform.position;
            
            // Left hand
            l_wrist_pos.Add(new Vector3(l_wrist.transform.position.x, l_wrist.transform.position.y, l_wrist.transform.position.z));
            l_thumb_1_pos.Add(new Vector3(l_thumb_1.transform.position.x, l_thumb_1.transform.position.y, l_thumb_1.transform.position.z));
            l_thumb_2_pos.Add(new Vector3(l_thumb_2.transform.position.x, l_thumb_2.transform.position.y, l_thumb_2.transform.position.z));
            l_thumb_3_pos.Add(new Vector3(l_thumb_3.transform.position.x, l_thumb_3.transform.position.y, l_thumb_3.transform.position.z));
            l_thumb_4_pos.Add(new Vector3(l_thumb_4.transform.position.x, l_thumb_4.transform.position.y, l_thumb_4.transform.position.z));
            l_index_1_pos.Add(new Vector3(l_index_1.transform.position.x, l_index_1.transform.position.y, l_index_1.transform.position.z));
            l_index_2_pos.Add(new Vector3(l_index_2.transform.position.x, l_index_2.transform.position.y, l_index_2.transform.position.z));
            l_index_3_pos.Add(new Vector3(l_index_3.transform.position.x, l_index_3.transform.position.y, l_index_3.transform.position.z));
            l_index_4_pos.Add(new Vector3(l_index_4.transform.position.x, l_index_4.transform.position.y, l_index_4.transform.position.z));
            l_middle_1_pos.Add(new Vector3(l_middle_1.transform.position.x, l_middle_1.transform.position.y, l_middle_1.transform.position.z));
            l_middle_2_pos.Add(new Vector3(l_middle_2.transform.position.x, l_middle_2.transform.position.y, l_middle_2.transform.position.z));
            l_middle_3_pos.Add(new Vector3(l_middle_3.transform.position.x, l_middle_3.transform.position.y, l_middle_3.transform.position.z));
            l_middle_4_pos.Add(new Vector3(l_middle_4.transform.position.x, l_middle_4.transform.position.y, l_middle_4.transform.position.z));
            l_ring_1_pos.Add(new Vector3(l_ring_1.transform.position.x, l_ring_1.transform.position.y, l_ring_1.transform.position.z));
            l_ring_2_pos.Add(new Vector3(l_ring_2.transform.position.x, l_ring_2.transform.position.y, l_ring_2.transform.position.z));
            l_ring_3_pos.Add(new Vector3(l_ring_3.transform.position.x, l_ring_3.transform.position.y, l_ring_3.transform.position.z));
            l_ring_4_pos.Add(new Vector3(l_ring_4.transform.position.x, l_ring_4.transform.position.y, l_ring_4.transform.position.z));
            l_pinky_1_pos.Add(new Vector3(l_pinky_1.transform.position.x, l_pinky_1.transform.position.y, l_pinky_1.transform.position.z));
            l_pinky_2_pos.Add(new Vector3(l_pinky_2.transform.position.x, l_pinky_2.transform.position.y, l_pinky_2.transform.position.z));
            l_pinky_3_pos.Add(new Vector3(l_pinky_3.transform.position.x, l_pinky_3.transform.position.y, l_pinky_3.transform.position.z));
            l_pinky_4_pos.Add(new Vector3(l_pinky_4.transform.position.x, l_pinky_4.transform.position.y, l_pinky_4.transform.position.z));
            // Right hand
            r_wrist_pos.Add(new Vector3(r_wrist.transform.position.x, r_wrist.transform.position.y, r_wrist.transform.position.z));
            r_thumb_1_pos.Add(new Vector3(r_thumb_1.transform.position.x, r_thumb_1.transform.position.y, r_thumb_1.transform.position.z));
            r_thumb_2_pos.Add(new Vector3(r_thumb_2.transform.position.x, r_thumb_2.transform.position.y, r_thumb_2.transform.position.z));
            r_thumb_3_pos.Add(new Vector3(r_thumb_3.transform.position.x, r_thumb_3.transform.position.y, r_thumb_3.transform.position.z));
            r_thumb_4_pos.Add(new Vector3(r_thumb_4.transform.position.x, r_thumb_4.transform.position.y, r_thumb_4.transform.position.z));
            r_index_1_pos.Add(new Vector3(r_index_1.transform.position.x, r_index_1.transform.position.y, r_index_1.transform.position.z));
            r_index_2_pos.Add(new Vector3(r_index_2.transform.position.x, r_index_2.transform.position.y, r_index_2.transform.position.z));
            r_index_3_pos.Add(new Vector3(r_index_3.transform.position.x, r_index_3.transform.position.y, r_index_3.transform.position.z));
            r_index_4_pos.Add(new Vector3(r_index_4.transform.position.x, r_index_4.transform.position.y, r_index_4.transform.position.z));
            r_middle_1_pos.Add(new Vector3(r_middle_1.transform.position.x, r_middle_1.transform.position.y, r_middle_1.transform.position.z));
            r_middle_2_pos.Add(new Vector3(r_middle_2.transform.position.x, r_middle_2.transform.position.y, r_middle_2.transform.position.z));
            r_middle_3_pos.Add(new Vector3(r_middle_3.transform.position.x, r_middle_3.transform.position.y, r_middle_3.transform.position.z));
            r_middle_4_pos.Add(new Vector3(r_middle_4.transform.position.x, r_middle_4.transform.position.y, r_middle_4.transform.position.z));
            r_ring_1_pos.Add(new Vector3(r_ring_1.transform.position.x, r_ring_1.transform.position.y, r_ring_1.transform.position.z));
            r_ring_2_pos.Add(new Vector3(r_ring_2.transform.position.x, r_ring_2.transform.position.y, r_ring_2.transform.position.z));
            r_ring_3_pos.Add(new Vector3(r_ring_3.transform.position.x, r_ring_3.transform.position.y, r_ring_3.transform.position.z));
            r_ring_4_pos.Add(new Vector3(r_ring_4.transform.position.x, r_ring_4.transform.position.y, r_ring_4.transform.position.z));
            r_pinky_1_pos.Add(new Vector3(r_pinky_1.transform.position.x, r_pinky_1.transform.position.y, r_pinky_1.transform.position.z));
            r_pinky_2_pos.Add(new Vector3(r_pinky_2.transform.position.x, r_pinky_2.transform.position.y, r_pinky_2.transform.position.z));
            r_pinky_3_pos.Add(new Vector3(r_pinky_3.transform.position.x, r_pinky_3.transform.position.y, r_pinky_3.transform.position.z));
            r_pinky_4_pos.Add(new Vector3(r_pinky_4.transform.position.x, r_pinky_4.transform.position.y, r_pinky_4.transform.position.z));

            l_thumb_info.Add(new Vector2(l_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Thumb), getConfidence(l_hand_prefab, OVRHand.HandFinger.Thumb)));
            l_index_info.Add(new Vector2(l_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Index), getConfidence(l_hand_prefab, OVRHand.HandFinger.Index)));
            l_middle_info.Add(new Vector2(l_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Middle), getConfidence(l_hand_prefab, OVRHand.HandFinger.Middle)));
            l_ring_info.Add(new Vector2(l_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Ring), getConfidence(l_hand_prefab, OVRHand.HandFinger.Ring)));
            l_pinky_info.Add(new Vector2(l_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Pinky), getConfidence(l_hand_prefab, OVRHand.HandFinger.Pinky)));

            r_thumb_info.Add(new Vector2(r_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Thumb), getConfidence(r_hand_prefab, OVRHand.HandFinger.Thumb)));
            r_index_info.Add(new Vector2(r_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Index), getConfidence(r_hand_prefab, OVRHand.HandFinger.Index)));
            r_middle_info.Add(new Vector2(r_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Middle), getConfidence(r_hand_prefab, OVRHand.HandFinger.Middle)));
            r_ring_info.Add(new Vector2(r_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Ring), getConfidence(r_hand_prefab, OVRHand.HandFinger.Ring)));
            r_pinky_info.Add(new Vector2(r_hand_prefab.GetFingerPinchStrength(OVRHand.HandFinger.Pinky), getConfidence(r_hand_prefab, OVRHand.HandFinger.Pinky)));

            if (recordCurrent)
            {
                testRange_timeInfo.Add(new Vector2(runtime, l_wrist_pos.Count));
                recordCurrent = false;
            }
            delta = 0f;
            
        }
    }
    private float getConfidence(OVRHand hand, OVRHand.HandFinger finger)
    {
        OVRHand.TrackingConfidence confidence = hand.GetFingerConfidence(finger);
        return confidence == OVRHand.TrackingConfidence.High ? 1.0f : 0.0f;
    }
    public List<float> getTimePoint()
    {
        return timePoint;
    }
    public List<float> getVelData_L()
    {
        return savedVelData_L;
    }
    public List<float> getVelData_R()
    {
        return savedVelData_R;
    }
    //finger info
    // Left hand
    public List<Vector3> GetLWristPos()
    {
        return l_wrist_pos;
    }
    public List<Vector3> GetLThumb1Pos()
    {
        return l_thumb_1_pos;
    }
    public List<Vector3> GetLThumb2Pos()
    {
        return l_thumb_2_pos;
    }
    public List<Vector3> GetLThumb3Pos()
    {
        return l_thumb_3_pos;
    }
    public List<Vector3> GetLThumb4Pos()
    {
        return l_thumb_4_pos;
    }
    public List<Vector3> GetLIndex1Pos()
    {
        return l_index_1_pos;
    }
    public List<Vector3> GetLIndex2Pos()
    {
        return l_index_2_pos;
    }
    public List<Vector3> GetLIndex3Pos()
    {
        return l_index_3_pos;
    }
    public List<Vector3> GetLIndex4Pos()
    {
        return l_index_4_pos;
    }
    public List<Vector3> GetLMiddle1Pos()
    {
        return l_middle_1_pos;
    }
    public List<Vector3> GetLMiddle2Pos()
    {
        return l_middle_2_pos;
    }
    public List<Vector3> GetLMiddle3Pos()
    {
        return l_middle_3_pos;
    }
    public List<Vector3> GetLMiddle4Pos()
    {
        return l_middle_4_pos;
    }
    public List<Vector3> GetLRing1Pos()
    {
        return l_ring_1_pos;
    }
    public List<Vector3> GetLRing2Pos()
    {
        return l_ring_2_pos;
    }
    public List<Vector3> GetLRing3Pos()
    {
        return l_ring_3_pos;
    }
    public List<Vector3> GetLRing4Pos()
    {
        return l_ring_4_pos;
    }
    public List<Vector3> GetLPinky1Pos()
    {
        return l_pinky_1_pos;
    }
    public List<Vector3> GetLPinky2Pos()
    {
        return l_pinky_2_pos;
    }
    public List<Vector3> GetLPinky3Pos()
    {
        return l_pinky_3_pos;
    }
    public List<Vector3> GetLPinky4Pos()
    {
        return l_pinky_4_pos;
    }
    // Right hand
    public List<Vector3> GetRWristPos()
    {
        return r_wrist_pos;
    }
    public List<Vector3> GetRThumb1Pos()
    {
        return r_thumb_1_pos;
    }
    public List<Vector3> GetRThumb2Pos()
    {
        return r_thumb_2_pos;
    }
    public List<Vector3> GetRThumb3Pos()
    {
        return r_thumb_3_pos;
    }
    public List<Vector3> GetRThumb4Pos()
    {
        return r_thumb_4_pos;
    }
    public List<Vector3> GetRIndex1Pos()
    {
        return r_index_1_pos;
    }
    public List<Vector3> GetRIndex2Pos()
    {
        return r_index_2_pos;
    }
    public List<Vector3> GetRIndex3Pos()
    {
        return r_index_3_pos;
    }
    public List<Vector3> GetRIndex4Pos()
    {
        return r_index_4_pos;
    }
    public List<Vector3> GetRMiddle1Pos()
    {
        return r_middle_1_pos;
    }
    public List<Vector3> GetRMiddle2Pos()
    {
        return r_middle_2_pos;
    }
    public List<Vector3> GetRMiddle3Pos()
    {
        return r_middle_3_pos;
    }
    public List<Vector3> GetRMiddle4Pos()
    {
        return r_middle_4_pos;
    }
    public List<Vector3> GetRRing1Pos()
    {
        return r_ring_1_pos;
    }
    public List<Vector3> GetRRing2Pos()
    {
        return r_ring_2_pos;
    }
    public List<Vector3> GetRRing3Pos()
    {
        return r_ring_3_pos;
    }
    public List<Vector3> GetRRing4Pos()
    {
        return r_ring_4_pos;
    }
    public List<Vector3> GetRPinky1Pos()
    {
        return r_pinky_1_pos;
    }
    public List<Vector3> GetRPinky2Pos()
    {
        return r_pinky_2_pos;
    }
    public List<Vector3> GetRPinky3Pos()
    {
        return r_pinky_3_pos;
    }
    public List<Vector3> GetRPinky4Pos()
    {
        return r_pinky_4_pos;
    }
    // Left hand info
    public List<Vector2> GetLThumbInfo()
    {
        return l_thumb_info;
    }
    public List<Vector2> GetLIndexInfo()
    {
        return l_index_info;
    }
    public List<Vector2> GetLMiddleInfo()
    {
        return l_middle_info;
    }
    public List<Vector2> GetLRingInfo()
    {
        return l_ring_info;
    }
    public List<Vector2> GetLPinkyInfo()
    {
        return l_pinky_info;
    }
    // Right hand info
    public List<Vector2> GetRThumbInfo()
    {
        return r_thumb_info;
    }
    public List<Vector2> GetRIndexInfo()
    {
        return r_index_info;
    }
    public List<Vector2> GetRMiddleInfo()
    {
        return r_middle_info;
    }
    public List<Vector2> GetRRingInfo()
    {
        return r_ring_info;
    }
    public List<Vector2> GetRPinkyInfo()
    {
        return r_pinky_info;
    }
    public List<Vector2> getTimeInfo()
    {
        return testRange_timeInfo;
    }
}

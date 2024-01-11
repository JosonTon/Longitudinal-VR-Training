using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using UnityEngine;

public class saveDataOnAppQuit : MonoBehaviour
{
    public handDataTracker tracker;
    public globalGameManager gm;
    private bool isDataSaved = false;
    private userData _userdata = new userData();
    void Start()
    {
        
    }
    void OnApplicationPause()
    {
        saveData();
        isDataSaved = true;
    }
    void OnApplicationQuit()
    {
        if(!isDataSaved)
        {
            saveData();
        }
    }
    void saveData()
    {
        string dirPath = Application.persistentDataPath;
        string fileName = "userdata_";
        string fullPath;
        int sufix = 0;

        do
        {
            fullPath = Path.Combine(dirPath, fileName + (sufix++).ToString() + ".json");
        } while (File.Exists(fullPath));

        

        _userdata.timePoint = tracker.getTimePoint();
        _userdata.velData_l = tracker.getVelData_L();
        _userdata.velData_r = tracker.getVelData_R();
        _userdata.accData_l = calculateAcceleration(_userdata.velData_l);
        _userdata.accData_r = calculateAcceleration(_userdata.velData_r);

        _userdata.l_wrist_pos = tracker.GetLWristPos();
        _userdata.l_thumb_1_pos = tracker.GetLThumb1Pos();
        _userdata.l_thumb_2_pos = tracker.GetLThumb2Pos();
        _userdata.l_thumb_3_pos = tracker.GetLThumb3Pos();
        _userdata.l_thumb_4_pos = tracker.GetLThumb4Pos();
        _userdata.l_index_1_pos = tracker.GetLIndex1Pos();
        _userdata.l_index_2_pos = tracker.GetLIndex2Pos();
        _userdata.l_index_3_pos = tracker.GetLIndex3Pos();
        _userdata.l_index_4_pos = tracker.GetLIndex4Pos();
        _userdata.l_middle_1_pos = tracker.GetLMiddle1Pos();
        _userdata.l_middle_2_pos = tracker.GetLMiddle2Pos();
        _userdata.l_middle_3_pos = tracker.GetLMiddle3Pos();
        _userdata.l_middle_4_pos = tracker.GetLMiddle4Pos();
        _userdata.l_ring_1_pos = tracker.GetLRing1Pos();
        _userdata.l_ring_2_pos = tracker.GetLRing2Pos();
        _userdata.l_ring_3_pos = tracker.GetLRing3Pos();
        _userdata.l_ring_4_pos = tracker.GetLRing4Pos();
        _userdata.l_pinky_1_pos = tracker.GetLPinky1Pos();
        _userdata.l_pinky_2_pos = tracker.GetLPinky2Pos();
        _userdata.l_pinky_3_pos = tracker.GetLPinky3Pos();
        _userdata.l_pinky_4_pos = tracker.GetLPinky4Pos();
        _userdata.r_wrist_pos = tracker.GetRWristPos();
        _userdata.r_thumb_1_pos = tracker.GetRThumb1Pos();
        _userdata.r_thumb_2_pos = tracker.GetRThumb2Pos();
        _userdata.r_thumb_3_pos = tracker.GetRThumb3Pos();
        _userdata.r_thumb_4_pos = tracker.GetRThumb4Pos();
        _userdata.r_index_1_pos = tracker.GetRIndex1Pos();
        _userdata.r_index_2_pos = tracker.GetRIndex2Pos();
        _userdata.r_index_3_pos = tracker.GetRIndex3Pos();
        _userdata.r_index_4_pos = tracker.GetRIndex4Pos();
        _userdata.r_middle_1_pos = tracker.GetRMiddle1Pos();
        _userdata.r_middle_2_pos = tracker.GetRMiddle2Pos();
        _userdata.r_middle_3_pos = tracker.GetRMiddle3Pos();
        _userdata.r_middle_4_pos = tracker.GetRMiddle4Pos();
        _userdata.r_ring_1_pos = tracker.GetRRing1Pos();
        _userdata.r_ring_2_pos = tracker.GetRRing2Pos();
        _userdata.r_ring_3_pos = tracker.GetRRing3Pos();
        _userdata.r_ring_4_pos = tracker.GetRRing4Pos();
        _userdata.r_pinky_1_pos = tracker.GetRPinky1Pos();
        _userdata.r_pinky_2_pos = tracker.GetRPinky2Pos();
        _userdata.r_pinky_3_pos = tracker.GetRPinky3Pos();
        _userdata.r_pinky_4_pos = tracker.GetRPinky4Pos();
        _userdata.l_thumb_info = tracker.GetLThumbInfo();
        _userdata.l_index_info = tracker.GetLIndexInfo();
        _userdata.l_middle_info = tracker.GetLMiddleInfo();
        _userdata.l_ring_info = tracker.GetLRingInfo();
        _userdata.l_pinky_info = tracker.GetLPinkyInfo();
        _userdata.r_thumb_info = tracker.GetRThumbInfo();
        _userdata.r_index_info = tracker.GetRIndexInfo();
        _userdata.r_middle_info = tracker.GetRMiddleInfo();
        _userdata.r_ring_info = tracker.GetRRingInfo();
        _userdata.r_pinky_info = tracker.GetRPinkyInfo();

        _userdata.taskList = gm.getTaskList();
        _userdata.timeList = gm.getTimeList();
        _userdata.mistakesList = gm.getMistakesList();
        _userdata.isFinishedList = gm.getIsFinishedList();
        _userdata.totalTaskCount = _userdata.timeList.Count;
        _userdata.taskFinishedCount = gm.getTaskFinishedCount();
        _userdata.resetTimesList = gm.getResetTimesList();

        _userdata.testRangeInfo_Coords = tracker.getTimeInfo();
        _userdata.testRangeInfo_taskIndex = gm.getTaskIndexInfo();

        _userdata.timeStamp = System.DateTime.Now.ToString("yyyy/MM/dd  ").ToString() + System.DateTime.Now.ToString("HH:mm:ss").ToString();
        
        try
        {
            Directory.CreateDirectory(Path.GetDirectoryName(fullPath));
            string json = JsonUtility.ToJson(_userdata, false);
            using (FileStream stream = new FileStream(fullPath, FileMode.Create))
            {
                using (StreamWriter writer = new StreamWriter(stream))
                {
                    writer.Write(json);
                }
            }
            Debug.Log("File saved to :" + fullPath);
        }
        catch (System.Exception e)
        {
            Debug.LogError("Error Occurred when trying to save game data." + "\n" + e);
        }
    }
    private List<float> calculateAcceleration(List<float> velData)
    {
        List<float> accData = new List<float>();
        for (int i = 1; i < velData.Count; i++)
        {
            float dt = _userdata.timePoint[i] - _userdata.timePoint[i-1];
            float dv = velData[i] - velData[i-1];
            float acc = dv / dt;
            accData.Add(acc);
        }
        return accData;
    }
}
public class userData
{
    public List<float> timePoint = new List<float>();
    //left hand
    public List<Vector3> l_wrist_pos = new List<Vector3>();
    public List<Vector3> l_thumb_1_pos = new List<Vector3>();
    public List<Vector3> l_thumb_2_pos = new List<Vector3>();
    public List<Vector3> l_thumb_3_pos = new List<Vector3>();
    public List<Vector3> l_thumb_4_pos = new List<Vector3>();
    public List<Vector3> l_index_1_pos = new List<Vector3>();
    public List<Vector3> l_index_2_pos = new List<Vector3>();
    public List<Vector3> l_index_3_pos = new List<Vector3>();
    public List<Vector3> l_index_4_pos = new List<Vector3>();
    public List<Vector3> l_middle_1_pos = new List<Vector3>();
    public List<Vector3> l_middle_2_pos = new List<Vector3>();
    public List<Vector3> l_middle_3_pos = new List<Vector3>();
    public List<Vector3> l_middle_4_pos = new List<Vector3>();
    public List<Vector3> l_ring_1_pos = new List<Vector3>();
    public List<Vector3> l_ring_2_pos = new List<Vector3>();
    public List<Vector3> l_ring_3_pos = new List<Vector3>();
    public List<Vector3> l_ring_4_pos = new List<Vector3>();
    public List<Vector3> l_pinky_1_pos = new List<Vector3>();
    public List<Vector3> l_pinky_2_pos = new List<Vector3>();
    public List<Vector3> l_pinky_3_pos = new List<Vector3>();
    public List<Vector3> l_pinky_4_pos = new List<Vector3>();
    //right hand
    public List<Vector3> r_wrist_pos = new List<Vector3>();
    public List<Vector3> r_thumb_1_pos = new List<Vector3>();
    public List<Vector3> r_thumb_2_pos = new List<Vector3>();
    public List<Vector3> r_thumb_3_pos = new List<Vector3>();
    public List<Vector3> r_thumb_4_pos = new List<Vector3>();
    public List<Vector3> r_index_1_pos = new List<Vector3>();
    public List<Vector3> r_index_2_pos = new List<Vector3>();
    public List<Vector3> r_index_3_pos = new List<Vector3>();
    public List<Vector3> r_index_4_pos = new List<Vector3>();
    public List<Vector3> r_middle_1_pos = new List<Vector3>();
    public List<Vector3> r_middle_2_pos = new List<Vector3>();
    public List<Vector3> r_middle_3_pos = new List<Vector3>();
    public List<Vector3> r_middle_4_pos = new List<Vector3>();
    public List<Vector3> r_ring_1_pos = new List<Vector3>();
    public List<Vector3> r_ring_2_pos = new List<Vector3>();
    public List<Vector3> r_ring_3_pos = new List<Vector3>();
    public List<Vector3> r_ring_4_pos = new List<Vector3>();
    public List<Vector3> r_pinky_1_pos = new List<Vector3>();
    public List<Vector3> r_pinky_2_pos = new List<Vector3>();
    public List<Vector3> r_pinky_3_pos = new List<Vector3>();
    public List<Vector3> r_pinky_4_pos = new List<Vector3>();
    //pinch strength and tracking confidence
    public List<Vector2> l_thumb_info = new List<Vector2>();
    public List<Vector2> l_index_info = new List<Vector2>();
    public List<Vector2> l_middle_info = new List<Vector2>();
    public List<Vector2> l_ring_info = new List<Vector2>();
    public List<Vector2> l_pinky_info = new List<Vector2>();
    public List<Vector2> r_thumb_info = new List<Vector2>();
    public List<Vector2> r_index_info = new List<Vector2>();
    public List<Vector2> r_middle_info = new List<Vector2>();
    public List<Vector2> r_ring_info = new List<Vector2>();
    public List<Vector2> r_pinky_info = new List<Vector2>();
    //vel & acc
    public List<float> velData_l = new List<float>();
    public List<float> accData_l = new List<float>();
    public List<float> velData_r = new List<float>();
    public List<float> accData_r = new List<float>();
    //task info
    public List<string> taskList = new List<string>();
    public List<float> timeList = new List<float>();
    public List<int> mistakesList = new List<int>();
    public List<bool> isFinishedList = new List<bool>();
    public List<int> resetTimesList = new List<int>();
    public int totalTaskCount;
    public int taskFinishedCount;
    public List<Vector2> testRangeInfo_Coords = new List<Vector2>();
    public List<int> testRangeInfo_taskIndex = new List<int>();
    public string timeStamp;
}
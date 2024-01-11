//#define USE_LAMBDA_CHECK
//#define USER_TEST
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using Oculus.Interaction.Samples;
using System.Linq;


public class globalGameManager : MonoBehaviour
{
#if USER_TEST
    private int _testID = 0;
#endif
    public UnityEvent onVictory = new UnityEvent();
    System.Random random = new System.Random();
    public GameObject detector1;
    public GameObject detector2;
    public GameObject detector3;
    public TMP_Text taskStatus;
    public TMP_Text c1s;
    public TMP_Text c2s;
    public TMP_Text c3s;
    public Transform TS_R1;
    public Transform TS_R2;
    public Transform TS_G1;
    public Transform TS_G2;
    public Transform TS_B1;
    public Transform TS_B2;

    //respawn event listener
    [SerializeField] private List<RespawnOnDrop> _respawnOnDrop;
    
    private List<Transform> taskviewBallTransform = new List<Transform>();
    private List<List<int>> currentSeqList = new List<List<int>>();
    private List<List<int>> targetSeqList = new List<List<int>>();
    private List<List<Vector3>> posList = new List<List<Vector3>> ();
    public List<GameObject> _respawnableList = new List<GameObject>();

    public GameObject victoryBelt;
    private static AudioSource audioSrc;
    private static AudioClip victory;
    private static AudioClip failure;

    //statics
    public Transform statusCameraTrans;
    public TMP_Text taskCountText;
    public TMP_Text accuracyText;
    public TMP_Text avgErrorCountText;
    public TMP_Text avgTaskTimeText;
    public TMP_Text currentTaskTimeText;
    private int taskCount = 0;
    private int taskFinishedCount = 0;
    private int failedOperationCount = 0;
    private int totalOperationCount = 0;
    private float accuracy = 0f;
    private List<float> taskTime = new List<float>();
    private float previousRecordedTime = 0f;
    private bool isFirstTask = true;
    private int resetTimes = 0;

    private bool recordCurrentIndex = false;

    //data save
    private List<List<List<int>>> _taskList = new List<List<List<int>>>();
    private List<float> _timeList = new List<float>();
    private List<int> _mistakesList = new List<int>();
    private List<bool> _isFinishedList = new List<bool>();
    private List<int> _resetTimesList = new List<int>();
    private List<int> testRange_taskInfo = new List<int>();

    public void setRecordFlag()
    {
        recordCurrentIndex = true;
    }
    public List<string> getTaskList()
    {
        List<string> tempTask = new List<string>();
        //List<List<List<int>>>
        //each task
        foreach (var i in this._taskList)
        {
            //each bucket
            string tempBucket = "";
            int bucketID = 0;
            foreach (var j in i)
            {
                //each ball
                string tempBall = "bucket" + bucketID++ +":";
                foreach (var k in j)
                {
                    tempBall += k.ToString();
                }
                tempBucket = tempBucket + tempBall + " ";
            }
            tempTask.Add(tempBucket);
        }
        return tempTask;
    }
    public List<int> getResetTimesList()
    {
        return this._resetTimesList;
    }
    public List<float> getTimeList()
    {
        return this._timeList;
    }
    public List<int> getMistakesList()
    {
        return this._mistakesList;
    }
    public List<bool> getIsFinishedList()
    {
        return this._isFinishedList;
    }
    public int getTaskFinishedCount()
    {
        return this.taskFinishedCount;
    }
    public void opAdd()
    {
        totalOperationCount++;
    }
    public void opAddF()
    {
        failedOperationCount++;
        //updateStatics();
    }
    public List<int> getTaskIndexInfo()
    {
        return testRange_taskInfo;
    }
    void Start()
    {
        
        audioSrc = GetComponent<AudioSource>();
        victory = Resources.Load<AudioClip>("level_complete");
        failure = Resources.Load<AudioClip>("failure");

        taskviewBallTransform.Add(TS_R1);
        taskviewBallTransform.Add(TS_R2);
        taskviewBallTransform.Add(TS_G1);
        taskviewBallTransform.Add(TS_G2);
        taskviewBallTransform.Add(TS_B1);
        taskviewBallTransform.Add(TS_B2);

        //taskStatus.text = "Task Not Finished.";
        //Initialize the target ball sequence list.
        
        
        //Task-View Ball Position Anchors
        posList.Add(new List<Vector3> {new Vector3(0.181808f, 8.93f, -17.472f), new Vector3(0.181808f, 8.99f, -17.472f), new Vector3(0.181808f, 9.05f, -17.472f), new Vector3(0.181808f, 9.11f, -17.472f)});
        posList.Add(new List<Vector3> {new Vector3(0.331808f, 8.93f, -17.472f), new Vector3(0.331808f, 8.99f, -17.472f), new Vector3(0.331808f, 9.05f, -17.472f), new Vector3(0.331808f, 9.11f, -17.472f)});
        posList.Add(new List<Vector3> {new Vector3(0.481808f, 8.93f, -17.472f), new Vector3(0.481808f, 8.99f, -17.472f), new Vector3(0.481808f, 9.05f, -17.472f), new Vector3(0.481808f, 9.11f, -17.472f)});
    
        updateTask();
        updateStatics(false);
        isFirstTask = false;
        //Debug.Log(_respawnableList.Count);

        foreach (var item in _respawnOnDrop)
        {
            item.WhenRespawned.AddListener(opAddF);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Space))
        // {
        //     finishTask();
        // }
        // currentTaskTimeText.text = "Current Task Time: " + (Time.time - previousRecordedTime).ToString() + "s";
    }
    private void updateTask()
    {
        targetSeqList = generateTargetSeqList();
        //r, g, b for ball index
        //cp for ball anchor index
        int r, g, b, cp;
        r = 0;
        g = 0;
        b = 0;
        for (int i = 0; i < targetSeqList.Count; i++)
        {
            cp = 0;
            if (targetSeqList[i].Count != 0)
            {
                foreach (int item in targetSeqList[i])
                {
                    switch (item)
                    {
                        case 0: taskviewBallTransform[r++].localPosition = posList[i][cp++]; break;
                        case 1: taskviewBallTransform[2+g++].localPosition = posList[i][cp++]; break;
                        case 2: taskviewBallTransform[4+b++].localPosition = posList[i][cp++]; break;
                        default: break;
                    }
                }
            }
        }
    }
    private void updateStatics(bool isFinished)
    {
        if (!isFirstTask)
        {
            if (isFinished)
            {
                taskFinishedCount++;
            }
            if(recordCurrentIndex)
            {
                testRange_taskInfo.Add(_taskList.Count);
                recordCurrentIndex = false;
            }
            _taskList.Add(targetSeqList);
            _timeList.Add(Time.time - previousRecordedTime);
            _mistakesList.Add(failedOperationCount);
            _isFinishedList.Add(isFinished);
            _resetTimesList.Add(resetTimes);

            failedOperationCount = 0;
            resetTimes = 0;
            taskCount++;
            taskTime.Add(Time.time - previousRecordedTime);
            
            
            
            previousRecordedTime = Time.time;

            // accuracy = (float)taskFinishedCount / (float)taskCount;
            // // float averageErrorCount = taskCount == 0 ? failedOperationCount : (float)failedOperationCount / (float)taskCount;
            // taskCountText.text = "Task Count: " + taskCount.ToString();
            // accuracyText.text = "Accuracy: " + (accuracy * 100f).ToString() + "%";
            // avgErrorCountText.text = "Error Count: " + failedOperationCount.ToString();
            // avgTaskTimeText.text = taskCount == 0 ? "Average Task Time: null" : "Average Task Time: " + (Enumerable.Sum(taskTime.ToArray()) / taskTime.Count).ToString() + "s";
        }
    }
    private void printList(List<List<int>> list)
    {
        string tmp1 = "";
        foreach (List<int> item in list)
        {
            string temp = "";
            foreach (int val in item)
            {
                temp += val.ToString();
                temp += " ";
            }
            tmp1 += temp;
            tmp1 += "//";
        }
        Debug.Log(tmp1);
    }
    private List<List<int>> generateTargetSeqList()
    {
#if USER_TEST
        if (_testID > 3)
        {
            _testID = 3;
        }
        List<List<List<int>>> testSet = new List<List<List<int>>>();
        List<List<int>> result1 = new List<List<int>>();
        result1.Add(new List<int> {0, 2});
        result1.Add(new List<int> {1, 1});
        result1.Add(new List<int> {0, 2});
        List<List<int>> result2 = new List<List<int>>();
        result2.Add(new List<int> {1, 0, 0});
        result2.Add(new List<int> {});
        result2.Add(new List<int> {2, 2, 1});
        List<List<int>> result3 = new List<List<int>>();
        result3.Add(new List<int> {2, 1, 2});
        result3.Add(new List<int> {0});
        result3.Add(new List<int> {1, 0});
        List<List<int>> result4 = new List<List<int>>();
        result4.Add(new List<int> {2, 0});
        result4.Add(new List<int> {});
        result4.Add(new List<int> {0, 1, 1, 2});

        testSet.Add(result1);
        testSet.Add(result2);
        testSet.Add(result3);
        testSet.Add(result4);
        return testSet[_testID++];
#else
        List<List<int>> result = new List<List<int>>();
        result.Add(new List<int>());
        result.Add(new List<int>());
        result.Add(new List<int>());
        List<int> availableIndex = new List<int> {0, 1, 2};
        List<int> ballList = new List<int> {0, 0, 1, 1, 2, 2};
        for (int i = 0; i < 6; i++)
        {
            
            int j = random.Next(0, ballList.Count);
            int k = random.Next(0, availableIndex.Count);
            result[availableIndex[k]].Add(ballList[j]);
            ballList.RemoveAt(j);
            for (int it = 0; it < availableIndex.Count; it++)
            {
                if (result[it].Count == 4)
                {
                    availableIndex.RemoveAt(it);
                }
            }
        }
        return result;
#endif
    }
    private bool checkEquality(List<int> listA, List<int> listB)
    {
        if (listA.Count == listB.Count)
        {
            for (int i = 0; i < listA.Count; i++)
            {
                if (listA[i] != listB[i])
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    public void checkBallSequence()
    {
        //Only For Debug Use
        List<int> tmp1 = detector1.GetComponent<ballSequenceDetector>().getCurrentBallSeq();
        List<int> tmp2 = detector2.GetComponent<ballSequenceDetector>().getCurrentBallSeq();
        List<int> tmp3 = detector3.GetComponent<ballSequenceDetector>().getCurrentBallSeq();
        string ttmp1 = "";
        string ttmp2 = "";
        string ttmp3 = "";
        foreach (int item in tmp1)
        {
            ttmp1 += item.ToString();
        }
        foreach (int item in tmp2)
        {
            ttmp2 += item.ToString();
        }
        foreach (int item in tmp3)
        {
            ttmp3 += item.ToString();
        }
        c1s.text = ttmp1;
        c2s.text = ttmp2;
        c3s.text = ttmp3;
    }
    //Check if task is finished
    public static bool areListsEqual(List<List<int>> a, List<List<int>> b)
    {
        if (a == null && b == null)
        {
            return true;
        }
        if (a == null || b == null || a.Count != b.Count)
        {
            return false;
        }
        for (int i = 0; i < a.Count; i++)
        {
            List<int> listA = a[i];
            List<int> listB = b.FirstOrDefault(l => l.SequenceEqual(listA));
            if (listB == null)
            {
                return false;
            }
            for (int j = 0; j < listA.Count; j++)
            {
                if (listA[j] != listB[j])
                {
                    return false;
                }
            }
        }
        return true;
    }

    public void checkBallSeqStatus()
    {
#if USE_LAMBDA_CHECK
        int amount = targetSeqList.Count;
        currentSeqList.Add(detector1.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        currentSeqList.Add(detector2.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        currentSeqList.Add(detector3.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        List<int> indexList = new List<int>();
        for (int i = 0; i < currentSeqList.Count; i++)
        {
            for (int j = 0; j < targetSeqList.Count; j++)
            {
                if(checkEquality(currentSeqList[i], targetSeqList[j]))
                {
                    indexList.Add(i);
                }
            }
        }
        if (indexList.Count >= amount)
        {
            victoryBelt.GetComponent<animationPlay>().triggerAnimation();

            audioSrc.PlayOneShot(victory);
            setStatusCameraX(1.7f);
            taskFinishedCount++;
            nextTask();

            Invoke("resetStatusCameraPos", 2.0f);
            //taskStatus.text = "Task Finished!";
        }
        else
        {
            audioSrc.PlayOneShot(failure);
            setStatusCameraX(0.8f);
            nextTask();

            Invoke("resetStatusCameraPos", 2.0f);
            //taskStatus.text = "You have not finished the task!";
            //Invoke("setFailureText", 2.0f);
        }
        currentSeqList.Clear();
#else
        currentSeqList.Add(detector1.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        currentSeqList.Add(detector2.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        currentSeqList.Add(detector3.GetComponent<ballSequenceDetector>().getCurrentBallSeq());
        if (areListsEqual(currentSeqList, targetSeqList))
        {
            //victoryBelt.GetComponent<animationPlay>().triggerAnimation();
            onVictory.Invoke();

            audioSrc.PlayOneShot(victory);
            setStatusCameraX(1.7f);
            nextTask(true);

            Invoke("resetStatusCameraPos", 2.0f);
            //taskStatus.text = "Task Finished!";
        }
        else
        {
            audioSrc.PlayOneShot(failure);
            setStatusCameraX(0.8f);
            nextTask(false);

            Invoke("resetStatusCameraPos", 2.0f);
            //taskStatus.text = "You have not finished the task!";
            //Invoke("setFailureText", 2.0f);
        }
        currentSeqList.Clear();
#endif
    }
    private void setFailureText()
    {
        taskStatus.text = "Task Not Finished.";
    }
    private void nextTask(bool isFinished)
    {
        for (int i = 0; i < _respawnableList.Count; i++)
        {
            _respawnableList[i].GetComponent<RespawnOnDrop>().respawn();
        }
        updateStatics(isFinished);
        updateTask();
        //taskStatus.text = "Task Not Finished.";
    }
    public void finishTask()
    {
        detector1.GetComponent<ballSequenceDetector>().updateBallSeq();
        detector2.GetComponent<ballSequenceDetector>().updateBallSeq();
        detector3.GetComponent<ballSequenceDetector>().updateBallSeq();
        checkBallSeqStatus();
        checkBallSequence();
    }
//cam.pos.x
//-0.03f, -0.983f, -0.319f
//0.8f, -0.983f, -0.319f
//1.7f, -0.983f, -0.319f
    private void resetStatusCameraPos()
    {
        statusCameraTrans.localPosition = new Vector3(-0.03f, -0.983f, -0.319f);
    }
    private void setStatusCameraX(float posX)
    {
        statusCameraTrans.localPosition = new Vector3(posX, -0.983f, -0.319f);
    }
    public void resetInteractables()
    {
        for (int i = 0; i < _respawnableList.Count; i++)
        {
            _respawnableList[i].GetComponent<RespawnOnDrop>().respawn();
        }
        resetTimes++;
    }
}

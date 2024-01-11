using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    private List<List<int>> task;
    private List<List<int>> tubes = new List<List<int>> { new List<int> {0, 0}, new List<int> {1, 1}, new List<int> {2, 2} };

    void Start()
    {
        task = genTask();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            int steps = Solve();
            Debug.Log("Steps: " + steps);
        }
    }

    int Solve()
    {
        int steps = 0;

        for (int i = 0; i < task.Count; i++)
        {
            for (int j = 0; j < task[i].Count; j++)
            {
                int colorId = task[i][j];
                int tubeIndex = FindTubeWithColor(colorId);

                if (tubeIndex == -1)
                {
                    Debug.LogError("Invalid color ID");
                    return -1;
                }

                if (tubeIndex != i)
                {
                    MoveBall(tubeIndex, i);
                    steps++;
                }
            }
        }

        return steps;
    }

    int FindTubeWithColor(int colorId)
    {
        for (int i = 0; i < tubes.Count; i++)
        {
            if (tubes[i].Contains(colorId))
            {
                return i;
            }
        }

        return -1;
    }

    void MoveBall(int fromTubeIndex, int toTubeIndex)
    {
        int ballIndex = tubes[fromTubeIndex].IndexOf(task[toTubeIndex][0]);
        int ballColorId = tubes[fromTubeIndex][ballIndex];

        tubes[fromTubeIndex].RemoveAt(ballIndex);
        tubes[toTubeIndex].Insert(0, ballColorId);
    }

    List<List<int>> genTask()
    {
        // 生成任务目标的函数
        return new List<List<int>> { new List<int> {0, 0, 1, 2}, new List<int> {2, 1}, new List<int>() };
    }
}
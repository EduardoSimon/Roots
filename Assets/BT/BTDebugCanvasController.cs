using System;
using System.Collections;
using System.Collections.Generic;
using BT;
using TMPro;
using UnityEngine;

public class BTDebugCanvasController : MonoBehaviour
{
    public TextMeshProUGUI taskStatusText;
    public TextMeshProUGUI taskNameText;

    public void SetDebugInfo(TaskStatus taskStatus, string taskName)
    {
        if(taskStatus == TaskStatus.Succeeded)
            taskStatusText.color = Color.green;
        else if (taskStatus == TaskStatus.Failed)
            taskStatusText.color = Color.red;
        else if(taskStatus == TaskStatus.Running)
            taskStatusText.color = Color.yellow;
            
        this.taskStatusText.text = taskStatus.ToString();
        this.taskNameText.text = taskName;
    }
}

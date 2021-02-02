/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tat/v20201028/model/InvocationTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace rapidjson;
using namespace std;

InvocationTask::InvocationTask() :
    m_invocationIdHasBeenSet(false),
    m_invocationTaskIdHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskResultHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_commandDocumentHasBeenSet(false)
{
}

CoreInternalOutcome InvocationTask::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationTaskId") && !value["InvocationTaskId"].IsNull())
    {
        if (!value["InvocationTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.InvocationTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationTaskId = string(value["InvocationTaskId"].GetString());
        m_invocationTaskIdHasBeenSet = true;
    }

    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskResult") && !value["TaskResult"].IsNull())
    {
        if (!value["TaskResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.TaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResult.Deserialize(value["TaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResultHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("CommandDocument") && !value["CommandDocument"].IsNull())
    {
        if (!value["CommandDocument"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InvocationTask.CommandDocument` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commandDocument.Deserialize(value["CommandDocument"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commandDocumentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationTask::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_invocationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationTaskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InvocationTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_invocationTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commandDocumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommandDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_commandDocument.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InvocationTask::GetInvocationId() const
{
    return m_invocationId;
}

void InvocationTask::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool InvocationTask::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string InvocationTask::GetInvocationTaskId() const
{
    return m_invocationTaskId;
}

void InvocationTask::SetInvocationTaskId(const string& _invocationTaskId)
{
    m_invocationTaskId = _invocationTaskId;
    m_invocationTaskIdHasBeenSet = true;
}

bool InvocationTask::InvocationTaskIdHasBeenSet() const
{
    return m_invocationTaskIdHasBeenSet;
}

string InvocationTask::GetCommandId() const
{
    return m_commandId;
}

void InvocationTask::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool InvocationTask::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string InvocationTask::GetTaskStatus() const
{
    return m_taskStatus;
}

void InvocationTask::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InvocationTask::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string InvocationTask::GetInstanceId() const
{
    return m_instanceId;
}

void InvocationTask::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InvocationTask::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

TaskResult InvocationTask::GetTaskResult() const
{
    return m_taskResult;
}

void InvocationTask::SetTaskResult(const TaskResult& _taskResult)
{
    m_taskResult = _taskResult;
    m_taskResultHasBeenSet = true;
}

bool InvocationTask::TaskResultHasBeenSet() const
{
    return m_taskResultHasBeenSet;
}

string InvocationTask::GetStartTime() const
{
    return m_startTime;
}

void InvocationTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InvocationTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InvocationTask::GetEndTime() const
{
    return m_endTime;
}

void InvocationTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InvocationTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InvocationTask::GetCreatedTime() const
{
    return m_createdTime;
}

void InvocationTask::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool InvocationTask::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string InvocationTask::GetUpdatedTime() const
{
    return m_updatedTime;
}

void InvocationTask::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool InvocationTask::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

CommandDocument InvocationTask::GetCommandDocument() const
{
    return m_commandDocument;
}

void InvocationTask::SetCommandDocument(const CommandDocument& _commandDocument)
{
    m_commandDocument = _commandDocument;
    m_commandDocumentHasBeenSet = true;
}

bool InvocationTask::CommandDocumentHasBeenSet() const
{
    return m_commandDocumentHasBeenSet;
}


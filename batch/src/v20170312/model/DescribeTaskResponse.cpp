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

#include <tencentcloud/batch/v20170312/model/DescribeTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

DescribeTaskResponse::DescribeTaskResponse() :
    m_jobIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskInstanceTotalCountHasBeenSet(false),
    m_taskInstanceSetHasBeenSet(false),
    m_taskInstanceMetricsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobId") && !rsp["JobId"].IsNull())
    {
        if (!rsp["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(rsp["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("TaskState") && !rsp["TaskState"].IsNull())
    {
        if (!rsp["TaskState"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskState = string(rsp["TaskState"].GetString());
        m_taskStateHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInstanceTotalCount") && !rsp["TaskInstanceTotalCount"].IsNull())
    {
        if (!rsp["TaskInstanceTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TaskInstanceTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceTotalCount = rsp["TaskInstanceTotalCount"].GetInt64();
        m_taskInstanceTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInstanceSet") && !rsp["TaskInstanceSet"].IsNull())
    {
        if (!rsp["TaskInstanceSet"].IsArray())
            return CoreInternalOutcome(Error("response `TaskInstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskInstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskInstanceView item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInstanceSet.push_back(item);
        }
        m_taskInstanceSetHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInstanceMetrics") && !rsp["TaskInstanceMetrics"].IsNull())
    {
        if (!rsp["TaskInstanceMetrics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TaskInstanceMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInstanceMetrics.Deserialize(rsp["TaskInstanceMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInstanceMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeTaskResponse::GetJobId() const
{
    return m_jobId;
}

bool DescribeTaskResponse::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeTaskResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeTaskResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeTaskResponse::GetTaskState() const
{
    return m_taskState;
}

bool DescribeTaskResponse::TaskStateHasBeenSet() const
{
    return m_taskStateHasBeenSet;
}

string DescribeTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeTaskResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeTaskResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeTaskResponse::GetTaskInstanceTotalCount() const
{
    return m_taskInstanceTotalCount;
}

bool DescribeTaskResponse::TaskInstanceTotalCountHasBeenSet() const
{
    return m_taskInstanceTotalCountHasBeenSet;
}

vector<TaskInstanceView> DescribeTaskResponse::GetTaskInstanceSet() const
{
    return m_taskInstanceSet;
}

bool DescribeTaskResponse::TaskInstanceSetHasBeenSet() const
{
    return m_taskInstanceSetHasBeenSet;
}

TaskInstanceMetrics DescribeTaskResponse::GetTaskInstanceMetrics() const
{
    return m_taskInstanceMetrics;
}

bool DescribeTaskResponse::TaskInstanceMetricsHasBeenSet() const
{
    return m_taskInstanceMetricsHasBeenSet;
}



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

#include <tencentcloud/cii/v20210408/model/DescribeStructCompareDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

DescribeStructCompareDataResponse::DescribeStructCompareDataResponse() :
    m_policyIdHasBeenSet(false),
    m_mainTaskIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_reviewTimeHasBeenSet(false),
    m_machineResultHasBeenSet(false),
    m_manualResultHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_newItemsHasBeenSet(false),
    m_modifyItemsHasBeenSet(false),
    m_subTaskIdHasBeenSet(false),
    m_allTasksHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStructCompareDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PolicyId") && !rsp["PolicyId"].IsNull())
    {
        if (!rsp["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(rsp["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (rsp.HasMember("MainTaskId") && !rsp["MainTaskId"].IsNull())
    {
        if (!rsp["MainTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MainTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainTaskId = string(rsp["MainTaskId"].GetString());
        m_mainTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerId") && !rsp["CustomerId"].IsNull())
    {
        if (!rsp["CustomerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(rsp["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerName") && !rsp["CustomerName"].IsNull())
    {
        if (!rsp["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(rsp["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ReviewTime") && !rsp["ReviewTime"].IsNull())
    {
        if (!rsp["ReviewTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReviewTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewTime = string(rsp["ReviewTime"].GetString());
        m_reviewTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MachineResult") && !rsp["MachineResult"].IsNull())
    {
        if (!rsp["MachineResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineResult = string(rsp["MachineResult"].GetString());
        m_machineResultHasBeenSet = true;
    }

    if (rsp.HasMember("ManualResult") && !rsp["ManualResult"].IsNull())
    {
        if (!rsp["ManualResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `ManualResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manualResult = string(rsp["ManualResult"].GetString());
        m_manualResultHasBeenSet = true;
    }

    if (rsp.HasMember("Metrics") && !rsp["Metrics"].IsNull())
    {
        if (!rsp["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(rsp["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }

    if (rsp.HasMember("NewItems") && !rsp["NewItems"].IsNull())
    {
        if (!rsp["NewItems"].IsString())
        {
            return CoreInternalOutcome(Error("response `NewItems` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newItems = string(rsp["NewItems"].GetString());
        m_newItemsHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyItems") && !rsp["ModifyItems"].IsNull())
    {
        if (!rsp["ModifyItems"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModifyItems` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyItems = string(rsp["ModifyItems"].GetString());
        m_modifyItemsHasBeenSet = true;
    }

    if (rsp.HasMember("SubTaskId") && !rsp["SubTaskId"].IsNull())
    {
        if (!rsp["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(rsp["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("AllTasks") && !rsp["AllTasks"].IsNull())
    {
        if (!rsp["AllTasks"].IsArray())
            return CoreInternalOutcome(Error("response `AllTasks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AllTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReviewDataTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allTasks.push_back(item);
        }
        m_allTasksHasBeenSet = true;
    }

    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeStructCompareDataResponse::GetPolicyId() const
{
    return m_policyId;
}

bool DescribeStructCompareDataResponse::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetMainTaskId() const
{
    return m_mainTaskId;
}

bool DescribeStructCompareDataResponse::MainTaskIdHasBeenSet() const
{
    return m_mainTaskIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetCustomerId() const
{
    return m_customerId;
}

bool DescribeStructCompareDataResponse::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string DescribeStructCompareDataResponse::GetCustomerName() const
{
    return m_customerName;
}

bool DescribeStructCompareDataResponse::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string DescribeStructCompareDataResponse::GetReviewTime() const
{
    return m_reviewTime;
}

bool DescribeStructCompareDataResponse::ReviewTimeHasBeenSet() const
{
    return m_reviewTimeHasBeenSet;
}

string DescribeStructCompareDataResponse::GetMachineResult() const
{
    return m_machineResult;
}

bool DescribeStructCompareDataResponse::MachineResultHasBeenSet() const
{
    return m_machineResultHasBeenSet;
}

string DescribeStructCompareDataResponse::GetManualResult() const
{
    return m_manualResult;
}

bool DescribeStructCompareDataResponse::ManualResultHasBeenSet() const
{
    return m_manualResultHasBeenSet;
}

CompareMetricsData DescribeStructCompareDataResponse::GetMetrics() const
{
    return m_metrics;
}

bool DescribeStructCompareDataResponse::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeStructCompareDataResponse::GetNewItems() const
{
    return m_newItems;
}

bool DescribeStructCompareDataResponse::NewItemsHasBeenSet() const
{
    return m_newItemsHasBeenSet;
}

string DescribeStructCompareDataResponse::GetModifyItems() const
{
    return m_modifyItems;
}

bool DescribeStructCompareDataResponse::ModifyItemsHasBeenSet() const
{
    return m_modifyItemsHasBeenSet;
}

string DescribeStructCompareDataResponse::GetSubTaskId() const
{
    return m_subTaskId;
}

bool DescribeStructCompareDataResponse::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

vector<ReviewDataTaskInfo> DescribeStructCompareDataResponse::GetAllTasks() const
{
    return m_allTasks;
}

bool DescribeStructCompareDataResponse::AllTasksHasBeenSet() const
{
    return m_allTasksHasBeenSet;
}

string DescribeStructCompareDataResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeStructCompareDataResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}



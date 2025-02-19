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

#include <tencentcloud/tione/v20191022/model/DescribeNotebookInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DescribeNotebookInstanceResponse::DescribeNotebookInstanceResponse() :
    m_notebookInstanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_notebookInstanceStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_lifecycleScriptsNameHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_clsAccessHasBeenSet(false),
    m_prepayHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_clsConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNotebookInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NotebookInstanceName") && !rsp["NotebookInstanceName"].IsNull())
    {
        if (!rsp["NotebookInstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceName = string(rsp["NotebookInstanceName"].GetString());
        m_notebookInstanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RoleArn") && !rsp["RoleArn"].IsNull())
    {
        if (!rsp["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(rsp["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (rsp.HasMember("DirectInternetAccess") && !rsp["DirectInternetAccess"].IsNull())
    {
        if (!rsp["DirectInternetAccess"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectInternetAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directInternetAccess = string(rsp["DirectInternetAccess"].GetString());
        m_directInternetAccessHasBeenSet = true;
    }

    if (rsp.HasMember("RootAccess") && !rsp["RootAccess"].IsNull())
    {
        if (!rsp["RootAccess"].IsString())
        {
            return CoreInternalOutcome(Error("response `RootAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootAccess = string(rsp["RootAccess"].GetString());
        m_rootAccessHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("VolumeSizeInGB") && !rsp["VolumeSizeInGB"].IsNull())
    {
        if (!rsp["VolumeSizeInGB"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `VolumeSizeInGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSizeInGB = rsp["VolumeSizeInGB"].GetUint64();
        m_volumeSizeInGBHasBeenSet = true;
    }

    if (rsp.HasMember("FailureReason") && !rsp["FailureReason"].IsNull())
    {
        if (!rsp["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(rsp["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (rsp.HasMember("CreationTime") && !rsp["CreationTime"].IsNull())
    {
        if (!rsp["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(rsp["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastModifiedTime") && !rsp["LastModifiedTime"].IsNull())
    {
        if (!rsp["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(rsp["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogUrl") && !rsp["LogUrl"].IsNull())
    {
        if (!rsp["LogUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `LogUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logUrl = string(rsp["LogUrl"].GetString());
        m_logUrlHasBeenSet = true;
    }

    if (rsp.HasMember("NotebookInstanceStatus") && !rsp["NotebookInstanceStatus"].IsNull())
    {
        if (!rsp["NotebookInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceStatus = string(rsp["NotebookInstanceStatus"].GetString());
        m_notebookInstanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("LifecycleScriptsName") && !rsp["LifecycleScriptsName"].IsNull())
    {
        if (!rsp["LifecycleScriptsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `LifecycleScriptsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleScriptsName = string(rsp["LifecycleScriptsName"].GetString());
        m_lifecycleScriptsNameHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultCodeRepository") && !rsp["DefaultCodeRepository"].IsNull())
    {
        if (!rsp["DefaultCodeRepository"].IsString())
        {
            return CoreInternalOutcome(Error("response `DefaultCodeRepository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCodeRepository = string(rsp["DefaultCodeRepository"].GetString());
        m_defaultCodeRepositoryHasBeenSet = true;
    }

    if (rsp.HasMember("AdditionalCodeRepositories") && !rsp["AdditionalCodeRepositories"].IsNull())
    {
        if (!rsp["AdditionalCodeRepositories"].IsArray())
            return CoreInternalOutcome(Error("response `AdditionalCodeRepositories` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AdditionalCodeRepositories"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_additionalCodeRepositories.push_back((*itr).GetString());
        }
        m_additionalCodeRepositoriesHasBeenSet = true;
    }

    if (rsp.HasMember("ClsAccess") && !rsp["ClsAccess"].IsNull())
    {
        if (!rsp["ClsAccess"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClsAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsAccess = string(rsp["ClsAccess"].GetString());
        m_clsAccessHasBeenSet = true;
    }

    if (rsp.HasMember("Prepay") && !rsp["Prepay"].IsNull())
    {
        if (!rsp["Prepay"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Prepay` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_prepay = rsp["Prepay"].GetBool();
        m_prepayHasBeenSet = true;
    }

    if (rsp.HasMember("Deadline") && !rsp["Deadline"].IsNull())
    {
        if (!rsp["Deadline"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(rsp["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (rsp.HasMember("StoppingCondition") && !rsp["StoppingCondition"].IsNull())
    {
        if (!rsp["StoppingCondition"].IsObject())
        {
            return CoreInternalOutcome(Error("response `StoppingCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stoppingCondition.Deserialize(rsp["StoppingCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stoppingConditionHasBeenSet = true;
    }

    if (rsp.HasMember("ClsConfig") && !rsp["ClsConfig"].IsNull())
    {
        if (!rsp["ClsConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClsConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clsConfig.Deserialize(rsp["ClsConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clsConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeNotebookInstanceResponse::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

bool DescribeNotebookInstanceResponse::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeNotebookInstanceResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetRoleArn() const
{
    return m_roleArn;
}

bool DescribeNotebookInstanceResponse::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetDirectInternetAccess() const
{
    return m_directInternetAccess;
}

bool DescribeNotebookInstanceResponse::DirectInternetAccessHasBeenSet() const
{
    return m_directInternetAccessHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetRootAccess() const
{
    return m_rootAccess;
}

bool DescribeNotebookInstanceResponse::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeNotebookInstanceResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t DescribeNotebookInstanceResponse::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

bool DescribeNotebookInstanceResponse::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetFailureReason() const
{
    return m_failureReason;
}

bool DescribeNotebookInstanceResponse::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetCreationTime() const
{
    return m_creationTime;
}

bool DescribeNotebookInstanceResponse::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

bool DescribeNotebookInstanceResponse::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetLogUrl() const
{
    return m_logUrl;
}

bool DescribeNotebookInstanceResponse::LogUrlHasBeenSet() const
{
    return m_logUrlHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetNotebookInstanceStatus() const
{
    return m_notebookInstanceStatus;
}

bool DescribeNotebookInstanceResponse::NotebookInstanceStatusHasBeenSet() const
{
    return m_notebookInstanceStatusHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeNotebookInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetLifecycleScriptsName() const
{
    return m_lifecycleScriptsName;
}

bool DescribeNotebookInstanceResponse::LifecycleScriptsNameHasBeenSet() const
{
    return m_lifecycleScriptsNameHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetDefaultCodeRepository() const
{
    return m_defaultCodeRepository;
}

bool DescribeNotebookInstanceResponse::DefaultCodeRepositoryHasBeenSet() const
{
    return m_defaultCodeRepositoryHasBeenSet;
}

vector<string> DescribeNotebookInstanceResponse::GetAdditionalCodeRepositories() const
{
    return m_additionalCodeRepositories;
}

bool DescribeNotebookInstanceResponse::AdditionalCodeRepositoriesHasBeenSet() const
{
    return m_additionalCodeRepositoriesHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetClsAccess() const
{
    return m_clsAccess;
}

bool DescribeNotebookInstanceResponse::ClsAccessHasBeenSet() const
{
    return m_clsAccessHasBeenSet;
}

bool DescribeNotebookInstanceResponse::GetPrepay() const
{
    return m_prepay;
}

bool DescribeNotebookInstanceResponse::PrepayHasBeenSet() const
{
    return m_prepayHasBeenSet;
}

string DescribeNotebookInstanceResponse::GetDeadline() const
{
    return m_deadline;
}

bool DescribeNotebookInstanceResponse::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

StoppingCondition DescribeNotebookInstanceResponse::GetStoppingCondition() const
{
    return m_stoppingCondition;
}

bool DescribeNotebookInstanceResponse::StoppingConditionHasBeenSet() const
{
    return m_stoppingConditionHasBeenSet;
}

ClsConfig DescribeNotebookInstanceResponse::GetClsConfig() const
{
    return m_clsConfig;
}

bool DescribeNotebookInstanceResponse::ClsConfigHasBeenSet() const
{
    return m_clsConfigHasBeenSet;
}



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

#include <tencentcloud/emr/v20190103/model/JobResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

JobResult::JobResult() :
    m_nameHasBeenSet(false),
    m_actionOnFailureHasBeenSet(false),
    m_jobStateHasBeenSet(false)
{
}

CoreInternalOutcome JobResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ActionOnFailure") && !value["ActionOnFailure"].IsNull())
    {
        if (!value["ActionOnFailure"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobResult.ActionOnFailure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionOnFailure = string(value["ActionOnFailure"].GetString());
        m_actionOnFailureHasBeenSet = true;
    }

    if (value.HasMember("JobState") && !value["JobState"].IsNull())
    {
        if (!value["JobState"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobResult.JobState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobState = string(value["JobState"].GetString());
        m_jobStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_actionOnFailureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionOnFailure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionOnFailure.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobState.c_str(), allocator).Move(), allocator);
    }

}


string JobResult::GetName() const
{
    return m_name;
}

void JobResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JobResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string JobResult::GetActionOnFailure() const
{
    return m_actionOnFailure;
}

void JobResult::SetActionOnFailure(const string& _actionOnFailure)
{
    m_actionOnFailure = _actionOnFailure;
    m_actionOnFailureHasBeenSet = true;
}

bool JobResult::ActionOnFailureHasBeenSet() const
{
    return m_actionOnFailureHasBeenSet;
}

string JobResult::GetJobState() const
{
    return m_jobState;
}

void JobResult::SetJobState(const string& _jobState)
{
    m_jobState = _jobState;
    m_jobStateHasBeenSet = true;
}

bool JobResult::JobStateHasBeenSet() const
{
    return m_jobStateHasBeenSet;
}


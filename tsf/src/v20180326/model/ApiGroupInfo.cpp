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

#include <tencentcloud/tsf/v20180326/model/ApiGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiGroupInfo::ApiGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupContextHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_bindedGatewayDeployGroupsHasBeenSet(false),
    m_apiCountHasBeenSet(false),
    m_aclModeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_gatewayInstanceTypeHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome ApiGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupContext") && !value["GroupContext"].IsNull())
    {
        if (!value["GroupContext"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GroupContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupContext = string(value["GroupContext"].GetString());
        m_groupContextHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("BindedGatewayDeployGroups") && !value["BindedGatewayDeployGroups"].IsNull())
    {
        if (!value["BindedGatewayDeployGroups"].IsArray())
            return CoreInternalOutcome(Error("response `ApiGroupInfo.BindedGatewayDeployGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["BindedGatewayDeployGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayDeployGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindedGatewayDeployGroups.push_back(item);
        }
        m_bindedGatewayDeployGroupsHasBeenSet = true;
    }

    if (value.HasMember("ApiCount") && !value["ApiCount"].IsNull())
    {
        if (!value["ApiCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.ApiCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiCount = value["ApiCount"].GetInt64();
        m_apiCountHasBeenSet = true;
    }

    if (value.HasMember("AclMode") && !value["AclMode"].IsNull())
    {
        if (!value["AclMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.AclMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclMode = string(value["AclMode"].GetString());
        m_aclModeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceType") && !value["GatewayInstanceType"].IsNull())
    {
        if (!value["GatewayInstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GatewayInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceType = string(value["GatewayInstanceType"].GetString());
        m_gatewayInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceId") && !value["GatewayInstanceId"].IsNull())
    {
        if (!value["GatewayInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApiGroupInfo.GatewayInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceId = string(value["GatewayInstanceId"].GetString());
        m_gatewayInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupContext.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindedGatewayDeployGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindedGatewayDeployGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindedGatewayDeployGroups.begin(); itr != m_bindedGatewayDeployGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_apiCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiCount, allocator);
    }

    if (m_aclModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclMode.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string ApiGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void ApiGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ApiGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ApiGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void ApiGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ApiGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ApiGroupInfo::GetGroupContext() const
{
    return m_groupContext;
}

void ApiGroupInfo::SetGroupContext(const string& _groupContext)
{
    m_groupContext = _groupContext;
    m_groupContextHasBeenSet = true;
}

bool ApiGroupInfo::GroupContextHasBeenSet() const
{
    return m_groupContextHasBeenSet;
}

string ApiGroupInfo::GetAuthType() const
{
    return m_authType;
}

void ApiGroupInfo::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ApiGroupInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ApiGroupInfo::GetStatus() const
{
    return m_status;
}

void ApiGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiGroupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiGroupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiGroupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiGroupInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ApiGroupInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ApiGroupInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<GatewayDeployGroup> ApiGroupInfo::GetBindedGatewayDeployGroups() const
{
    return m_bindedGatewayDeployGroups;
}

void ApiGroupInfo::SetBindedGatewayDeployGroups(const vector<GatewayDeployGroup>& _bindedGatewayDeployGroups)
{
    m_bindedGatewayDeployGroups = _bindedGatewayDeployGroups;
    m_bindedGatewayDeployGroupsHasBeenSet = true;
}

bool ApiGroupInfo::BindedGatewayDeployGroupsHasBeenSet() const
{
    return m_bindedGatewayDeployGroupsHasBeenSet;
}

int64_t ApiGroupInfo::GetApiCount() const
{
    return m_apiCount;
}

void ApiGroupInfo::SetApiCount(const int64_t& _apiCount)
{
    m_apiCount = _apiCount;
    m_apiCountHasBeenSet = true;
}

bool ApiGroupInfo::ApiCountHasBeenSet() const
{
    return m_apiCountHasBeenSet;
}

string ApiGroupInfo::GetAclMode() const
{
    return m_aclMode;
}

void ApiGroupInfo::SetAclMode(const string& _aclMode)
{
    m_aclMode = _aclMode;
    m_aclModeHasBeenSet = true;
}

bool ApiGroupInfo::AclModeHasBeenSet() const
{
    return m_aclModeHasBeenSet;
}

string ApiGroupInfo::GetDescription() const
{
    return m_description;
}

void ApiGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApiGroupInfo::GetGroupType() const
{
    return m_groupType;
}

void ApiGroupInfo::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool ApiGroupInfo::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string ApiGroupInfo::GetGatewayInstanceType() const
{
    return m_gatewayInstanceType;
}

void ApiGroupInfo::SetGatewayInstanceType(const string& _gatewayInstanceType)
{
    m_gatewayInstanceType = _gatewayInstanceType;
    m_gatewayInstanceTypeHasBeenSet = true;
}

bool ApiGroupInfo::GatewayInstanceTypeHasBeenSet() const
{
    return m_gatewayInstanceTypeHasBeenSet;
}

string ApiGroupInfo::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void ApiGroupInfo::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool ApiGroupInfo::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}


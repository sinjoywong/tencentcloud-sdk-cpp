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

#include <tencentcloud/tsf/v20180326/model/UnitRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

UnitRuleItem::UnitRuleItem() :
    m_relationshipHasBeenSet(false),
    m_destNamespaceIdHasBeenSet(false),
    m_destNamespaceNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_unitRuleIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitRuleTagListHasBeenSet(false)
{
}

CoreInternalOutcome UnitRuleItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Relationship") && !value["Relationship"].IsNull())
    {
        if (!value["Relationship"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.Relationship` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationship = string(value["Relationship"].GetString());
        m_relationshipHasBeenSet = true;
    }

    if (value.HasMember("DestNamespaceId") && !value["DestNamespaceId"].IsNull())
    {
        if (!value["DestNamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.DestNamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destNamespaceId = string(value["DestNamespaceId"].GetString());
        m_destNamespaceIdHasBeenSet = true;
    }

    if (value.HasMember("DestNamespaceName") && !value["DestNamespaceName"].IsNull())
    {
        if (!value["DestNamespaceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.DestNamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destNamespaceName = string(value["DestNamespaceName"].GetString());
        m_destNamespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UnitRuleId") && !value["UnitRuleId"].IsNull())
    {
        if (!value["UnitRuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.UnitRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitRuleId = string(value["UnitRuleId"].GetString());
        m_unitRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnitRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UnitRuleTagList") && !value["UnitRuleTagList"].IsNull())
    {
        if (!value["UnitRuleTagList"].IsArray())
            return CoreInternalOutcome(Error("response `UnitRuleItem.UnitRuleTagList` is not array type"));

        const Value &tmpValue = value["UnitRuleTagList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnitRuleTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unitRuleTagList.push_back(item);
        }
        m_unitRuleTagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnitRuleItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_relationshipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Relationship";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_relationship.c_str(), allocator).Move(), allocator);
    }

    if (m_destNamespaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestNamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destNamespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_destNamespaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestNamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destNamespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_unitRuleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unitRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_unitRuleTagListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitRuleTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unitRuleTagList.begin(); itr != m_unitRuleTagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UnitRuleItem::GetRelationship() const
{
    return m_relationship;
}

void UnitRuleItem::SetRelationship(const string& _relationship)
{
    m_relationship = _relationship;
    m_relationshipHasBeenSet = true;
}

bool UnitRuleItem::RelationshipHasBeenSet() const
{
    return m_relationshipHasBeenSet;
}

string UnitRuleItem::GetDestNamespaceId() const
{
    return m_destNamespaceId;
}

void UnitRuleItem::SetDestNamespaceId(const string& _destNamespaceId)
{
    m_destNamespaceId = _destNamespaceId;
    m_destNamespaceIdHasBeenSet = true;
}

bool UnitRuleItem::DestNamespaceIdHasBeenSet() const
{
    return m_destNamespaceIdHasBeenSet;
}

string UnitRuleItem::GetDestNamespaceName() const
{
    return m_destNamespaceName;
}

void UnitRuleItem::SetDestNamespaceName(const string& _destNamespaceName)
{
    m_destNamespaceName = _destNamespaceName;
    m_destNamespaceNameHasBeenSet = true;
}

bool UnitRuleItem::DestNamespaceNameHasBeenSet() const
{
    return m_destNamespaceNameHasBeenSet;
}

string UnitRuleItem::GetName() const
{
    return m_name;
}

void UnitRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UnitRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UnitRuleItem::GetId() const
{
    return m_id;
}

void UnitRuleItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UnitRuleItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UnitRuleItem::GetUnitRuleId() const
{
    return m_unitRuleId;
}

void UnitRuleItem::SetUnitRuleId(const string& _unitRuleId)
{
    m_unitRuleId = _unitRuleId;
    m_unitRuleIdHasBeenSet = true;
}

bool UnitRuleItem::UnitRuleIdHasBeenSet() const
{
    return m_unitRuleIdHasBeenSet;
}

int64_t UnitRuleItem::GetPriority() const
{
    return m_priority;
}

void UnitRuleItem::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool UnitRuleItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string UnitRuleItem::GetDescription() const
{
    return m_description;
}

void UnitRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UnitRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<UnitRuleTag> UnitRuleItem::GetUnitRuleTagList() const
{
    return m_unitRuleTagList;
}

void UnitRuleItem::SetUnitRuleTagList(const vector<UnitRuleTag>& _unitRuleTagList)
{
    m_unitRuleTagList = _unitRuleTagList;
    m_unitRuleTagListHasBeenSet = true;
}

bool UnitRuleItem::UnitRuleTagListHasBeenSet() const
{
    return m_unitRuleTagListHasBeenSet;
}


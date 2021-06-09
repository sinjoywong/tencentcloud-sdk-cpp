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

#include <tencentcloud/tbaas/v20180416/model/GetLatesdTransactionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetLatesdTransactionListRequest::GetLatesdTransactionListRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_latestBlockNumberHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetLatesdTransactionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_latestBlockNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestBlockNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_latestBlockNumber, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetLatesdTransactionListRequest::GetModule() const
{
    return m_module;
}

void GetLatesdTransactionListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetLatesdTransactionListRequest::GetOperation() const
{
    return m_operation;
}

void GetLatesdTransactionListRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t GetLatesdTransactionListRequest::GetGroupId() const
{
    return m_groupId;
}

void GetLatesdTransactionListRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t GetLatesdTransactionListRequest::GetChannelId() const
{
    return m_channelId;
}

void GetLatesdTransactionListRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

uint64_t GetLatesdTransactionListRequest::GetLatestBlockNumber() const
{
    return m_latestBlockNumber;
}

void GetLatesdTransactionListRequest::SetLatestBlockNumber(const uint64_t& _latestBlockNumber)
{
    m_latestBlockNumber = _latestBlockNumber;
    m_latestBlockNumberHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::LatestBlockNumberHasBeenSet() const
{
    return m_latestBlockNumberHasBeenSet;
}

string GetLatesdTransactionListRequest::GetGroupName() const
{
    return m_groupName;
}

void GetLatesdTransactionListRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetLatesdTransactionListRequest::GetChannelName() const
{
    return m_channelName;
}

void GetLatesdTransactionListRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string GetLatesdTransactionListRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetLatesdTransactionListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t GetLatesdTransactionListRequest::GetOffset() const
{
    return m_offset;
}

void GetLatesdTransactionListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetLatesdTransactionListRequest::GetLimit() const
{
    return m_limit;
}

void GetLatesdTransactionListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetLatesdTransactionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}



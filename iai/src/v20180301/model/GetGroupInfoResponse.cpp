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

#include <tencentcloud/iai/v20180301/model/GetGroupInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

GetGroupInfoResponse::GetGroupInfoResponse() :
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupExDescriptionsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
}

CoreInternalOutcome GetGroupInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupExDescriptions") && !rsp["GroupExDescriptions"].IsNull())
    {
        if (!rsp["GroupExDescriptions"].IsArray())
            return CoreInternalOutcome(Error("response `GroupExDescriptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GroupExDescriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupExDescriptions.push_back((*itr).GetString());
        }
        m_groupExDescriptionsHasBeenSet = true;
    }

    if (rsp.HasMember("Tag") && !rsp["Tag"].IsNull())
    {
        if (!rsp["Tag"].IsString())
        {
            return CoreInternalOutcome(Error("response `Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(rsp["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (rsp.HasMember("FaceModelVersion") && !rsp["FaceModelVersion"].IsNull())
    {
        if (!rsp["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("CreationTimestamp") && !rsp["CreationTimestamp"].IsNull())
    {
        if (!rsp["CreationTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CreationTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = rsp["CreationTimestamp"].GetUint64();
        m_creationTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetGroupInfoResponse::GetGroupName() const
{
    return m_groupName;
}

bool GetGroupInfoResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetGroupInfoResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetGroupInfoResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> GetGroupInfoResponse::GetGroupExDescriptions() const
{
    return m_groupExDescriptions;
}

bool GetGroupInfoResponse::GroupExDescriptionsHasBeenSet() const
{
    return m_groupExDescriptionsHasBeenSet;
}

string GetGroupInfoResponse::GetTag() const
{
    return m_tag;
}

bool GetGroupInfoResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string GetGroupInfoResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool GetGroupInfoResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}

uint64_t GetGroupInfoResponse::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

bool GetGroupInfoResponse::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}



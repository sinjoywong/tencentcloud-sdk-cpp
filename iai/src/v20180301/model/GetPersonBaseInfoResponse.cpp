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

#include <tencentcloud/iai/v20180301/model/GetPersonBaseInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

GetPersonBaseInfoResponse::GetPersonBaseInfoResponse() :
    m_personNameHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_faceIdsHasBeenSet(false)
{
}

CoreInternalOutcome GetPersonBaseInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PersonName") && !rsp["PersonName"].IsNull())
    {
        if (!rsp["PersonName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(rsp["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (rsp.HasMember("Gender") && !rsp["Gender"].IsNull())
    {
        if (!rsp["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = rsp["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (rsp.HasMember("FaceIds") && !rsp["FaceIds"].IsNull())
    {
        if (!rsp["FaceIds"].IsArray())
            return CoreInternalOutcome(Error("response `FaceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FaceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceIds.push_back((*itr).GetString());
        }
        m_faceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetPersonBaseInfoResponse::GetPersonName() const
{
    return m_personName;
}

bool GetPersonBaseInfoResponse::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

int64_t GetPersonBaseInfoResponse::GetGender() const
{
    return m_gender;
}

bool GetPersonBaseInfoResponse::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

vector<string> GetPersonBaseInfoResponse::GetFaceIds() const
{
    return m_faceIds;
}

bool GetPersonBaseInfoResponse::FaceIdsHasBeenSet() const
{
    return m_faceIdsHasBeenSet;
}



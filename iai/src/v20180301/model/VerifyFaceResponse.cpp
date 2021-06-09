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

#include <tencentcloud/iai/v20180301/model/VerifyFaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

VerifyFaceResponse::VerifyFaceResponse() :
    m_scoreHasBeenSet(false),
    m_isMatchHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome VerifyFaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (rsp.HasMember("IsMatch") && !rsp["IsMatch"].IsNull())
    {
        if (!rsp["IsMatch"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsMatch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMatch = rsp["IsMatch"].GetBool();
        m_isMatchHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


double VerifyFaceResponse::GetScore() const
{
    return m_score;
}

bool VerifyFaceResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

bool VerifyFaceResponse::GetIsMatch() const
{
    return m_isMatch;
}

bool VerifyFaceResponse::IsMatchHasBeenSet() const
{
    return m_isMatchHasBeenSet;
}

string VerifyFaceResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool VerifyFaceResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}



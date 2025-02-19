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

#include <tencentcloud/tmt/v20180321/model/ImageTranslateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

ImageTranslateResponse::ImageTranslateResponse() :
    m_sessionUuidHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_imageRecordHasBeenSet(false)
{
}

CoreInternalOutcome ImageTranslateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SessionUuid") && !rsp["SessionUuid"].IsNull())
    {
        if (!rsp["SessionUuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionUuid = string(rsp["SessionUuid"].GetString());
        m_sessionUuidHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("Target") && !rsp["Target"].IsNull())
    {
        if (!rsp["Target"].IsString())
        {
            return CoreInternalOutcome(Error("response `Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(rsp["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRecord") && !rsp["ImageRecord"].IsNull())
    {
        if (!rsp["ImageRecord"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageRecord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageRecord.Deserialize(rsp["ImageRecord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageRecordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ImageTranslateResponse::GetSessionUuid() const
{
    return m_sessionUuid;
}

bool ImageTranslateResponse::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

string ImageTranslateResponse::GetSource() const
{
    return m_source;
}

bool ImageTranslateResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ImageTranslateResponse::GetTarget() const
{
    return m_target;
}

bool ImageTranslateResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

ImageRecord ImageTranslateResponse::GetImageRecord() const
{
    return m_imageRecord;
}

bool ImageTranslateResponse::ImageRecordHasBeenSet() const
{
    return m_imageRecordHasBeenSet;
}



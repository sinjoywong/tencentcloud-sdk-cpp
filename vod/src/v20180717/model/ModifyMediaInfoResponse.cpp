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

#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyMediaInfoResponse::ModifyMediaInfoResponse() :
    m_coverUrlHasBeenSet(false),
    m_addedSubtitleSetHasBeenSet(false)
{
}

CoreInternalOutcome ModifyMediaInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CoverUrl") && !rsp["CoverUrl"].IsNull())
    {
        if (!rsp["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(rsp["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (rsp.HasMember("AddedSubtitleSet") && !rsp["AddedSubtitleSet"].IsNull())
    {
        if (!rsp["AddedSubtitleSet"].IsArray())
            return CoreInternalOutcome(Error("response `AddedSubtitleSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AddedSubtitleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaSubtitleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addedSubtitleSet.push_back(item);
        }
        m_addedSubtitleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyMediaInfoResponse::GetCoverUrl() const
{
    return m_coverUrl;
}

bool ModifyMediaInfoResponse::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

vector<MediaSubtitleItem> ModifyMediaInfoResponse::GetAddedSubtitleSet() const
{
    return m_addedSubtitleSet;
}

bool ModifyMediaInfoResponse::AddedSubtitleSetHasBeenSet() const
{
    return m_addedSubtitleSetHasBeenSet;
}



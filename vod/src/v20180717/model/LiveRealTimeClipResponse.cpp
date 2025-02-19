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

#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

LiveRealTimeClipResponse::LiveRealTimeClipResponse() :
    m_urlHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_vodTaskIdHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_segmentSetHasBeenSet(false)
{
}

CoreInternalOutcome LiveRealTimeClipResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Url") && !rsp["Url"].IsNull())
    {
        if (!rsp["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(rsp["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (rsp.HasMember("FileId") && !rsp["FileId"].IsNull())
    {
        if (!rsp["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(rsp["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (rsp.HasMember("VodTaskId") && !rsp["VodTaskId"].IsNull())
    {
        if (!rsp["VodTaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VodTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodTaskId = string(rsp["VodTaskId"].GetString());
        m_vodTaskIdHasBeenSet = true;
    }

    if (rsp.HasMember("MetaData") && !rsp["MetaData"].IsNull())
    {
        if (!rsp["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(rsp["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (rsp.HasMember("SegmentSet") && !rsp["SegmentSet"].IsNull())
    {
        if (!rsp["SegmentSet"].IsArray())
            return CoreInternalOutcome(Error("response `SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveRealTimeClipMediaSegmentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string LiveRealTimeClipResponse::GetUrl() const
{
    return m_url;
}

bool LiveRealTimeClipResponse::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string LiveRealTimeClipResponse::GetFileId() const
{
    return m_fileId;
}

bool LiveRealTimeClipResponse::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string LiveRealTimeClipResponse::GetVodTaskId() const
{
    return m_vodTaskId;
}

bool LiveRealTimeClipResponse::VodTaskIdHasBeenSet() const
{
    return m_vodTaskIdHasBeenSet;
}

MediaMetaData LiveRealTimeClipResponse::GetMetaData() const
{
    return m_metaData;
}

bool LiveRealTimeClipResponse::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

vector<LiveRealTimeClipMediaSegmentInfo> LiveRealTimeClipResponse::GetSegmentSet() const
{
    return m_segmentSet;
}

bool LiveRealTimeClipResponse::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}



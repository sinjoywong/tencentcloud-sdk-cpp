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

#include <tencentcloud/bda/v20200324/model/SegmentCustomizedPortraitPicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

SegmentCustomizedPortraitPicResponse::SegmentCustomizedPortraitPicResponse() :
    m_portraitImageHasBeenSet(false),
    m_maskImageHasBeenSet(false),
    m_imageRectsHasBeenSet(false)
{
}

CoreInternalOutcome SegmentCustomizedPortraitPicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PortraitImage") && !rsp["PortraitImage"].IsNull())
    {
        if (!rsp["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(rsp["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (rsp.HasMember("MaskImage") && !rsp["MaskImage"].IsNull())
    {
        if (!rsp["MaskImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `MaskImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maskImage = string(rsp["MaskImage"].GetString());
        m_maskImageHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRects") && !rsp["ImageRects"].IsNull())
    {
        if (!rsp["ImageRects"].IsArray())
            return CoreInternalOutcome(Error("response `ImageRects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ImageRects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageRect item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageRects.push_back(item);
        }
        m_imageRectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string SegmentCustomizedPortraitPicResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool SegmentCustomizedPortraitPicResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string SegmentCustomizedPortraitPicResponse::GetMaskImage() const
{
    return m_maskImage;
}

bool SegmentCustomizedPortraitPicResponse::MaskImageHasBeenSet() const
{
    return m_maskImageHasBeenSet;
}

vector<ImageRect> SegmentCustomizedPortraitPicResponse::GetImageRects() const
{
    return m_imageRects;
}

bool SegmentCustomizedPortraitPicResponse::ImageRectsHasBeenSet() const
{
    return m_imageRectsHasBeenSet;
}



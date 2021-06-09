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

#include <tencentcloud/bda/v20200324/model/DescribeSegmentationTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

DescribeSegmentationTaskResponse::DescribeSegmentationTaskResponse() :
    m_taskStatusHasBeenSet(false),
    m_resultVideoUrlHasBeenSet(false),
    m_resultVideoMD5HasBeenSet(false),
    m_videoBasicInformationHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSegmentationTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(rsp["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ResultVideoUrl") && !rsp["ResultVideoUrl"].IsNull())
    {
        if (!rsp["ResultVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultVideoUrl = string(rsp["ResultVideoUrl"].GetString());
        m_resultVideoUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResultVideoMD5") && !rsp["ResultVideoMD5"].IsNull())
    {
        if (!rsp["ResultVideoMD5"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultVideoMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultVideoMD5 = string(rsp["ResultVideoMD5"].GetString());
        m_resultVideoMD5HasBeenSet = true;
    }

    if (rsp.HasMember("VideoBasicInformation") && !rsp["VideoBasicInformation"].IsNull())
    {
        if (!rsp["VideoBasicInformation"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoBasicInformation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoBasicInformation.Deserialize(rsp["VideoBasicInformation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoBasicInformationHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeSegmentationTaskResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool DescribeSegmentationTaskResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeSegmentationTaskResponse::GetResultVideoUrl() const
{
    return m_resultVideoUrl;
}

bool DescribeSegmentationTaskResponse::ResultVideoUrlHasBeenSet() const
{
    return m_resultVideoUrlHasBeenSet;
}

string DescribeSegmentationTaskResponse::GetResultVideoMD5() const
{
    return m_resultVideoMD5;
}

bool DescribeSegmentationTaskResponse::ResultVideoMD5HasBeenSet() const
{
    return m_resultVideoMD5HasBeenSet;
}

VideoBasicInformation DescribeSegmentationTaskResponse::GetVideoBasicInformation() const
{
    return m_videoBasicInformation;
}

bool DescribeSegmentationTaskResponse::VideoBasicInformationHasBeenSet() const
{
    return m_videoBasicInformationHasBeenSet;
}

string DescribeSegmentationTaskResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool DescribeSegmentationTaskResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}



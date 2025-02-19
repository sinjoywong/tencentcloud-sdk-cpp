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

#include <tencentcloud/npp/v20190823/model/DescribeCallBackStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

DescribeCallBackStatusResponse::DescribeCallBackStatusResponse() :
    m_errorCodeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_callIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_callStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCallBackStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(rsp["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("CallId") && !rsp["CallId"].IsNull())
    {
        if (!rsp["CallId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callId = string(rsp["CallId"].GetString());
        m_callIdHasBeenSet = true;
    }

    if (rsp.HasMember("Src") && !rsp["Src"].IsNull())
    {
        if (!rsp["Src"].IsString())
        {
            return CoreInternalOutcome(Error("response `Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(rsp["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (rsp.HasMember("Dst") && !rsp["Dst"].IsNull())
    {
        if (!rsp["Dst"].IsString())
        {
            return CoreInternalOutcome(Error("response `Dst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dst = string(rsp["Dst"].GetString());
        m_dstHasBeenSet = true;
    }

    if (rsp.HasMember("CallStatus") && !rsp["CallStatus"].IsNull())
    {
        if (!rsp["CallStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callStatus = string(rsp["CallStatus"].GetString());
        m_callStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCallBackStatusResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool DescribeCallBackStatusResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string DescribeCallBackStatusResponse::GetMsg() const
{
    return m_msg;
}

bool DescribeCallBackStatusResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string DescribeCallBackStatusResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeCallBackStatusResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeCallBackStatusResponse::GetCallId() const
{
    return m_callId;
}

bool DescribeCallBackStatusResponse::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string DescribeCallBackStatusResponse::GetSrc() const
{
    return m_src;
}

bool DescribeCallBackStatusResponse::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string DescribeCallBackStatusResponse::GetDst() const
{
    return m_dst;
}

bool DescribeCallBackStatusResponse::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string DescribeCallBackStatusResponse::GetCallStatus() const
{
    return m_callStatus;
}

bool DescribeCallBackStatusResponse::CallStatusHasBeenSet() const
{
    return m_callStatusHasBeenSet;
}



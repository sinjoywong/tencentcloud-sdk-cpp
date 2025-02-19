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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTransferResultResponse::QueryTransferResultResponse() :
    m_errCodeHasBeenSet(false),
    m_errMessageHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome QueryTransferResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrCode") && !rsp["ErrCode"].IsNull())
    {
        if (!rsp["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(rsp["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMessage") && !rsp["ErrMessage"].IsNull())
    {
        if (!rsp["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(rsp["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(rsp["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryTransferResultResponse::GetErrCode() const
{
    return m_errCode;
}

bool QueryTransferResultResponse::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string QueryTransferResultResponse::GetErrMessage() const
{
    return m_errMessage;
}

bool QueryTransferResultResponse::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

QueryTransferResultData QueryTransferResultResponse::GetResult() const
{
    return m_result;
}

bool QueryTransferResultResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}



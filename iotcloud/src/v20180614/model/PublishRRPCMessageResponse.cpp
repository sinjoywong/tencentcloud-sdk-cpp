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

#include <tencentcloud/iotcloud/v20180614/model/PublishRRPCMessageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

PublishRRPCMessageResponse::PublishRRPCMessageResponse() :
    m_messageIdHasBeenSet(false),
    m_payloadBase64HasBeenSet(false)
{
}

CoreInternalOutcome PublishRRPCMessageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MessageId") && !rsp["MessageId"].IsNull())
    {
        if (!rsp["MessageId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MessageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = rsp["MessageId"].GetInt64();
        m_messageIdHasBeenSet = true;
    }

    if (rsp.HasMember("PayloadBase64") && !rsp["PayloadBase64"].IsNull())
    {
        if (!rsp["PayloadBase64"].IsString())
        {
            return CoreInternalOutcome(Error("response `PayloadBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadBase64 = string(rsp["PayloadBase64"].GetString());
        m_payloadBase64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t PublishRRPCMessageResponse::GetMessageId() const
{
    return m_messageId;
}

bool PublishRRPCMessageResponse::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string PublishRRPCMessageResponse::GetPayloadBase64() const
{
    return m_payloadBase64;
}

bool PublishRRPCMessageResponse::PayloadBase64HasBeenSet() const
{
    return m_payloadBase64HasBeenSet;
}



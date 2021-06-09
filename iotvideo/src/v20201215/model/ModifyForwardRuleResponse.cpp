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

#include <tencentcloud/iotvideo/v20201215/model/ModifyForwardRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

ModifyForwardRuleResponse::ModifyForwardRuleResponse() :
    m_endpointHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_queueTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyForwardRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("ProductID") && !rsp["ProductID"].IsNull())
    {
        if (!rsp["ProductID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(rsp["ProductID"].GetString());
        m_productIDHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = rsp["QueueType"].GetUint64();
        m_queueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyForwardRuleResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool ModifyForwardRuleResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string ModifyForwardRuleResponse::GetProductID() const
{
    return m_productID;
}

bool ModifyForwardRuleResponse::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t ModifyForwardRuleResponse::GetResult() const
{
    return m_result;
}

bool ModifyForwardRuleResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ModifyForwardRuleResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool ModifyForwardRuleResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

uint64_t ModifyForwardRuleResponse::GetQueueType() const
{
    return m_queueType;
}

bool ModifyForwardRuleResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}



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

#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetInvokeTxResponse::GetInvokeTxResponse() :
    m_txValidationCodeHasBeenSet(false),
    m_txValidationMsgHasBeenSet(false),
    m_blockIdHasBeenSet(false)
{
}

CoreInternalOutcome GetInvokeTxResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TxValidationCode") && !rsp["TxValidationCode"].IsNull())
    {
        if (!rsp["TxValidationCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TxValidationCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_txValidationCode = rsp["TxValidationCode"].GetInt64();
        m_txValidationCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TxValidationMsg") && !rsp["TxValidationMsg"].IsNull())
    {
        if (!rsp["TxValidationMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `TxValidationMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txValidationMsg = string(rsp["TxValidationMsg"].GetString());
        m_txValidationMsgHasBeenSet = true;
    }

    if (rsp.HasMember("BlockId") && !rsp["BlockId"].IsNull())
    {
        if (!rsp["BlockId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BlockId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockId = rsp["BlockId"].GetInt64();
        m_blockIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t GetInvokeTxResponse::GetTxValidationCode() const
{
    return m_txValidationCode;
}

bool GetInvokeTxResponse::TxValidationCodeHasBeenSet() const
{
    return m_txValidationCodeHasBeenSet;
}

string GetInvokeTxResponse::GetTxValidationMsg() const
{
    return m_txValidationMsg;
}

bool GetInvokeTxResponse::TxValidationMsgHasBeenSet() const
{
    return m_txValidationMsgHasBeenSet;
}

int64_t GetInvokeTxResponse::GetBlockId() const
{
    return m_blockId;
}

bool GetInvokeTxResponse::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}



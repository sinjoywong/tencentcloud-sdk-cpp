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

#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QuerySmallAmountTransferResponse::QuerySmallAmountTransferResponse() :
    m_txnReturnCodeHasBeenSet(false),
    m_txnReturnMsgHasBeenSet(false),
    m_cnsmrSeqNoHasBeenSet(false),
    m_returnStatusHasBeenSet(false),
    m_returnMsgHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

CoreInternalOutcome QuerySmallAmountTransferResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TxnReturnCode") && !rsp["TxnReturnCode"].IsNull())
    {
        if (!rsp["TxnReturnCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `TxnReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnCode = string(rsp["TxnReturnCode"].GetString());
        m_txnReturnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TxnReturnMsg") && !rsp["TxnReturnMsg"].IsNull())
    {
        if (!rsp["TxnReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `TxnReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnMsg = string(rsp["TxnReturnMsg"].GetString());
        m_txnReturnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("CnsmrSeqNo") && !rsp["CnsmrSeqNo"].IsNull())
    {
        if (!rsp["CnsmrSeqNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CnsmrSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnsmrSeqNo = string(rsp["CnsmrSeqNo"].GetString());
        m_cnsmrSeqNoHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnStatus") && !rsp["ReturnStatus"].IsNull())
    {
        if (!rsp["ReturnStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReturnStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnStatus = string(rsp["ReturnStatus"].GetString());
        m_returnStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnMsg") && !rsp["ReturnMsg"].IsNull())
    {
        if (!rsp["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(rsp["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedMsg") && !rsp["ReservedMsg"].IsNull())
    {
        if (!rsp["ReservedMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMsg = string(rsp["ReservedMsg"].GetString());
        m_reservedMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QuerySmallAmountTransferResponse::GetTxnReturnCode() const
{
    return m_txnReturnCode;
}

bool QuerySmallAmountTransferResponse::TxnReturnCodeHasBeenSet() const
{
    return m_txnReturnCodeHasBeenSet;
}

string QuerySmallAmountTransferResponse::GetTxnReturnMsg() const
{
    return m_txnReturnMsg;
}

bool QuerySmallAmountTransferResponse::TxnReturnMsgHasBeenSet() const
{
    return m_txnReturnMsgHasBeenSet;
}

string QuerySmallAmountTransferResponse::GetCnsmrSeqNo() const
{
    return m_cnsmrSeqNo;
}

bool QuerySmallAmountTransferResponse::CnsmrSeqNoHasBeenSet() const
{
    return m_cnsmrSeqNoHasBeenSet;
}

string QuerySmallAmountTransferResponse::GetReturnStatus() const
{
    return m_returnStatus;
}

bool QuerySmallAmountTransferResponse::ReturnStatusHasBeenSet() const
{
    return m_returnStatusHasBeenSet;
}

string QuerySmallAmountTransferResponse::GetReturnMsg() const
{
    return m_returnMsg;
}

bool QuerySmallAmountTransferResponse::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

string QuerySmallAmountTransferResponse::GetReservedMsg() const
{
    return m_reservedMsg;
}

bool QuerySmallAmountTransferResponse::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}



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

#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RevokeMemberRechargeThirdPayResponse::RevokeMemberRechargeThirdPayResponse() :
    m_txnReturnCodeHasBeenSet(false),
    m_txnReturnMsgHasBeenSet(false),
    m_cnsmrSeqNoHasBeenSet(false),
    m_frontSeqNoHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false)
{
}

CoreInternalOutcome RevokeMemberRechargeThirdPayResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("FrontSeqNo") && !rsp["FrontSeqNo"].IsNull())
    {
        if (!rsp["FrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `FrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSeqNo = string(rsp["FrontSeqNo"].GetString());
        m_frontSeqNoHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedMsgOne") && !rsp["ReservedMsgOne"].IsNull())
    {
        if (!rsp["ReservedMsgOne"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedMsgOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMsgOne = string(rsp["ReservedMsgOne"].GetString());
        m_reservedMsgOneHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedMsgTwo") && !rsp["ReservedMsgTwo"].IsNull())
    {
        if (!rsp["ReservedMsgTwo"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReservedMsgTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMsgTwo = string(rsp["ReservedMsgTwo"].GetString());
        m_reservedMsgTwoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string RevokeMemberRechargeThirdPayResponse::GetTxnReturnCode() const
{
    return m_txnReturnCode;
}

bool RevokeMemberRechargeThirdPayResponse::TxnReturnCodeHasBeenSet() const
{
    return m_txnReturnCodeHasBeenSet;
}

string RevokeMemberRechargeThirdPayResponse::GetTxnReturnMsg() const
{
    return m_txnReturnMsg;
}

bool RevokeMemberRechargeThirdPayResponse::TxnReturnMsgHasBeenSet() const
{
    return m_txnReturnMsgHasBeenSet;
}

string RevokeMemberRechargeThirdPayResponse::GetCnsmrSeqNo() const
{
    return m_cnsmrSeqNo;
}

bool RevokeMemberRechargeThirdPayResponse::CnsmrSeqNoHasBeenSet() const
{
    return m_cnsmrSeqNoHasBeenSet;
}

string RevokeMemberRechargeThirdPayResponse::GetFrontSeqNo() const
{
    return m_frontSeqNo;
}

bool RevokeMemberRechargeThirdPayResponse::FrontSeqNoHasBeenSet() const
{
    return m_frontSeqNoHasBeenSet;
}

string RevokeMemberRechargeThirdPayResponse::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

bool RevokeMemberRechargeThirdPayResponse::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RevokeMemberRechargeThirdPayResponse::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

bool RevokeMemberRechargeThirdPayResponse::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}



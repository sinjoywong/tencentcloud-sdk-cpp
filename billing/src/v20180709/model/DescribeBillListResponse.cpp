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

#include <tencentcloud/billing/v20180709/model/DescribeBillListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillListResponse::DescribeBillListResponse() :
    m_transactionListHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_returnAmountHasBeenSet(false),
    m_rechargeAmountHasBeenSet(false),
    m_blockAmountHasBeenSet(false),
    m_unblockAmountHasBeenSet(false),
    m_deductAmountHasBeenSet(false),
    m_agentInAmountHasBeenSet(false),
    m_advanceRechargeAmountHasBeenSet(false),
    m_withdrawAmountHasBeenSet(false),
    m_agentOutAmountHasBeenSet(false),
    m_advancePayAmountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBillListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TransactionList") && !rsp["TransactionList"].IsNull())
    {
        if (!rsp["TransactionList"].IsArray())
            return CoreInternalOutcome(Error("response `TransactionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TransactionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTransactionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transactionList.push_back(item);
        }
        m_transactionListHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnAmount") && !rsp["ReturnAmount"].IsNull())
    {
        if (!rsp["ReturnAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ReturnAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_returnAmount = rsp["ReturnAmount"].GetDouble();
        m_returnAmountHasBeenSet = true;
    }

    if (rsp.HasMember("RechargeAmount") && !rsp["RechargeAmount"].IsNull())
    {
        if (!rsp["RechargeAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `RechargeAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rechargeAmount = rsp["RechargeAmount"].GetDouble();
        m_rechargeAmountHasBeenSet = true;
    }

    if (rsp.HasMember("BlockAmount") && !rsp["BlockAmount"].IsNull())
    {
        if (!rsp["BlockAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `BlockAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_blockAmount = rsp["BlockAmount"].GetDouble();
        m_blockAmountHasBeenSet = true;
    }

    if (rsp.HasMember("UnblockAmount") && !rsp["UnblockAmount"].IsNull())
    {
        if (!rsp["UnblockAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `UnblockAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unblockAmount = rsp["UnblockAmount"].GetDouble();
        m_unblockAmountHasBeenSet = true;
    }

    if (rsp.HasMember("DeductAmount") && !rsp["DeductAmount"].IsNull())
    {
        if (!rsp["DeductAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `DeductAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductAmount = rsp["DeductAmount"].GetDouble();
        m_deductAmountHasBeenSet = true;
    }

    if (rsp.HasMember("AgentInAmount") && !rsp["AgentInAmount"].IsNull())
    {
        if (!rsp["AgentInAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AgentInAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_agentInAmount = rsp["AgentInAmount"].GetDouble();
        m_agentInAmountHasBeenSet = true;
    }

    if (rsp.HasMember("AdvanceRechargeAmount") && !rsp["AdvanceRechargeAmount"].IsNull())
    {
        if (!rsp["AdvanceRechargeAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AdvanceRechargeAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_advanceRechargeAmount = rsp["AdvanceRechargeAmount"].GetDouble();
        m_advanceRechargeAmountHasBeenSet = true;
    }

    if (rsp.HasMember("WithdrawAmount") && !rsp["WithdrawAmount"].IsNull())
    {
        if (!rsp["WithdrawAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `WithdrawAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_withdrawAmount = rsp["WithdrawAmount"].GetDouble();
        m_withdrawAmountHasBeenSet = true;
    }

    if (rsp.HasMember("AgentOutAmount") && !rsp["AgentOutAmount"].IsNull())
    {
        if (!rsp["AgentOutAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AgentOutAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_agentOutAmount = rsp["AgentOutAmount"].GetDouble();
        m_agentOutAmountHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancePayAmount") && !rsp["AdvancePayAmount"].IsNull())
    {
        if (!rsp["AdvancePayAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `AdvancePayAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_advancePayAmount = rsp["AdvancePayAmount"].GetDouble();
        m_advancePayAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<BillTransactionInfo> DescribeBillListResponse::GetTransactionList() const
{
    return m_transactionList;
}

bool DescribeBillListResponse::TransactionListHasBeenSet() const
{
    return m_transactionListHasBeenSet;
}

int64_t DescribeBillListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeBillListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

double DescribeBillListResponse::GetReturnAmount() const
{
    return m_returnAmount;
}

bool DescribeBillListResponse::ReturnAmountHasBeenSet() const
{
    return m_returnAmountHasBeenSet;
}

double DescribeBillListResponse::GetRechargeAmount() const
{
    return m_rechargeAmount;
}

bool DescribeBillListResponse::RechargeAmountHasBeenSet() const
{
    return m_rechargeAmountHasBeenSet;
}

double DescribeBillListResponse::GetBlockAmount() const
{
    return m_blockAmount;
}

bool DescribeBillListResponse::BlockAmountHasBeenSet() const
{
    return m_blockAmountHasBeenSet;
}

double DescribeBillListResponse::GetUnblockAmount() const
{
    return m_unblockAmount;
}

bool DescribeBillListResponse::UnblockAmountHasBeenSet() const
{
    return m_unblockAmountHasBeenSet;
}

double DescribeBillListResponse::GetDeductAmount() const
{
    return m_deductAmount;
}

bool DescribeBillListResponse::DeductAmountHasBeenSet() const
{
    return m_deductAmountHasBeenSet;
}

double DescribeBillListResponse::GetAgentInAmount() const
{
    return m_agentInAmount;
}

bool DescribeBillListResponse::AgentInAmountHasBeenSet() const
{
    return m_agentInAmountHasBeenSet;
}

double DescribeBillListResponse::GetAdvanceRechargeAmount() const
{
    return m_advanceRechargeAmount;
}

bool DescribeBillListResponse::AdvanceRechargeAmountHasBeenSet() const
{
    return m_advanceRechargeAmountHasBeenSet;
}

double DescribeBillListResponse::GetWithdrawAmount() const
{
    return m_withdrawAmount;
}

bool DescribeBillListResponse::WithdrawAmountHasBeenSet() const
{
    return m_withdrawAmountHasBeenSet;
}

double DescribeBillListResponse::GetAgentOutAmount() const
{
    return m_agentOutAmount;
}

bool DescribeBillListResponse::AgentOutAmountHasBeenSet() const
{
    return m_agentOutAmountHasBeenSet;
}

double DescribeBillListResponse::GetAdvancePayAmount() const
{
    return m_advancePayAmount;
}

bool DescribeBillListResponse::AdvancePayAmountHasBeenSet() const
{
    return m_advancePayAmountHasBeenSet;
}



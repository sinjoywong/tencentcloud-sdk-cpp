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

#include <tencentcloud/billing/v20180709/model/Deal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

Deal::Deal() :
    m_orderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_payerHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_voucherDeclineHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_goodsCategoryIdHasBeenSet(false),
    m_productInfoHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_bigDealIdHasBeenSet(false),
    m_formulaHasBeenSet(false),
    m_refReturnDealsHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome Deal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Deal.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Payer") && !value["Payer"].IsNull())
    {
        if (!value["Payer"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.Payer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payer = string(value["Payer"].GetString());
        m_payerHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Deal.RealTotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = value["RealTotalCost"].GetInt64();
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherDecline") && !value["VoucherDecline"].IsNull())
    {
        if (!value["VoucherDecline"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Deal.VoucherDecline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voucherDecline = value["VoucherDecline"].GetInt64();
        m_voucherDeclineHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Deal.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("GoodsCategoryId") && !value["GoodsCategoryId"].IsNull())
    {
        if (!value["GoodsCategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Deal.GoodsCategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCategoryId = value["GoodsCategoryId"].GetInt64();
        m_goodsCategoryIdHasBeenSet = true;
    }

    if (value.HasMember("ProductInfo") && !value["ProductInfo"].IsNull())
    {
        if (!value["ProductInfo"].IsArray())
            return CoreInternalOutcome(Error("response `Deal.ProductInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productInfo.push_back(item);
        }
        m_productInfoHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Deal.TimeSpan` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetDouble();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Deal.Policy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policy = value["Policy"].GetDouble();
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Deal.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Deal.TotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = value["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("Formula") && !value["Formula"].IsNull())
    {
        if (!value["Formula"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.Formula` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formula = string(value["Formula"].GetString());
        m_formulaHasBeenSet = true;
    }

    if (value.HasMember("RefReturnDeals") && !value["RefReturnDeals"].IsNull())
    {
        if (!value["RefReturnDeals"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.RefReturnDeals` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refReturnDeals = string(value["RefReturnDeals"].GetString());
        m_refReturnDealsHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Deal.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Deal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_payerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payer.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
    }

    if (m_voucherDeclineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherDecline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voucherDecline, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_goodsCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsCategoryId, allocator);
    }

    if (m_productInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productInfo.begin(); itr != m_productInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
    }

    if (m_formulaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Formula";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formula.c_str(), allocator).Move(), allocator);
    }

    if (m_refReturnDealsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefReturnDeals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refReturnDeals.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

}


string Deal::GetOrderId() const
{
    return m_orderId;
}

void Deal::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool Deal::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t Deal::GetStatus() const
{
    return m_status;
}

void Deal::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Deal::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Deal::GetPayer() const
{
    return m_payer;
}

void Deal::SetPayer(const string& _payer)
{
    m_payer = _payer;
    m_payerHasBeenSet = true;
}

bool Deal::PayerHasBeenSet() const
{
    return m_payerHasBeenSet;
}

string Deal::GetCreateTime() const
{
    return m_createTime;
}

void Deal::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Deal::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Deal::GetCreator() const
{
    return m_creator;
}

void Deal::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Deal::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t Deal::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void Deal::SetRealTotalCost(const int64_t& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool Deal::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

int64_t Deal::GetVoucherDecline() const
{
    return m_voucherDecline;
}

void Deal::SetVoucherDecline(const int64_t& _voucherDecline)
{
    m_voucherDecline = _voucherDecline;
    m_voucherDeclineHasBeenSet = true;
}

bool Deal::VoucherDeclineHasBeenSet() const
{
    return m_voucherDeclineHasBeenSet;
}

int64_t Deal::GetProjectId() const
{
    return m_projectId;
}

void Deal::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Deal::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t Deal::GetGoodsCategoryId() const
{
    return m_goodsCategoryId;
}

void Deal::SetGoodsCategoryId(const int64_t& _goodsCategoryId)
{
    m_goodsCategoryId = _goodsCategoryId;
    m_goodsCategoryIdHasBeenSet = true;
}

bool Deal::GoodsCategoryIdHasBeenSet() const
{
    return m_goodsCategoryIdHasBeenSet;
}

vector<ProductInfo> Deal::GetProductInfo() const
{
    return m_productInfo;
}

void Deal::SetProductInfo(const vector<ProductInfo>& _productInfo)
{
    m_productInfo = _productInfo;
    m_productInfoHasBeenSet = true;
}

bool Deal::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

double Deal::GetTimeSpan() const
{
    return m_timeSpan;
}

void Deal::SetTimeSpan(const double& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool Deal::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string Deal::GetTimeUnit() const
{
    return m_timeUnit;
}

void Deal::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool Deal::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string Deal::GetCurrency() const
{
    return m_currency;
}

void Deal::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool Deal::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

double Deal::GetPolicy() const
{
    return m_policy;
}

void Deal::SetPolicy(const double& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool Deal::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

double Deal::GetPrice() const
{
    return m_price;
}

void Deal::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool Deal::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double Deal::GetTotalCost() const
{
    return m_totalCost;
}

void Deal::SetTotalCost(const double& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool Deal::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

string Deal::GetProductCode() const
{
    return m_productCode;
}

void Deal::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool Deal::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string Deal::GetSubProductCode() const
{
    return m_subProductCode;
}

void Deal::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool Deal::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string Deal::GetBigDealId() const
{
    return m_bigDealId;
}

void Deal::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool Deal::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string Deal::GetFormula() const
{
    return m_formula;
}

void Deal::SetFormula(const string& _formula)
{
    m_formula = _formula;
    m_formulaHasBeenSet = true;
}

bool Deal::FormulaHasBeenSet() const
{
    return m_formulaHasBeenSet;
}

string Deal::GetRefReturnDeals() const
{
    return m_refReturnDeals;
}

void Deal::SetRefReturnDeals(const string& _refReturnDeals)
{
    m_refReturnDeals = _refReturnDeals;
    m_refReturnDealsHasBeenSet = true;
}

bool Deal::RefReturnDealsHasBeenSet() const
{
    return m_refReturnDealsHasBeenSet;
}

string Deal::GetPayMode() const
{
    return m_payMode;
}

void Deal::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Deal::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}


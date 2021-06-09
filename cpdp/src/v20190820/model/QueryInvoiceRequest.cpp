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

#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryInvoiceRequest::QueryInvoiceRequest() :
    m_invoicePlatformIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_orderSnHasBeenSet(false),
    m_isRedHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_invoiceChannelHasBeenSet(false),
    m_sellerTaxpayerNumHasBeenSet(false)
{
}

string QueryInvoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSn.c_str(), allocator).Move(), allocator);
    }

    if (m_isRedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRed, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoiceChannel, allocator);
    }

    if (m_sellerTaxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerTaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sellerTaxpayerNum.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryInvoiceRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void QueryInvoiceRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool QueryInvoiceRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

string QueryInvoiceRequest::GetOrderId() const
{
    return m_orderId;
}

void QueryInvoiceRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryInvoiceRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryInvoiceRequest::GetOrderSn() const
{
    return m_orderSn;
}

void QueryInvoiceRequest::SetOrderSn(const string& _orderSn)
{
    m_orderSn = _orderSn;
    m_orderSnHasBeenSet = true;
}

bool QueryInvoiceRequest::OrderSnHasBeenSet() const
{
    return m_orderSnHasBeenSet;
}

int64_t QueryInvoiceRequest::GetIsRed() const
{
    return m_isRed;
}

void QueryInvoiceRequest::SetIsRed(const int64_t& _isRed)
{
    m_isRed = _isRed;
    m_isRedHasBeenSet = true;
}

bool QueryInvoiceRequest::IsRedHasBeenSet() const
{
    return m_isRedHasBeenSet;
}

string QueryInvoiceRequest::GetProfile() const
{
    return m_profile;
}

void QueryInvoiceRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryInvoiceRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t QueryInvoiceRequest::GetInvoiceChannel() const
{
    return m_invoiceChannel;
}

void QueryInvoiceRequest::SetInvoiceChannel(const int64_t& _invoiceChannel)
{
    m_invoiceChannel = _invoiceChannel;
    m_invoiceChannelHasBeenSet = true;
}

bool QueryInvoiceRequest::InvoiceChannelHasBeenSet() const
{
    return m_invoiceChannelHasBeenSet;
}

string QueryInvoiceRequest::GetSellerTaxpayerNum() const
{
    return m_sellerTaxpayerNum;
}

void QueryInvoiceRequest::SetSellerTaxpayerNum(const string& _sellerTaxpayerNum)
{
    m_sellerTaxpayerNum = _sellerTaxpayerNum;
    m_sellerTaxpayerNumHasBeenSet = true;
}

bool QueryInvoiceRequest::SellerTaxpayerNumHasBeenSet() const
{
    return m_sellerTaxpayerNumHasBeenSet;
}



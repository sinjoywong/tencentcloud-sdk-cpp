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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceOCRResponse::VatInvoiceOCRResponse() :
    m_vatInvoiceInfosHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_pdfPageSizeHasBeenSet(false),
    m_angleHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VatInvoiceInfos") && !rsp["VatInvoiceInfos"].IsNull())
    {
        if (!rsp["VatInvoiceInfos"].IsArray())
            return CoreInternalOutcome(Error("response `VatInvoiceInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VatInvoiceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextVatInvoice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vatInvoiceInfos.push_back(item);
        }
        m_vatInvoiceInfosHasBeenSet = true;
    }

    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Error("response `Items` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VatInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (rsp.HasMember("PdfPageSize") && !rsp["PdfPageSize"].IsNull())
    {
        if (!rsp["PdfPageSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PdfPageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pdfPageSize = rsp["PdfPageSize"].GetInt64();
        m_pdfPageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<TextVatInvoice> VatInvoiceOCRResponse::GetVatInvoiceInfos() const
{
    return m_vatInvoiceInfos;
}

bool VatInvoiceOCRResponse::VatInvoiceInfosHasBeenSet() const
{
    return m_vatInvoiceInfosHasBeenSet;
}

vector<VatInvoiceItem> VatInvoiceOCRResponse::GetItems() const
{
    return m_items;
}

bool VatInvoiceOCRResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

int64_t VatInvoiceOCRResponse::GetPdfPageSize() const
{
    return m_pdfPageSize;
}

bool VatInvoiceOCRResponse::PdfPageSizeHasBeenSet() const
{
    return m_pdfPageSizeHasBeenSet;
}

double VatInvoiceOCRResponse::GetAngle() const
{
    return m_angle;
}

bool VatInvoiceOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}



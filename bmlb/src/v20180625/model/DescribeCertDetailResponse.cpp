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

#include <tencentcloud/bmlb/v20180625/model/DescribeCertDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DescribeCertDetailResponse::DescribeCertDetailResponse() :
    m_certIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certContentHasBeenSet(false),
    m_certDomainHasBeenSet(false),
    m_certSubjectDomainHasBeenSet(false),
    m_certUploadTimeHasBeenSet(false),
    m_certBeginTimeHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_certLoadBalancerSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCertDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CertId") && !rsp["CertId"].IsNull())
    {
        if (!rsp["CertId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(rsp["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (rsp.HasMember("CertName") && !rsp["CertName"].IsNull())
    {
        if (!rsp["CertName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(rsp["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (rsp.HasMember("CertType") && !rsp["CertType"].IsNull())
    {
        if (!rsp["CertType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(rsp["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CertContent") && !rsp["CertContent"].IsNull())
    {
        if (!rsp["CertContent"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certContent = string(rsp["CertContent"].GetString());
        m_certContentHasBeenSet = true;
    }

    if (rsp.HasMember("CertDomain") && !rsp["CertDomain"].IsNull())
    {
        if (!rsp["CertDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certDomain = string(rsp["CertDomain"].GetString());
        m_certDomainHasBeenSet = true;
    }

    if (rsp.HasMember("CertSubjectDomain") && !rsp["CertSubjectDomain"].IsNull())
    {
        if (!rsp["CertSubjectDomain"].IsArray())
            return CoreInternalOutcome(Error("response `CertSubjectDomain` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CertSubjectDomain"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_certSubjectDomain.push_back((*itr).GetString());
        }
        m_certSubjectDomainHasBeenSet = true;
    }

    if (rsp.HasMember("CertUploadTime") && !rsp["CertUploadTime"].IsNull())
    {
        if (!rsp["CertUploadTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertUploadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certUploadTime = string(rsp["CertUploadTime"].GetString());
        m_certUploadTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertBeginTime") && !rsp["CertBeginTime"].IsNull())
    {
        if (!rsp["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(rsp["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertEndTime") && !rsp["CertEndTime"].IsNull())
    {
        if (!rsp["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(rsp["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertLoadBalancerSet") && !rsp["CertLoadBalancerSet"].IsNull())
    {
        if (!rsp["CertLoadBalancerSet"].IsArray())
            return CoreInternalOutcome(Error("response `CertLoadBalancerSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CertLoadBalancerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertDetailLoadBalancer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certLoadBalancerSet.push_back(item);
        }
        m_certLoadBalancerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCertDetailResponse::GetCertId() const
{
    return m_certId;
}

bool DescribeCertDetailResponse::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string DescribeCertDetailResponse::GetCertName() const
{
    return m_certName;
}

bool DescribeCertDetailResponse::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string DescribeCertDetailResponse::GetCertType() const
{
    return m_certType;
}

bool DescribeCertDetailResponse::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DescribeCertDetailResponse::GetCertContent() const
{
    return m_certContent;
}

bool DescribeCertDetailResponse::CertContentHasBeenSet() const
{
    return m_certContentHasBeenSet;
}

string DescribeCertDetailResponse::GetCertDomain() const
{
    return m_certDomain;
}

bool DescribeCertDetailResponse::CertDomainHasBeenSet() const
{
    return m_certDomainHasBeenSet;
}

vector<string> DescribeCertDetailResponse::GetCertSubjectDomain() const
{
    return m_certSubjectDomain;
}

bool DescribeCertDetailResponse::CertSubjectDomainHasBeenSet() const
{
    return m_certSubjectDomainHasBeenSet;
}

string DescribeCertDetailResponse::GetCertUploadTime() const
{
    return m_certUploadTime;
}

bool DescribeCertDetailResponse::CertUploadTimeHasBeenSet() const
{
    return m_certUploadTimeHasBeenSet;
}

string DescribeCertDetailResponse::GetCertBeginTime() const
{
    return m_certBeginTime;
}

bool DescribeCertDetailResponse::CertBeginTimeHasBeenSet() const
{
    return m_certBeginTimeHasBeenSet;
}

string DescribeCertDetailResponse::GetCertEndTime() const
{
    return m_certEndTime;
}

bool DescribeCertDetailResponse::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

vector<CertDetailLoadBalancer> DescribeCertDetailResponse::GetCertLoadBalancerSet() const
{
    return m_certLoadBalancerSet;
}

bool DescribeCertDetailResponse::CertLoadBalancerSetHasBeenSet() const
{
    return m_certLoadBalancerSetHasBeenSet;
}



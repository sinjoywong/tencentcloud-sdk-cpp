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

#include <tencentcloud/clb/v20180317/model/CertificateOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CertificateOutput::CertificateOutput() :
    m_sSLModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certCaIdHasBeenSet(false)
{
}

CoreInternalOutcome CertificateOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SSLMode") && !value["SSLMode"].IsNull())
    {
        if (!value["SSLMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateOutput.SSLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMode = string(value["SSLMode"].GetString());
        m_sSLModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateOutput.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateOutput.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sSLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

}


string CertificateOutput::GetSSLMode() const
{
    return m_sSLMode;
}

void CertificateOutput::SetSSLMode(const string& _sSLMode)
{
    m_sSLMode = _sSLMode;
    m_sSLModeHasBeenSet = true;
}

bool CertificateOutput::SSLModeHasBeenSet() const
{
    return m_sSLModeHasBeenSet;
}

string CertificateOutput::GetCertId() const
{
    return m_certId;
}

void CertificateOutput::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertificateOutput::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertificateOutput::GetCertCaId() const
{
    return m_certCaId;
}

void CertificateOutput::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool CertificateOutput::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}


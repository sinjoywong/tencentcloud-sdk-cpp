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

#include <tencentcloud/monitor/v20180724/model/URLNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

URLNotice::URLNotice() :
    m_uRLHasBeenSet(false),
    m_isValidHasBeenSet(false),
    m_validationCodeHasBeenSet(false)
{
}

CoreInternalOutcome URLNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Error("response `URLNotice.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("IsValid") && !value["IsValid"].IsNull())
    {
        if (!value["IsValid"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `URLNotice.IsValid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isValid = value["IsValid"].GetInt64();
        m_isValidHasBeenSet = true;
    }

    if (value.HasMember("ValidationCode") && !value["ValidationCode"].IsNull())
    {
        if (!value["ValidationCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `URLNotice.ValidationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validationCode = string(value["ValidationCode"].GetString());
        m_validationCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void URLNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_isValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isValid, allocator);
    }

    if (m_validationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validationCode.c_str(), allocator).Move(), allocator);
    }

}


string URLNotice::GetURL() const
{
    return m_uRL;
}

void URLNotice::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool URLNotice::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

int64_t URLNotice::GetIsValid() const
{
    return m_isValid;
}

void URLNotice::SetIsValid(const int64_t& _isValid)
{
    m_isValid = _isValid;
    m_isValidHasBeenSet = true;
}

bool URLNotice::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}

string URLNotice::GetValidationCode() const
{
    return m_validationCode;
}

void URLNotice::SetValidationCode(const string& _validationCode)
{
    m_validationCode = _validationCode;
    m_validationCodeHasBeenSet = true;
}

bool URLNotice::ValidationCodeHasBeenSet() const
{
    return m_validationCodeHasBeenSet;
}


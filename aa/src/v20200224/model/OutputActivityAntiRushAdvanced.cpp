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

#include <tencentcloud/aa/v20200224/model/OutputActivityAntiRushAdvanced.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace rapidjson;
using namespace std;

OutputActivityAntiRushAdvanced::OutputActivityAntiRushAdvanced() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome OutputActivityAntiRushAdvanced::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputActivityAntiRushAdvanced.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputActivityAntiRushAdvanced.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputActivityAntiRushAdvanced.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputActivityAntiRushAdvanced::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t OutputActivityAntiRushAdvanced::GetCode() const
{
    return m_code;
}

void OutputActivityAntiRushAdvanced::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool OutputActivityAntiRushAdvanced::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string OutputActivityAntiRushAdvanced::GetMessage() const
{
    return m_message;
}

void OutputActivityAntiRushAdvanced::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool OutputActivityAntiRushAdvanced::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

OutputActivityAntiRushAdvancedValue OutputActivityAntiRushAdvanced::GetValue() const
{
    return m_value;
}

void OutputActivityAntiRushAdvanced::SetValue(const OutputActivityAntiRushAdvancedValue& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OutputActivityAntiRushAdvanced::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


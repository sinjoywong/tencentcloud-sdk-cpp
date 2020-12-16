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

#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

PublishMessageRequest::PublishMessageRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_payloadEncodingHasBeenSet(false)
{
}

string PublishMessageRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qos, allocator);
    }

    if (m_payloadEncodingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayloadEncoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payloadEncoding.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PublishMessageRequest::GetProductId() const
{
    return m_productId;
}

void PublishMessageRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool PublishMessageRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string PublishMessageRequest::GetDeviceName() const
{
    return m_deviceName;
}

void PublishMessageRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool PublishMessageRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string PublishMessageRequest::GetTopic() const
{
    return m_topic;
}

void PublishMessageRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool PublishMessageRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string PublishMessageRequest::GetPayload() const
{
    return m_payload;
}

void PublishMessageRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool PublishMessageRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

uint64_t PublishMessageRequest::GetQos() const
{
    return m_qos;
}

void PublishMessageRequest::SetQos(const uint64_t& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool PublishMessageRequest::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

string PublishMessageRequest::GetPayloadEncoding() const
{
    return m_payloadEncoding;
}

void PublishMessageRequest::SetPayloadEncoding(const string& _payloadEncoding)
{
    m_payloadEncoding = _payloadEncoding;
    m_payloadEncodingHasBeenSet = true;
}

bool PublishMessageRequest::PayloadEncodingHasBeenSet() const
{
    return m_payloadEncodingHasBeenSet;
}



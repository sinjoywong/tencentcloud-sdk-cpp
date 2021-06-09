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

#include <tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiversRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

BindTrafficMirrorReceiversRequest::BindTrafficMirrorReceiversRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_receiverSetHasBeenSet(false)
{
}

string BindTrafficMirrorReceiversRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiverSet.begin(); itr != m_receiverSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindTrafficMirrorReceiversRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void BindTrafficMirrorReceiversRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool BindTrafficMirrorReceiversRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

vector<BindTrafficMirrorReceiver> BindTrafficMirrorReceiversRequest::GetReceiverSet() const
{
    return m_receiverSet;
}

void BindTrafficMirrorReceiversRequest::SetReceiverSet(const vector<BindTrafficMirrorReceiver>& _receiverSet)
{
    m_receiverSet = _receiverSet;
    m_receiverSetHasBeenSet = true;
}

bool BindTrafficMirrorReceiversRequest::ReceiverSetHasBeenSet() const
{
    return m_receiverSetHasBeenSet;
}



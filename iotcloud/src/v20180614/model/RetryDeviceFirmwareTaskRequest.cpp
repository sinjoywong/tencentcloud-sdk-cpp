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

#include <tencentcloud/iotcloud/v20180614/model/RetryDeviceFirmwareTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

RetryDeviceFirmwareTaskRequest::RetryDeviceFirmwareTaskRequest() :
    m_productIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string RetryDeviceFirmwareTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RetryDeviceFirmwareTaskRequest::GetProductID() const
{
    return m_productID;
}

void RetryDeviceFirmwareTaskRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool RetryDeviceFirmwareTaskRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string RetryDeviceFirmwareTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void RetryDeviceFirmwareTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool RetryDeviceFirmwareTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string RetryDeviceFirmwareTaskRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void RetryDeviceFirmwareTaskRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool RetryDeviceFirmwareTaskRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

uint64_t RetryDeviceFirmwareTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void RetryDeviceFirmwareTaskRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RetryDeviceFirmwareTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}



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

#include <tencentcloud/tdmq/v20200217/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_endPointNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_healthyInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxNamespaceNumHasBeenSet(false),
    m_maxTopicNumHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_messageRetentionTimeHasBeenSet(false),
    m_maxStorageCapacityHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("EndPointNum") && !value["EndPointNum"].IsNull())
    {
        if (!value["EndPointNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.EndPointNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointNum = value["EndPointNum"].GetInt64();
        m_endPointNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("HealthyInfo") && !value["HealthyInfo"].IsNull())
    {
        if (!value["HealthyInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `Cluster.HealthyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyInfo = string(value["HealthyInfo"].GetString());
        m_healthyInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaceNum") && !value["MaxNamespaceNum"].IsNull())
    {
        if (!value["MaxNamespaceNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxNamespaceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaceNum = value["MaxNamespaceNum"].GetInt64();
        m_maxNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("MaxTopicNum") && !value["MaxTopicNum"].IsNull())
    {
        if (!value["MaxTopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxTopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopicNum = value["MaxTopicNum"].GetInt64();
        m_maxTopicNumHasBeenSet = true;
    }

    if (value.HasMember("MaxQps") && !value["MaxQps"].IsNull())
    {
        if (!value["MaxQps"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQps = value["MaxQps"].GetInt64();
        m_maxQpsHasBeenSet = true;
    }

    if (value.HasMember("MessageRetentionTime") && !value["MessageRetentionTime"].IsNull())
    {
        if (!value["MessageRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MessageRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageRetentionTime = value["MessageRetentionTime"].GetInt64();
        m_messageRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageCapacity") && !value["MaxStorageCapacity"].IsNull())
    {
        if (!value["MaxStorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Cluster.MaxStorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageCapacity = value["MaxStorageCapacity"].GetInt64();
        m_maxStorageCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_healthyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthyInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_maxNamespaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNamespaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNamespaceNum, allocator);
    }

    if (m_maxTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTopicNum, allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_messageRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRetentionTime, allocator);
    }

    if (m_maxStorageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageCapacity, allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetRemark() const
{
    return m_remark;
}

void Cluster::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Cluster::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t Cluster::GetEndPointNum() const
{
    return m_endPointNum;
}

void Cluster::SetEndPointNum(const int64_t& _endPointNum)
{
    m_endPointNum = _endPointNum;
    m_endPointNumHasBeenSet = true;
}

bool Cluster::EndPointNumHasBeenSet() const
{
    return m_endPointNumHasBeenSet;
}

string Cluster::GetCreateTime() const
{
    return m_createTime;
}

void Cluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Cluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Cluster::GetHealthy() const
{
    return m_healthy;
}

void Cluster::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool Cluster::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string Cluster::GetHealthyInfo() const
{
    return m_healthyInfo;
}

void Cluster::SetHealthyInfo(const string& _healthyInfo)
{
    m_healthyInfo = _healthyInfo;
    m_healthyInfoHasBeenSet = true;
}

bool Cluster::HealthyInfoHasBeenSet() const
{
    return m_healthyInfoHasBeenSet;
}

int64_t Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Cluster::GetMaxNamespaceNum() const
{
    return m_maxNamespaceNum;
}

void Cluster::SetMaxNamespaceNum(const int64_t& _maxNamespaceNum)
{
    m_maxNamespaceNum = _maxNamespaceNum;
    m_maxNamespaceNumHasBeenSet = true;
}

bool Cluster::MaxNamespaceNumHasBeenSet() const
{
    return m_maxNamespaceNumHasBeenSet;
}

int64_t Cluster::GetMaxTopicNum() const
{
    return m_maxTopicNum;
}

void Cluster::SetMaxTopicNum(const int64_t& _maxTopicNum)
{
    m_maxTopicNum = _maxTopicNum;
    m_maxTopicNumHasBeenSet = true;
}

bool Cluster::MaxTopicNumHasBeenSet() const
{
    return m_maxTopicNumHasBeenSet;
}

int64_t Cluster::GetMaxQps() const
{
    return m_maxQps;
}

void Cluster::SetMaxQps(const int64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool Cluster::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}

int64_t Cluster::GetMessageRetentionTime() const
{
    return m_messageRetentionTime;
}

void Cluster::SetMessageRetentionTime(const int64_t& _messageRetentionTime)
{
    m_messageRetentionTime = _messageRetentionTime;
    m_messageRetentionTimeHasBeenSet = true;
}

bool Cluster::MessageRetentionTimeHasBeenSet() const
{
    return m_messageRetentionTimeHasBeenSet;
}

int64_t Cluster::GetMaxStorageCapacity() const
{
    return m_maxStorageCapacity;
}

void Cluster::SetMaxStorageCapacity(const int64_t& _maxStorageCapacity)
{
    m_maxStorageCapacity = _maxStorageCapacity;
    m_maxStorageCapacityHasBeenSet = true;
}

bool Cluster::MaxStorageCapacityHasBeenSet() const
{
    return m_maxStorageCapacityHasBeenSet;
}


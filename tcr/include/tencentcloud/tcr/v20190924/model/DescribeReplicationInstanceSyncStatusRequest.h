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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceSyncStatus请求参数结构体
                */
                class DescribeReplicationInstanceSyncStatusRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceSyncStatusRequest();
                    ~DescribeReplicationInstanceSyncStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例Id
                     * @return RegistryId 主实例Id
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例Id
                     * @param RegistryId 主实例Id
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例Id
                     * @return ReplicationRegistryId 复制实例Id
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置复制实例Id
                     * @param ReplicationRegistryId 复制实例Id
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例的地域Id
                     * @return ReplicationRegionId 复制实例的地域Id
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置复制实例的地域Id
                     * @param ReplicationRegionId 复制实例的地域Id
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                private:

                    /**
                     * 主实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 复制实例Id
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * 复制实例的地域Id
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_

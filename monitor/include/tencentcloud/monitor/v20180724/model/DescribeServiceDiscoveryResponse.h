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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ServiceDiscoveryItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeServiceDiscovery返回参数结构体
                */
                class DescribeServiceDiscoveryResponse : public AbstractModel
                {
                public:
                    DescribeServiceDiscoveryResponse();
                    ~DescribeServiceDiscoveryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取返回服务发现列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDiscoverySet 返回服务发现列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceDiscoveryItem> GetServiceDiscoverySet() const;

                    /**
                     * 判断参数 ServiceDiscoverySet 是否已赋值
                     * @return ServiceDiscoverySet 是否已赋值
                     */
                    bool ServiceDiscoverySetHasBeenSet() const;

                private:

                    /**
                     * 返回服务发现列表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceDiscoveryItem> m_serviceDiscoverySet;
                    bool m_serviceDiscoverySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESERVICEDISCOVERYRESPONSE_H_

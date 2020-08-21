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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupAssociationStatistics请求参数结构体
                */
                class DescribeSecurityGroupAssociationStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupAssociationStatisticsRequest();
                    ~DescribeSecurityGroupAssociationStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @return SecurityGroupIds 安全实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @param SecurityGroupIds 安全实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 安全实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSREQUEST_H_

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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AttachResourcesTag请求参数结构体
                */
                class AttachResourcesTagRequest : public AbstractModel
                {
                public:
                    AttachResourcesTagRequest();
                    ~AttachResourcesTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源所属业务名称（资源六段式中的第三段）
                     * @return ServiceType 资源所属业务名称（资源六段式中的第三段）
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置资源所属业务名称（资源六段式中的第三段）
                     * @param ServiceType 资源所属业务名称（资源六段式中的第三段）
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取资源ID数组，资源个数最多为50
                     * @return ResourceIds 资源ID数组，资源个数最多为50
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID数组，资源个数最多为50
                     * @param ResourceIds 资源ID数组，资源个数最多为50
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取标签键
                     * @return TagKey 标签键
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键
                     * @param TagKey 标签键
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签值
                     * @return TagValue 标签值
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值
                     * @param TagValue 标签值
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取资源所在地域，不区分地域的资源不需要传入该字段，区分地域的资源必填
                     * @return ResourceRegion 资源所在地域，不区分地域的资源不需要传入该字段，区分地域的资源必填
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域，不区分地域的资源不需要传入该字段，区分地域的资源必填
                     * @param ResourceRegion 资源所在地域，不区分地域的资源不需要传入该字段，区分地域的资源必填
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源前缀（资源六段式中最后一段"/"前面的部分），cos存储桶不需要传入该字段，其他云资源必填
                     * @return ResourcePrefix 资源前缀（资源六段式中最后一段"/"前面的部分），cos存储桶不需要传入该字段，其他云资源必填
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀（资源六段式中最后一段"/"前面的部分），cos存储桶不需要传入该字段，其他云资源必填
                     * @param ResourcePrefix 资源前缀（资源六段式中最后一段"/"前面的部分），cos存储桶不需要传入该字段，其他云资源必填
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     */
                    bool ResourcePrefixHasBeenSet() const;

                private:

                    /**
                     * 资源所属业务名称（资源六段式中的第三段）
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 资源ID数组，资源个数最多为50
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 标签键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 资源所在地域，不区分地域的资源不需要传入该字段，区分地域的资源必填
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源前缀（资源六段式中最后一段"/"前面的部分），cos存储桶不需要传入该字段，其他云资源必填
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_ATTACHRESOURCESTAGREQUEST_H_

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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * TextModeration请求参数结构体
                */
                class TextModerationRequest : public AbstractModel
                {
                public:
                    TextModerationRequest();
                    ~TextModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     * @return Content 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     * @param Content 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     * @return BizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     * @param BizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取数据ID，英文字母、下划线、-组成，不超过64个字符
                     * @return DataId 数据ID，英文字母、下划线、-组成，不超过64个字符
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据ID，英文字母、下划线、-组成，不超过64个字符
                     * @param DataId 数据ID，英文字母、下划线、-组成，不超过64个字符
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取业务应用ID
                     * @return SdkAppId 业务应用ID
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置业务应用ID
                     * @param SdkAppId 业务应用ID
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 数据ID，英文字母、下划线、-组成，不超过64个字符
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 业务应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_

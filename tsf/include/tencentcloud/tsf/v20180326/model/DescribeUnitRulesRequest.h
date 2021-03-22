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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITRULESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeUnitRules请求参数结构体
                */
                class DescribeUnitRulesRequest : public AbstractModel
                {
                public:
                    DescribeUnitRulesRequest();
                    ~DescribeUnitRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实体ID
                     * @return GatewayInstanceId 网关实体ID
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实体ID
                     * @param GatewayInstanceId 网关实体ID
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                    /**
                     * 获取根据规则名或备注内容模糊查询
                     * @return SearchWord 根据规则名或备注内容模糊查询
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置根据规则名或备注内容模糊查询
                     * @param SearchWord 根据规则名或备注内容模糊查询
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取启用状态, disabled: 未发布， enabled: 发布
                     * @return Status 启用状态, disabled: 未发布， enabled: 发布
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置启用状态, disabled: 未发布， enabled: 发布
                     * @param Status 启用状态, disabled: 未发布， enabled: 发布
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取翻页查询偏移量
                     * @return Offset 翻页查询偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页查询偏移量
                     * @param Offset 翻页查询偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取翻页查询每页记录数
                     * @return Limit 翻页查询每页记录数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页查询每页记录数
                     * @param Limit 翻页查询每页记录数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 网关实体ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                    /**
                     * 根据规则名或备注内容模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 启用状态, disabled: 未发布， enabled: 发布
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 翻页查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页查询每页记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITRULESREQUEST_H_

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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Filter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeSREInstances请求参数结构体
                */
                class DescribeSREInstancesRequest : public AbstractModel
                {
                public:
                    DescribeSREInstancesRequest();
                    ~DescribeSREInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求过滤参数
                     * @return Filters 请求过滤参数
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置请求过滤参数
                     * @param Filters 请求过滤参数
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取翻页单页查询限制数量[0,1000], 默认值0
                     * @return Limit 翻页单页查询限制数量[0,1000], 默认值0
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页单页查询限制数量[0,1000], 默认值0
                     * @param Limit 翻页单页查询限制数量[0,1000], 默认值0
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页单页偏移量，默认值0
                     * @return Offset 翻页单页偏移量，默认值0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页单页偏移量，默认值0
                     * @param Offset 翻页单页偏移量，默认值0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 请求过滤参数
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 翻页单页查询限制数量[0,1000], 默认值0
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页单页偏移量，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBESREINSTANCESREQUEST_H_

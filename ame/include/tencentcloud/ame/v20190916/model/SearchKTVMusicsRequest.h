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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * SearchKTVMusics请求参数结构体
                */
                class SearchKTVMusicsRequest : public AbstractModel
                {
                public:
                    SearchKTVMusicsRequest();
                    ~SearchKTVMusicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键词
                     * @return KeyWord 搜索关键词
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索关键词
                     * @param KeyWord 搜索关键词
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取分页游标
                     * @return Offset 分页游标
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页游标
                     * @param Offset 分页游标
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页页长
                     * @return Limit 分页页长
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页页长
                     * @param Limit 分页页长
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 搜索关键词
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 分页游标
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页页长
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SEARCHKTVMUSICSREQUEST_H_

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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/DictInfo.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * DescribeDict返回参数结构体
                */
                class DescribeDictResponse : public AbstractModel
                {
                public:
                    DescribeDictResponse();
                    ~DescribeDictResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取查询到的词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dicts 查询到的词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> GetDicts() const;

                    /**
                     * 判断参数 Dicts 是否已赋值
                     * @return Dicts 是否已赋值
                     */
                    bool DictsHasBeenSet() const;

                private:

                    /**
                     * 查询到的词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_dicts;
                    bool m_dictsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTRESPONSE_H_

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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_KEYWORDSEXTRACTIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_KEYWORDSEXTRACTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/Keyword.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * KeywordsExtraction返回参数结构体
                */
                class KeywordsExtractionResponse : public AbstractModel
                {
                public:
                    KeywordsExtractionResponse();
                    ~KeywordsExtractionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取关键词提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 关键词提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Keyword> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 关键词提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Keyword> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_KEYWORDSEXTRACTIONRESPONSE_H_

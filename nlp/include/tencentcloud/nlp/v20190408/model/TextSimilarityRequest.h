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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextSimilarity请求参数结构体
                */
                class TextSimilarityRequest : public AbstractModel
                {
                public:
                    TextSimilarityRequest();
                    ~TextSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要与目标句子计算相似度的源句子（仅支持UTF-8格式，不超过500字符）
                     * @return SrcText 需要与目标句子计算相似度的源句子（仅支持UTF-8格式，不超过500字符）
                     */
                    std::string GetSrcText() const;

                    /**
                     * 设置需要与目标句子计算相似度的源句子（仅支持UTF-8格式，不超过500字符）
                     * @param SrcText 需要与目标句子计算相似度的源句子（仅支持UTF-8格式，不超过500字符）
                     */
                    void SetSrcText(const std::string& _srcText);

                    /**
                     * 判断参数 SrcText 是否已赋值
                     * @return SrcText 是否已赋值
                     */
                    bool SrcTextHasBeenSet() const;

                    /**
                     * 获取目标句子
                     * @return TargetText 目标句子
                     */
                    std::vector<std::string> GetTargetText() const;

                    /**
                     * 设置目标句子
                     * @param TargetText 目标句子
                     */
                    void SetTargetText(const std::vector<std::string>& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     */
                    bool TargetTextHasBeenSet() const;

                private:

                    /**
                     * 需要与目标句子计算相似度的源句子（仅支持UTF-8格式，不超过500字符）
                     */
                    std::string m_srcText;
                    bool m_srcTextHasBeenSet;

                    /**
                     * 目标句子
                     */
                    std::vector<std::string> m_targetText;
                    bool m_targetTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTSIMILARITYREQUEST_H_

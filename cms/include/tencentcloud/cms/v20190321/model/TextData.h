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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTDATA_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/TextOutputComm.h>
#include <tencentcloud/cms/v20190321/model/CustomResult.h>
#include <tencentcloud/cms/v20190321/model/DetailResult.h>
#include <tencentcloud/cms/v20190321/model/TextOutputID.h>
#include <tencentcloud/cms/v20190321/model/TextOutputRes.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 文本识别结果详情
                */
                class TextData : public AbstractModel
                {
                public:
                    TextData();
                    ~TextData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否恶意 0：正常 1：可疑
                     * @return EvilFlag 是否恶意 0：正常 1：可疑
                     */
                    int64_t GetEvilFlag() const;

                    /**
                     * 设置是否恶意 0：正常 1：可疑
                     * @param EvilFlag 是否恶意 0：正常 1：可疑
                     */
                    void SetEvilFlag(const int64_t& _evilFlag);

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * @return EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * @param EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取消息类公共相关参数
                     * @return Common 消息类公共相关参数
                     */
                    TextOutputComm GetCommon() const;

                    /**
                     * 设置消息类公共相关参数
                     * @param Common 消息类公共相关参数
                     */
                    void SetCommon(const TextOutputComm& _common);

                    /**
                     * 判断参数 Common 是否已赋值
                     * @return Common 是否已赋值
                     */
                    bool CommonHasBeenSet() const;

                    /**
                     * 获取返回的自定义词库结果
                     * @return CustomResult 返回的自定义词库结果
                     */
                    std::vector<CustomResult> GetCustomResult() const;

                    /**
                     * 设置返回的自定义词库结果
                     * @param CustomResult 返回的自定义词库结果
                     */
                    void SetCustomResult(const std::vector<CustomResult>& _customResult);

                    /**
                     * 判断参数 CustomResult 是否已赋值
                     * @return CustomResult 是否已赋值
                     */
                    bool CustomResultHasBeenSet() const;

                    /**
                     * 获取返回的详细结果
                     * @return DetailResult 返回的详细结果
                     */
                    std::vector<DetailResult> GetDetailResult() const;

                    /**
                     * 设置返回的详细结果
                     * @param DetailResult 返回的详细结果
                     */
                    void SetDetailResult(const std::vector<DetailResult>& _detailResult);

                    /**
                     * 判断参数 DetailResult 是否已赋值
                     * @return DetailResult 是否已赋值
                     */
                    bool DetailResultHasBeenSet() const;

                    /**
                     * 获取消息类ID信息
                     * @return ID 消息类ID信息
                     */
                    TextOutputID GetID() const;

                    /**
                     * 设置消息类ID信息
                     * @param ID 消息类ID信息
                     */
                    void SetID(const TextOutputID& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取消息类输出结果
                     * @return Res 消息类输出结果
                     */
                    TextOutputRes GetRes() const;

                    /**
                     * 设置消息类输出结果
                     * @param Res 消息类输出结果
                     */
                    void SetRes(const TextOutputRes& _res);

                    /**
                     * 判断参数 Res 是否已赋值
                     * @return Res 是否已赋值
                     */
                    bool ResHasBeenSet() const;

                    /**
                     * 获取最终使用的BizType
                     * @return BizType 最终使用的BizType
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置最终使用的BizType
                     * @param BizType 最终使用的BizType
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * @return EvilLabel 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    std::string GetEvilLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * @param EvilLabel 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    void SetEvilLabel(const std::string& _evilLabel);

                    /**
                     * 判断参数 EvilLabel 是否已赋值
                     * @return EvilLabel 是否已赋值
                     */
                    bool EvilLabelHasBeenSet() const;

                    /**
                     * 获取命中的关键词
                     * @return Keywords 命中的关键词
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置命中的关键词
                     * @param Keywords 命中的关键词
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取命中的模型分值
                     * @return Score 命中的模型分值
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置命中的模型分值
                     * @param Score 命中的模型分值
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取建议值,Block：打击,Review：待复审,Normal：正常
                     * @return Suggestion 建议值,Block：打击,Review：待复审,Normal：正常
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议值,Block：打击,Review：待复审,Normal：正常
                     * @param Suggestion 建议值,Block：打击,Review：待复审,Normal：正常
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * 是否恶意 0：正常 1：可疑
                     */
                    int64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 消息类公共相关参数
                     */
                    TextOutputComm m_common;
                    bool m_commonHasBeenSet;

                    /**
                     * 返回的自定义词库结果
                     */
                    std::vector<CustomResult> m_customResult;
                    bool m_customResultHasBeenSet;

                    /**
                     * 返回的详细结果
                     */
                    std::vector<DetailResult> m_detailResult;
                    bool m_detailResultHasBeenSet;

                    /**
                     * 消息类ID信息
                     */
                    TextOutputID m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 消息类输出结果
                     */
                    TextOutputRes m_res;
                    bool m_resHasBeenSet;

                    /**
                     * 最终使用的BizType
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    std::string m_evilLabel;
                    bool m_evilLabelHasBeenSet;

                    /**
                     * 命中的关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 命中的模型分值
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 建议值,Block：打击,Review：待复审,Normal：正常
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTDATA_H_

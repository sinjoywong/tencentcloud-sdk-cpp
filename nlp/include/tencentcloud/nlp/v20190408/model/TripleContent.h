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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TRIPLECONTENT_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TRIPLECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 三元组查询返回的元记录
                */
                class TripleContent : public AbstractModel
                {
                public:
                    TripleContent();
                    ~TripleContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体流行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Popular 实体流行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPopular() const;

                    /**
                     * 设置实体流行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Popular 实体流行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPopular(const int64_t& _popular);

                    /**
                     * 判断参数 Popular 是否已赋值
                     * @return Popular 是否已赋值
                     */
                    bool PopularHasBeenSet() const;

                    /**
                     * 获取实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实体order
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Order 实体order
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置实体order
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Order 实体order
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取实体id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 实体id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置实体id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 实体id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 实体流行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_popular;
                    bool m_popularHasBeenSet;

                    /**
                     * 实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实体order
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 实体id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TRIPLECONTENT_H_

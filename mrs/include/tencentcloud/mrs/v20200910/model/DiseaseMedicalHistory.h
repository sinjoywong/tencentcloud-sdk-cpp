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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEMEDICALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 疾病史
                */
                class DiseaseMedicalHistory : public AbstractModel
                {
                public:
                    DiseaseMedicalHistory();
                    ~DiseaseMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainDiseaseHistory 主病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMainDiseaseHistory() const;

                    /**
                     * 设置主病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MainDiseaseHistory 主病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMainDiseaseHistory(const std::string& _mainDiseaseHistory);

                    /**
                     * 判断参数 MainDiseaseHistory 是否已赋值
                     * @return MainDiseaseHistory 是否已赋值
                     */
                    bool MainDiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllergyHistory 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAllergyHistory() const;

                    /**
                     * 设置过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AllergyHistory 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAllergyHistory(const std::string& _allergyHistory);

                    /**
                     * 判断参数 AllergyHistory 是否已赋值
                     * @return AllergyHistory 是否已赋值
                     */
                    bool AllergyHistoryHasBeenSet() const;

                    /**
                     * 获取传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InfectHistory 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInfectHistory() const;

                    /**
                     * 设置传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InfectHistory 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInfectHistory(const std::string& _infectHistory);

                    /**
                     * 判断参数 InfectHistory 是否已赋值
                     * @return InfectHistory 是否已赋值
                     */
                    bool InfectHistoryHasBeenSet() const;

                    /**
                     * 获取手术史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationHistory 手术史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperationHistory() const;

                    /**
                     * 设置手术史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OperationHistory 手术史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperationHistory(const std::string& _operationHistory);

                    /**
                     * 判断参数 OperationHistory 是否已赋值
                     * @return OperationHistory 是否已赋值
                     */
                    bool OperationHistoryHasBeenSet() const;

                    /**
                     * 获取输血史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransfusionHistory 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransfusionHistory() const;

                    /**
                     * 设置输血史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransfusionHistory 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransfusionHistory(const std::string& _transfusionHistory);

                    /**
                     * 判断参数 TransfusionHistory 是否已赋值
                     * @return TransfusionHistory 是否已赋值
                     */
                    bool TransfusionHistoryHasBeenSet() const;

                private:

                    /**
                     * 主病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainDiseaseHistory;
                    bool m_mainDiseaseHistoryHasBeenSet;

                    /**
                     * 过敏史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allergyHistory;
                    bool m_allergyHistoryHasBeenSet;

                    /**
                     * 传染疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_infectHistory;
                    bool m_infectHistoryHasBeenSet;

                    /**
                     * 手术史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operationHistory;
                    bool m_operationHistoryHasBeenSet;

                    /**
                     * 输血史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transfusionHistory;
                    bool m_transfusionHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DISEASEMEDICALHISTORY_H_

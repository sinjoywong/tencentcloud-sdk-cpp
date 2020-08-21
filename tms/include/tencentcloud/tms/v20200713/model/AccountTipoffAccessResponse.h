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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSRESPONSE_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20200713/model/TipoffResponse.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * AccountTipoffAccess返回参数结构体
                */
                class AccountTipoffAccessResponse : public AbstractModel
                {
                public:
                    AccountTipoffAccessResponse();
                    ~AccountTipoffAccessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取举报接口响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 举报接口响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TipoffResponse GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 举报接口响应数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TipoffResponse m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_ACCOUNTTIPOFFACCESSRESPONSE_H_

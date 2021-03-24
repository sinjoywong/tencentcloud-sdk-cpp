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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * MobileNetworkTimeVerification请求参数结构体
                */
                class MobileNetworkTimeVerificationRequest : public AbstractModel
                {
                public:
                    MobileNetworkTimeVerificationRequest();
                    ~MobileNetworkTimeVerificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取手机号码
                     * @return Mobile 手机号码
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号码
                     * @param Mobile 手机号码
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。对传入信息（手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。对传入信息（手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。对传入信息（手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param Encryption 敏感数据加密信息。对传入信息（手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 手机号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 敏感数据加密信息。对传入信息（手机号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONREQUEST_H_

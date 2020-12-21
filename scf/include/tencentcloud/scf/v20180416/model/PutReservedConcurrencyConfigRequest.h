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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PutReservedConcurrencyConfig请求参数结构体
                */
                class PutReservedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutReservedConcurrencyConfigRequest();
                    ~PutReservedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要设置预置并发的函数的名称
                     * @return FunctionName 需要设置预置并发的函数的名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置需要设置预置并发的函数的名称
                     * @param FunctionName 需要设置预置并发的函数的名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数保留并发内存，注：函数的保留并发内存总和上限：用户总并发内存配额 - 12800
                     * @return ReservedConcurrencyMem 函数保留并发内存，注：函数的保留并发内存总和上限：用户总并发内存配额 - 12800
                     */
                    uint64_t GetReservedConcurrencyMem() const;

                    /**
                     * 设置函数保留并发内存，注：函数的保留并发内存总和上限：用户总并发内存配额 - 12800
                     * @param ReservedConcurrencyMem 函数保留并发内存，注：函数的保留并发内存总和上限：用户总并发内存配额 - 12800
                     */
                    void SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem);

                    /**
                     * 判断参数 ReservedConcurrencyMem 是否已赋值
                     * @return ReservedConcurrencyMem 是否已赋值
                     */
                    bool ReservedConcurrencyMemHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间，默认为default
                     * @return Namespace 函数所属命名空间，默认为default
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间，默认为default
                     * @param Namespace 函数所属命名空间，默认为default
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 需要设置预置并发的函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数保留并发内存，注：函数的保留并发内存总和上限：用户总并发内存配额 - 12800
                     */
                    uint64_t m_reservedConcurrencyMem;
                    bool m_reservedConcurrencyMemHasBeenSet;

                    /**
                     * 函数所属命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTRESERVEDCONCURRENCYCONFIGREQUEST_H_

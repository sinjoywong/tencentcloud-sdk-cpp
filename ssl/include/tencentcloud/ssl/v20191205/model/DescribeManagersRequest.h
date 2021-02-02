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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeManagers请求参数结构体
                */
                class DescribeManagersRequest : public AbstractModel
                {
                public:
                    DescribeManagersRequest();
                    ~DescribeManagersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param CompanyId 公司ID
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param Offset 分页偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页每页数量
                     * @return Limit 分页每页数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页数量
                     * @param Limit 分页每页数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取管理人姓名
                     * @return ManagerName 管理人姓名
                     */
                    std::string GetManagerName() const;

                    /**
                     * 设置管理人姓名
                     * @param ManagerName 管理人姓名
                     */
                    void SetManagerName(const std::string& _managerName);

                    /**
                     * 判断参数 ManagerName 是否已赋值
                     * @return ManagerName 是否已赋值
                     */
                    bool ManagerNameHasBeenSet() const;

                    /**
                     * 获取模糊查询管理人邮箱
                     * @return ManagerMail 模糊查询管理人邮箱
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 设置模糊查询管理人邮箱
                     * @param ManagerMail 模糊查询管理人邮箱
                     */
                    void SetManagerMail(const std::string& _managerMail);

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * @return Status 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * @param Status 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 公司ID
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 管理人姓名
                     */
                    std::string m_managerName;
                    bool m_managerNameHasBeenSet;

                    /**
                     * 模糊查询管理人邮箱
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_

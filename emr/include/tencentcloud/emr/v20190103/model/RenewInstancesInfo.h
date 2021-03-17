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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RENEWINSTANCESINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RENEWINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群续费实例信息
                */
                class RenewInstancesInfo : public AbstractModel
                {
                public:
                    RenewInstancesInfo();
                    ~RenewInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点资源ID
                     * @return EmrResourceId 节点资源ID
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置节点资源ID
                     * @param EmrResourceId 节点资源ID
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * @return Flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     */
                    int64_t GetFlag() const;

                    /**
                     * 设置节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     * @param Flag 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     */
                    void SetFlag(const int64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return Ip 内网IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置内网IP
                     * @param Ip 内网IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取节点内存描述
                     * @return MemDesc 节点内存描述
                     */
                    std::string GetMemDesc() const;

                    /**
                     * 设置节点内存描述
                     * @param MemDesc 节点内存描述
                     */
                    void SetMemDesc(const std::string& _memDesc);

                    /**
                     * 判断参数 MemDesc 是否已赋值
                     * @return MemDesc 是否已赋值
                     */
                    bool MemDescHasBeenSet() const;

                    /**
                     * 获取节点核数
                     * @return CpuNum 节点核数
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置节点核数
                     * @param CpuNum 节点核数
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取硬盘大小
                     * @return DiskSize 硬盘大小
                     */
                    std::string GetDiskSize() const;

                    /**
                     * 设置硬盘大小
                     * @param DiskSize 硬盘大小
                     */
                    void SetDiskSize(const std::string& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param ExpireTime 过期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取节点规格
                     * @return Spec 节点规格
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置节点规格
                     * @param Spec 节点规格
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取磁盘类型
                     * @return StorageType 磁盘类型
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置磁盘类型
                     * @param StorageType 磁盘类型
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * 节点资源ID
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * 节点类型。0:common节点；1:master节点
；2:core节点；3:task节点
                     */
                    int64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点内存描述
                     */
                    std::string m_memDesc;
                    bool m_memDescHasBeenSet;

                    /**
                     * 节点核数
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 硬盘大小
                     */
                    std::string m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 节点规格
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RENEWINSTANCESINFO_H_

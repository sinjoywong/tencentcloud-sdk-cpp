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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunNfsVolumeSource.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunEmptyDirVolumeSource.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 服务的volume
                */
                class CloudRunServiceVolume : public AbstractModel
                {
                public:
                    CloudRunServiceVolume();
                    ~CloudRunServiceVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取NFS的挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NFS NFS的挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudBaseRunNfsVolumeSource GetNFS() const;

                    /**
                     * 设置NFS的挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NFS NFS的挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNFS(const CloudBaseRunNfsVolumeSource& _nFS);

                    /**
                     * 判断参数 NFS 是否已赋值
                     * @return NFS 是否已赋值
                     */
                    bool NFSHasBeenSet() const;

                    /**
                     * 获取secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretName secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecretName secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取是否开启临时目录逐步废弃，请使用 EmptyDir
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableEmptyDirVolume 是否开启临时目录逐步废弃，请使用 EmptyDir
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableEmptyDirVolume() const;

                    /**
                     * 设置是否开启临时目录逐步废弃，请使用 EmptyDir
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableEmptyDirVolume 是否开启临时目录逐步废弃，请使用 EmptyDir
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableEmptyDirVolume(const bool& _enableEmptyDirVolume);

                    /**
                     * 判断参数 EnableEmptyDirVolume 是否已赋值
                     * @return EnableEmptyDirVolume 是否已赋值
                     */
                    bool EnableEmptyDirVolumeHasBeenSet() const;

                    /**
                     * 获取emptydir数据卷详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmptyDir emptydir数据卷详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudBaseRunEmptyDirVolumeSource GetEmptyDir() const;

                    /**
                     * 设置emptydir数据卷详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EmptyDir emptydir数据卷详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEmptyDir(const CloudBaseRunEmptyDirVolumeSource& _emptyDir);

                    /**
                     * 判断参数 EmptyDir 是否已赋值
                     * @return EmptyDir 是否已赋值
                     */
                    bool EmptyDirHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * NFS的挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudBaseRunNfsVolumeSource m_nFS;
                    bool m_nFSHasBeenSet;

                    /**
                     * secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 是否开启临时目录逐步废弃，请使用 EmptyDir
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableEmptyDirVolume;
                    bool m_enableEmptyDirVolumeHasBeenSet;

                    /**
                     * emptydir数据卷详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudBaseRunEmptyDirVolumeSource m_emptyDir;
                    bool m_emptyDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDRUNSERVICEVOLUME_H_

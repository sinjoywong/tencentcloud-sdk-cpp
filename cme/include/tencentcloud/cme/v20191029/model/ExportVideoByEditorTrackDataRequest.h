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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/CMEExportInfo.h>
#include <tencentcloud/cme/v20191029/model/VODExportInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ExportVideoByEditorTrackData请求参数结构体
                */
                class ExportVideoByEditorTrackDataRequest : public AbstractModel
                {
                public:
                    ExportVideoByEditorTrackDataRequest();
                    ~ExportVideoByEditorTrackDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @return Definition 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     * @param Definition 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取导出目标。
<li>CME：云剪，即导出为云剪素材；</li>
<li>VOD：云点播，即导出为云点播媒资。</li>
                     * @return ExportDestination 导出目标。
<li>CME：云剪，即导出为云剪素材；</li>
<li>VOD：云点播，即导出为云点播媒资。</li>
                     */
                    std::string GetExportDestination() const;

                    /**
                     * 设置导出目标。
<li>CME：云剪，即导出为云剪素材；</li>
<li>VOD：云点播，即导出为云点播媒资。</li>
                     * @param ExportDestination 导出目标。
<li>CME：云剪，即导出为云剪素材；</li>
<li>VOD：云点播，即导出为云点播媒资。</li>
                     */
                    void SetExportDestination(const std::string& _exportDestination);

                    /**
                     * 判断参数 ExportDestination 是否已赋值
                     * @return ExportDestination 是否已赋值
                     */
                    bool ExportDestinationHasBeenSet() const;

                    /**
                     * 获取在线编辑轨道数据。轨道数据相关介绍，请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。
                     * @return TrackData 在线编辑轨道数据。轨道数据相关介绍，请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。
                     */
                    std::string GetTrackData() const;

                    /**
                     * 设置在线编辑轨道数据。轨道数据相关介绍，请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。
                     * @param TrackData 在线编辑轨道数据。轨道数据相关介绍，请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。
                     */
                    void SetTrackData(const std::string& _trackData);

                    /**
                     * 判断参数 TrackData 是否已赋值
                     * @return TrackData 是否已赋值
                     */
                    bool TrackDataHasBeenSet() const;

                    /**
                     * 获取导出的云剪素材信息。指定 ExportDestination = CME 时有效。
                     * @return CMEExportInfo 导出的云剪素材信息。指定 ExportDestination = CME 时有效。
                     */
                    CMEExportInfo GetCMEExportInfo() const;

                    /**
                     * 设置导出的云剪素材信息。指定 ExportDestination = CME 时有效。
                     * @param CMEExportInfo 导出的云剪素材信息。指定 ExportDestination = CME 时有效。
                     */
                    void SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo);

                    /**
                     * 判断参数 CMEExportInfo 是否已赋值
                     * @return CMEExportInfo 是否已赋值
                     */
                    bool CMEExportInfoHasBeenSet() const;

                    /**
                     * 获取导出的云点播媒资信息。指定 ExportDestination = VOD 时有效。
                     * @return VODExportInfo 导出的云点播媒资信息。指定 ExportDestination = VOD 时有效。
                     */
                    VODExportInfo GetVODExportInfo() const;

                    /**
                     * 设置导出的云点播媒资信息。指定 ExportDestination = VOD 时有效。
                     * @param VODExportInfo 导出的云点播媒资信息。指定 ExportDestination = VOD 时有效。
                     */
                    void SetVODExportInfo(const VODExportInfo& _vODExportInfo);

                    /**
                     * 判断参数 VODExportInfo 是否已赋值
                     * @return VODExportInfo 是否已赋值
                     */
                    bool VODExportInfoHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验导出操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验导出操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验导出操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验导出操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 导出模板 Id，目前不支持自定义创建，只支持下面的预置模板 Id。
<li>10：分辨率为 480P，输出视频格式为 MP4；</li>
<li>11：分辨率为 720P，输出视频格式为 MP4；</li>
<li>12：分辨率为 1080P，输出视频格式为 MP4。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 导出目标。
<li>CME：云剪，即导出为云剪素材；</li>
<li>VOD：云点播，即导出为云点播媒资。</li>
                     */
                    std::string m_exportDestination;
                    bool m_exportDestinationHasBeenSet;

                    /**
                     * 在线编辑轨道数据。轨道数据相关介绍，请查看 [视频合成协议](https://cloud.tencent.com/document/product/1156/51225)。
                     */
                    std::string m_trackData;
                    bool m_trackDataHasBeenSet;

                    /**
                     * 导出的云剪素材信息。指定 ExportDestination = CME 时有效。
                     */
                    CMEExportInfo m_cMEExportInfo;
                    bool m_cMEExportInfoHasBeenSet;

                    /**
                     * 导出的云点播媒资信息。指定 ExportDestination = VOD 时有效。
                     */
                    VODExportInfo m_vODExportInfo;
                    bool m_vODExportInfoHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验导出操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXPORTVIDEOBYEDITORTRACKDATAREQUEST_H_

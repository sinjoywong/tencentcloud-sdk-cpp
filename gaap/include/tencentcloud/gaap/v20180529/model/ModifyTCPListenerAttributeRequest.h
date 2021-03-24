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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyTCPListenerAttribute请求参数结构体
                */
                class ModifyTCPListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTCPListenerAttributeRequest();
                    ~ModifyTCPListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param ListenerId 监听器ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @return GroupId 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @param GroupId 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @return ProxyId 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @param ProxyId 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param ListenerName 监听器名称
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     * @return Scheduler 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     * @param Scheduler 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @return DelayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @param DelayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @return ConnectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @param ConnectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取是否开启健康检查，1开启，0关闭。
                     * @return HealthCheck 是否开启健康检查，1开启，0关闭。
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置是否开启健康检查，1开启，0关闭。
                     * @param HealthCheck 是否开启健康检查，1开启，0关闭。
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * @return FailoverSwitch 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     */
                    uint64_t GetFailoverSwitch() const;

                    /**
                     * 设置源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     * @param FailoverSwitch 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     */
                    void SetFailoverSwitch(const uint64_t& _failoverSwitch);

                    /**
                     * 判断参数 FailoverSwitch 是否已赋值
                     * @return FailoverSwitch 是否已赋值
                     */
                    bool FailoverSwitchHasBeenSet() const;

                private:

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 是否开启健康检查，1开启，0关闭。
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 源站是否开启主备模式：1开启，0关闭，DOMAIN类型源站不支持开启
                     */
                    uint64_t m_failoverSwitch;
                    bool m_failoverSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYTCPLISTENERATTRIBUTEREQUEST_H_

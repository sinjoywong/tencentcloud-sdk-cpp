#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tcr_public_header
  include/tencentcloud/tcr/v20190924/TcrClient.h
  )

set(tcr_public_header_model
  include/tencentcloud/tcr/v20190924/model/DuplicateImagePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ManageExternalEndpointRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImagePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/WebhookTarget.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h
  include/tencentcloud/tcr/v20190924/model/WebhookTriggerLog.h
  include/tencentcloud/tcr/v20190924/model/AccessVpc.h
  include/tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryResponse.h
  include/tencentcloud/tcr/v20190924/model/TriggerInvokePara.h
  include/tencentcloud/tcr/v20190924/model/DescribeNamespacesResponse.h
  include/tencentcloud/tcr/v20190924/model/TriggerLogResp.h
  include/tencentcloud/tcr/v20190924/model/DownloadHelmChartRequest.h
  include/tencentcloud/tcr/v20190924/model/RetentionRule.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteInstanceTokenRequest.h
  include/tencentcloud/tcr/v20190924/model/TaskDetail.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryRequest.h
  include/tencentcloud/tcr/v20190924/model/RegistryCondition.h
  include/tencentcloud/tcr/v20190924/model/DescribeInternalEndpointDnsStatusRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/AutoDelStrategyInfo.h
  include/tencentcloud/tcr/v20190924/model/DeleteInternalEndpointDnsRequest.h
  include/tencentcloud/tcr/v20190924/model/ValidateNamespaceExistPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/RegistryChargePrepaid.h
  include/tencentcloud/tcr/v20190924/model/RenewInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/Registry.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoriesResponse.h
  include/tencentcloud/tcr/v20190924/model/VpcAndDomainInfo.h
  include/tencentcloud/tcr/v20190924/model/DeleteInstanceTokenResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstancesResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyInstanceTokenResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/FavorResp.h
  include/tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/NamespaceInfo.h
  include/tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleResponse.h
  include/tencentcloud/tcr/v20190924/model/Limit.h
  include/tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteRepositoryResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteImagePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DownloadHelmChartResponse.h
  include/tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h
  include/tencentcloud/tcr/v20190924/model/Tag.h
  include/tencentcloud/tcr/v20190924/model/DupImageTagResp.h
  include/tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryFilterPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/AutoDelStrategyInfoResp.h
  include/tencentcloud/tcr/v20190924/model/TriggerResp.h
  include/tencentcloud/tcr/v20190924/model/DeleteApplicationTriggerPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/SearchUserRepositoryResp.h
  include/tencentcloud/tcr/v20190924/model/CreateTagRetentionRuleRequest.h
  include/tencentcloud/tcr/v20190924/model/DuplicateImagePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageLifecyclePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyInstanceTokenRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageLifecyclePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateNamespaceResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryOwnerPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/VpcPrivateDomainStatus.h
  include/tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateImageLifecyclePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/RepoIsExistResp.h
  include/tencentcloud/tcr/v20190924/model/TcrImageInfo.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageLifecycleGlobalPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateNamespacePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageLifecycleGlobalPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstanceStatusRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstanceStatusResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteNamespaceResponse.h
  include/tencentcloud/tcr/v20190924/model/TagInfoResp.h
  include/tencentcloud/tcr/v20190924/model/Favors.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoriesRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageFilterPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyNamespaceResponse.h
  include/tencentcloud/tcr/v20190924/model/ValidateRepositoryExistPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyUserPasswordPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/TcrNamespaceInfo.h
  include/tencentcloud/tcr/v20190924/model/DescribeImagesResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryInfoPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogRequest.h
  include/tencentcloud/tcr/v20190924/model/RenewInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateUserPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionTaskRequest.h
  include/tencentcloud/tcr/v20190924/model/ReplicationRule.h
  include/tencentcloud/tcr/v20190924/model/RepoInfoResp.h
  include/tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeInternalEndpointDnsStatusResponse.h
  include/tencentcloud/tcr/v20190924/model/RegistryStatus.h
  include/tencentcloud/tcr/v20190924/model/SecurityPolicy.h
  include/tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalResp.h
  include/tencentcloud/tcr/v20190924/model/DeleteImagePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/RetentionTask.h
  include/tencentcloud/tcr/v20190924/model/NamespaceInfoResp.h
  include/tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageFilterPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateImageLifecyclePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteWebhookTriggerRequest.h
  include/tencentcloud/tcr/v20190924/model/TriggerInvokeResult.h
  include/tencentcloud/tcr/v20190924/model/CreateUserPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageManifestsRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyNamespaceRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryAccessPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/TagSpecification.h
  include/tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeNamespacesRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageLifecycleGlobalPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageLifecyclePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/RepositoryInfoResp.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstanceTokenRequest.h
  include/tencentcloud/tcr/v20190924/model/BatchDeleteRepositoryPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateNamespaceRequest.h
  include/tencentcloud/tcr/v20190924/model/BatchDeleteRepositoryPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/TriggerInvokeCondition.h
  include/tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoRequest.h
  include/tencentcloud/tcr/v20190924/model/ValidateRepositoryExistPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeExternalEndpointStatusResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifySecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/NamespaceIsExistsResp.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstancesRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateInternalEndpointDnsRequest.h
  include/tencentcloud/tcr/v20190924/model/Filter.h
  include/tencentcloud/tcr/v20190924/model/RetentionExecution.h
  include/tencentcloud/tcr/v20190924/model/ManageReplicationResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyWebhookTriggerResponse.h
  include/tencentcloud/tcr/v20190924/model/RepoInfo.h
  include/tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeUserQuotaPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeImagePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifySecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageLifecyclePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImageManifestsResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeNamespacePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteNamespacePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/Header.h
  include/tencentcloud/tcr/v20190924/model/RetentionPolicy.h
  include/tencentcloud/tcr/v20190924/model/CreateSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateWebhookTriggerRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryOwnerPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryInfoPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerLogPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/ManageInternalEndpointResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateRepositoryPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeRepositoryFilterPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeFavorRepositoryPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/CheckInstanceNameResponse.h
  include/tencentcloud/tcr/v20190924/model/ManageImageLifecycleGlobalPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyRepositoryAccessPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/ManageExternalEndpointResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyApplicationTriggerPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateReplicationInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyUserPasswordPersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeSecurityPoliciesRequest.h
  include/tencentcloud/tcr/v20190924/model/ReplicationRegistry.h
  include/tencentcloud/tcr/v20190924/model/DescribeInternalEndpointsRequest.h
  include/tencentcloud/tcr/v20190924/model/ValidateNamespaceExistPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerLogResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeApplicationTriggerPersonalResp.h
  include/tencentcloud/tcr/v20190924/model/TagInfo.h
  include/tencentcloud/tcr/v20190924/model/CreateRepositoryRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteImageResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeWebhookTriggerRequest.h
  include/tencentcloud/tcr/v20190924/model/DeleteNamespaceRequest.h
  include/tencentcloud/tcr/v20190924/model/BatchDeleteImagePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImagesRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyTagRetentionRuleResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateRepositoryResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionRulesRequest.h
  include/tencentcloud/tcr/v20190924/model/RespLimit.h
  include/tencentcloud/tcr/v20190924/model/CheckInstanceNameRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeInstanceTokenResponse.h
  include/tencentcloud/tcr/v20190924/model/SameImagesResp.h
  include/tencentcloud/tcr/v20190924/model/DescribeTagRetentionExecutionResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateNamespacePersonalRequest.h
  include/tencentcloud/tcr/v20190924/model/WebhookTrigger.h
  include/tencentcloud/tcr/v20190924/model/CreateWebhookTriggerResponse.h
  include/tencentcloud/tcr/v20190924/model/ReplicationFilter.h
  include/tencentcloud/tcr/v20190924/model/DeleteTagRetentionRuleRequest.h
  include/tencentcloud/tcr/v20190924/model/TcrRepositoryInfo.h
  include/tencentcloud/tcr/v20190924/model/TcrInstanceToken.h
  include/tencentcloud/tcr/v20190924/model/DeleteRepositoryRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateInternalEndpointDnsResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateTagRetentionExecutionRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateApplicationTriggerPersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/ManageInternalEndpointRequest.h
  include/tencentcloud/tcr/v20190924/model/BatchDeleteImagePersonalResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteInternalEndpointDnsResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteRepositoryPersonalRequest.h
  )

set(tcr_src
  src/v20190924/TcrClient.cpp
  src/v20190924/model/DuplicateImagePersonalRequest.cpp
  src/v20190924/model/ManageExternalEndpointRequest.cpp
  src/v20190924/model/DescribeImagePersonalResponse.cpp
  src/v20190924/model/DescribeUserQuotaPersonalRequest.cpp
  src/v20190924/model/WebhookTarget.cpp
  src/v20190924/model/DescribeReplicationInstancesResponse.cpp
  src/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.cpp
  src/v20190924/model/WebhookTriggerLog.cpp
  src/v20190924/model/AccessVpc.cpp
  src/v20190924/model/ModifyTagRetentionRuleRequest.cpp
  src/v20190924/model/ModifyRepositoryResponse.cpp
  src/v20190924/model/TriggerInvokePara.cpp
  src/v20190924/model/DescribeNamespacesResponse.cpp
  src/v20190924/model/TriggerLogResp.cpp
  src/v20190924/model/DownloadHelmChartRequest.cpp
  src/v20190924/model/RetentionRule.cpp
  src/v20190924/model/CreateInstanceResponse.cpp
  src/v20190924/model/DeleteInstanceTokenRequest.cpp
  src/v20190924/model/TaskDetail.cpp
  src/v20190924/model/ModifyRepositoryRequest.cpp
  src/v20190924/model/RegistryCondition.cpp
  src/v20190924/model/DescribeInternalEndpointDnsStatusRequest.cpp
  src/v20190924/model/CreateApplicationTriggerPersonalRequest.cpp
  src/v20190924/model/AutoDelStrategyInfo.cpp
  src/v20190924/model/DeleteInternalEndpointDnsRequest.cpp
  src/v20190924/model/ValidateNamespaceExistPersonalRequest.cpp
  src/v20190924/model/RegistryChargePrepaid.cpp
  src/v20190924/model/RenewInstanceResponse.cpp
  src/v20190924/model/Registry.cpp
  src/v20190924/model/DescribeRepositoriesResponse.cpp
  src/v20190924/model/VpcAndDomainInfo.cpp
  src/v20190924/model/DeleteInstanceTokenResponse.cpp
  src/v20190924/model/DescribeInstancesResponse.cpp
  src/v20190924/model/CreateReplicationInstanceRequest.cpp
  src/v20190924/model/ModifyInstanceTokenResponse.cpp
  src/v20190924/model/DescribeApplicationTriggerPersonalRequest.cpp
  src/v20190924/model/FavorResp.cpp
  src/v20190924/model/DeleteNamespacePersonalRequest.cpp
  src/v20190924/model/NamespaceInfo.cpp
  src/v20190924/model/CreateMultipleSecurityPolicyResponse.cpp
  src/v20190924/model/CreateTagRetentionRuleResponse.cpp
  src/v20190924/model/Limit.cpp
  src/v20190924/model/DescribeChartDownloadInfoResponse.cpp
  src/v20190924/model/DescribeExternalEndpointStatusRequest.cpp
  src/v20190924/model/DeleteRepositoryResponse.cpp
  src/v20190924/model/DeleteImagePersonalResponse.cpp
  src/v20190924/model/DownloadHelmChartResponse.cpp
  src/v20190924/model/ManageReplicationRequest.cpp
  src/v20190924/model/DeleteWebhookTriggerResponse.cpp
  src/v20190924/model/DeleteImageLifecycleGlobalPersonalResponse.cpp
  src/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.cpp
  src/v20190924/model/Tag.cpp
  src/v20190924/model/DupImageTagResp.cpp
  src/v20190924/model/DeleteApplicationTriggerPersonalResponse.cpp
  src/v20190924/model/DescribeRepositoryFilterPersonalRequest.cpp
  src/v20190924/model/DescribeTagRetentionExecutionTaskResponse.cpp
  src/v20190924/model/DescribeInternalEndpointsResponse.cpp
  src/v20190924/model/DescribeRepositoryPersonalRequest.cpp
  src/v20190924/model/AutoDelStrategyInfoResp.cpp
  src/v20190924/model/TriggerResp.cpp
  src/v20190924/model/DeleteApplicationTriggerPersonalRequest.cpp
  src/v20190924/model/SearchUserRepositoryResp.cpp
  src/v20190924/model/CreateTagRetentionRuleRequest.cpp
  src/v20190924/model/DuplicateImagePersonalResponse.cpp
  src/v20190924/model/DescribeImageLifecyclePersonalResponse.cpp
  src/v20190924/model/ModifyInstanceTokenRequest.cpp
  src/v20190924/model/DeleteImageLifecyclePersonalResponse.cpp
  src/v20190924/model/CreateNamespaceResponse.cpp
  src/v20190924/model/DescribeRepositoryOwnerPersonalResponse.cpp
  src/v20190924/model/VpcPrivateDomainStatus.cpp
  src/v20190924/model/DescribeSecurityPoliciesResponse.cpp
  src/v20190924/model/DescribeReplicationInstancesRequest.cpp
  src/v20190924/model/CreateImageLifecyclePersonalResponse.cpp
  src/v20190924/model/RepoIsExistResp.cpp
  src/v20190924/model/TcrImageInfo.cpp
  src/v20190924/model/DescribeImageLifecycleGlobalPersonalResponse.cpp
  src/v20190924/model/CreateNamespacePersonalResponse.cpp
  src/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.cpp
  src/v20190924/model/DeleteInstanceResponse.cpp
  src/v20190924/model/DeleteImageLifecycleGlobalPersonalRequest.cpp
  src/v20190924/model/DescribeInstanceStatusRequest.cpp
  src/v20190924/model/ModifyWebhookTriggerRequest.cpp
  src/v20190924/model/DescribeInstanceStatusResponse.cpp
  src/v20190924/model/DeleteNamespaceResponse.cpp
  src/v20190924/model/TagInfoResp.cpp
  src/v20190924/model/Favors.cpp
  src/v20190924/model/DescribeRepositoryPersonalResponse.cpp
  src/v20190924/model/CreateSecurityPolicyResponse.cpp
  src/v20190924/model/DescribeRepositoriesRequest.cpp
  src/v20190924/model/DescribeImageFilterPersonalRequest.cpp
  src/v20190924/model/ModifyNamespaceResponse.cpp
  src/v20190924/model/ValidateRepositoryExistPersonalRequest.cpp
  src/v20190924/model/ModifyUserPasswordPersonalResponse.cpp
  src/v20190924/model/TcrNamespaceInfo.cpp
  src/v20190924/model/DescribeImagesResponse.cpp
  src/v20190924/model/ModifyRepositoryInfoPersonalResponse.cpp
  src/v20190924/model/DescribeWebhookTriggerLogRequest.cpp
  src/v20190924/model/RenewInstanceRequest.cpp
  src/v20190924/model/CreateUserPersonalRequest.cpp
  src/v20190924/model/DescribeTagRetentionExecutionTaskRequest.cpp
  src/v20190924/model/ReplicationRule.cpp
  src/v20190924/model/RepoInfoResp.cpp
  src/v20190924/model/DeleteTagRetentionRuleResponse.cpp
  src/v20190924/model/DeleteMultipleSecurityPolicyRequest.cpp
  src/v20190924/model/DeleteSecurityPolicyResponse.cpp
  src/v20190924/model/DescribeInternalEndpointDnsStatusResponse.cpp
  src/v20190924/model/RegistryStatus.cpp
  src/v20190924/model/SecurityPolicy.cpp
  src/v20190924/model/DescribeNamespacePersonalRequest.cpp
  src/v20190924/model/DeleteRepositoryPersonalResponse.cpp
  src/v20190924/model/CreateInstanceTokenResponse.cpp
  src/v20190924/model/DescribeApplicationTriggerLogPersonalResp.cpp
  src/v20190924/model/DeleteImagePersonalRequest.cpp
  src/v20190924/model/DescribeApplicationTriggerPersonalResponse.cpp
  src/v20190924/model/RetentionTask.cpp
  src/v20190924/model/NamespaceInfoResp.cpp
  src/v20190924/model/CreateRepositoryPersonalRequest.cpp
  src/v20190924/model/DescribeImageFilterPersonalResponse.cpp
  src/v20190924/model/CreateImageLifecyclePersonalRequest.cpp
  src/v20190924/model/DeleteWebhookTriggerRequest.cpp
  src/v20190924/model/TriggerInvokeResult.cpp
  src/v20190924/model/CreateUserPersonalResponse.cpp
  src/v20190924/model/DescribeWebhookTriggerResponse.cpp
  src/v20190924/model/DescribeImageManifestsRequest.cpp
  src/v20190924/model/ModifyNamespaceRequest.cpp
  src/v20190924/model/DeleteImageRequest.cpp
  src/v20190924/model/ModifyRepositoryAccessPersonalRequest.cpp
  src/v20190924/model/TagSpecification.cpp
  src/v20190924/model/CreateMultipleSecurityPolicyRequest.cpp
  src/v20190924/model/DescribeNamespacesRequest.cpp
  src/v20190924/model/DescribeImageLifecycleGlobalPersonalRequest.cpp
  src/v20190924/model/DescribeImageLifecyclePersonalRequest.cpp
  src/v20190924/model/DeleteSecurityPolicyRequest.cpp
  src/v20190924/model/RepositoryInfoResp.cpp
  src/v20190924/model/CreateInstanceRequest.cpp
  src/v20190924/model/DescribeInstanceTokenRequest.cpp
  src/v20190924/model/BatchDeleteRepositoryPersonalResponse.cpp
  src/v20190924/model/CreateNamespaceRequest.cpp
  src/v20190924/model/BatchDeleteRepositoryPersonalRequest.cpp
  src/v20190924/model/TriggerInvokeCondition.cpp
  src/v20190924/model/DescribeChartDownloadInfoRequest.cpp
  src/v20190924/model/ValidateRepositoryExistPersonalResponse.cpp
  src/v20190924/model/DescribeExternalEndpointStatusResponse.cpp
  src/v20190924/model/ModifySecurityPolicyRequest.cpp
  src/v20190924/model/NamespaceIsExistsResp.cpp
  src/v20190924/model/DescribeInstancesRequest.cpp
  src/v20190924/model/CreateInternalEndpointDnsRequest.cpp
  src/v20190924/model/Filter.cpp
  src/v20190924/model/RetentionExecution.cpp
  src/v20190924/model/ManageReplicationResponse.cpp
  src/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.cpp
  src/v20190924/model/ModifyWebhookTriggerResponse.cpp
  src/v20190924/model/RepoInfo.cpp
  src/v20190924/model/ManageImageLifecycleGlobalPersonalRequest.cpp
  src/v20190924/model/DescribeUserQuotaPersonalResponse.cpp
  src/v20190924/model/DescribeImagePersonalRequest.cpp
  src/v20190924/model/ModifySecurityPolicyResponse.cpp
  src/v20190924/model/DeleteImageLifecyclePersonalRequest.cpp
  src/v20190924/model/ModifyApplicationTriggerPersonalResponse.cpp
  src/v20190924/model/DeleteInstanceRequest.cpp
  src/v20190924/model/DescribeImageManifestsResponse.cpp
  src/v20190924/model/DescribeNamespacePersonalResponse.cpp
  src/v20190924/model/DeleteNamespacePersonalResponse.cpp
  src/v20190924/model/Header.cpp
  src/v20190924/model/RetentionPolicy.cpp
  src/v20190924/model/CreateSecurityPolicyRequest.cpp
  src/v20190924/model/CreateWebhookTriggerRequest.cpp
  src/v20190924/model/DescribeRepositoryOwnerPersonalRequest.cpp
  src/v20190924/model/ModifyRepositoryInfoPersonalRequest.cpp
  src/v20190924/model/DescribeApplicationTriggerLogPersonalRequest.cpp
  src/v20190924/model/DescribeFavorRepositoryPersonalRequest.cpp
  src/v20190924/model/DescribeApplicationTriggerLogPersonalResponse.cpp
  src/v20190924/model/DeleteMultipleSecurityPolicyResponse.cpp
  src/v20190924/model/ManageInternalEndpointResponse.cpp
  src/v20190924/model/CreateRepositoryPersonalResponse.cpp
  src/v20190924/model/DescribeRepositoryFilterPersonalResponse.cpp
  src/v20190924/model/CreateTagRetentionExecutionResponse.cpp
  src/v20190924/model/DescribeFavorRepositoryPersonalResponse.cpp
  src/v20190924/model/CheckInstanceNameResponse.cpp
  src/v20190924/model/ManageImageLifecycleGlobalPersonalResponse.cpp
  src/v20190924/model/DescribeTagRetentionRulesResponse.cpp
  src/v20190924/model/ModifyRepositoryAccessPersonalResponse.cpp
  src/v20190924/model/ManageExternalEndpointResponse.cpp
  src/v20190924/model/ModifyApplicationTriggerPersonalRequest.cpp
  src/v20190924/model/CreateReplicationInstanceResponse.cpp
  src/v20190924/model/CreateInstanceTokenRequest.cpp
  src/v20190924/model/ModifyUserPasswordPersonalRequest.cpp
  src/v20190924/model/DescribeSecurityPoliciesRequest.cpp
  src/v20190924/model/ReplicationRegistry.cpp
  src/v20190924/model/DescribeInternalEndpointsRequest.cpp
  src/v20190924/model/ValidateNamespaceExistPersonalResponse.cpp
  src/v20190924/model/DescribeWebhookTriggerLogResponse.cpp
  src/v20190924/model/DescribeApplicationTriggerPersonalResp.cpp
  src/v20190924/model/TagInfo.cpp
  src/v20190924/model/CreateRepositoryRequest.cpp
  src/v20190924/model/DeleteImageResponse.cpp
  src/v20190924/model/DescribeWebhookTriggerRequest.cpp
  src/v20190924/model/DeleteNamespaceRequest.cpp
  src/v20190924/model/BatchDeleteImagePersonalRequest.cpp
  src/v20190924/model/DescribeImagesRequest.cpp
  src/v20190924/model/ModifyTagRetentionRuleResponse.cpp
  src/v20190924/model/DescribeTagRetentionExecutionRequest.cpp
  src/v20190924/model/CreateRepositoryResponse.cpp
  src/v20190924/model/DescribeTagRetentionRulesRequest.cpp
  src/v20190924/model/RespLimit.cpp
  src/v20190924/model/CheckInstanceNameRequest.cpp
  src/v20190924/model/DescribeInstanceTokenResponse.cpp
  src/v20190924/model/SameImagesResp.cpp
  src/v20190924/model/DescribeTagRetentionExecutionResponse.cpp
  src/v20190924/model/CreateNamespacePersonalRequest.cpp
  src/v20190924/model/WebhookTrigger.cpp
  src/v20190924/model/CreateWebhookTriggerResponse.cpp
  src/v20190924/model/ReplicationFilter.cpp
  src/v20190924/model/DeleteTagRetentionRuleRequest.cpp
  src/v20190924/model/TcrRepositoryInfo.cpp
  src/v20190924/model/TcrInstanceToken.cpp
  src/v20190924/model/DeleteRepositoryRequest.cpp
  src/v20190924/model/CreateInternalEndpointDnsResponse.cpp
  src/v20190924/model/CreateTagRetentionExecutionRequest.cpp
  src/v20190924/model/CreateApplicationTriggerPersonalResponse.cpp
  src/v20190924/model/ManageInternalEndpointRequest.cpp
  src/v20190924/model/BatchDeleteImagePersonalResponse.cpp
  src/v20190924/model/DeleteInternalEndpointDnsResponse.cpp
  src/v20190924/model/DeleteRepositoryPersonalRequest.cpp
  )

set(tcr_include
    include/tencentcloud/tcr
  )

add_library(tcr ${LIB_TYPE}
  ${tcr_public_header}
  ${tcr_public_header_model}
  ${tcr_src})

set_target_properties(tcr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcr
  )

target_include_directories(tcr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcr
  core)

#install(FILES ${tcr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcr/v20190924)
#install(FILES ${tcr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcr/v20190924/model)
install(DIRECTORY ${tcr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

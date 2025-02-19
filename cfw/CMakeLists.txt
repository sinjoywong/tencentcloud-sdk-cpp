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

set(cfw_public_header
  include/tencentcloud/cfw/v20190904/CfwClient.h
  )

set(cfw_public_header_model
  include/tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewResponse.h
  include/tencentcloud/cfw/v20190904/model/ScanResultInfo.h
  include/tencentcloud/cfw/v20190904/model/ScanInfo.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoRequest.h
  include/tencentcloud/cfw/v20190904/model/IocListData.h
  include/tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h
  include/tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h
  include/tencentcloud/cfw/v20190904/model/CreateSecurityGroupApiRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h
  include/tencentcloud/cfw/v20190904/model/ExpandCfwVerticalResponse.h
  include/tencentcloud/cfw/v20190904/model/AcListsData.h
  include/tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/SequenceData.h
  include/tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/CreateSecurityGroupApiRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/NatFwEipsInfo.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupApiRuleData.h
  include/tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupAllRuleStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeCfwEipsResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/RunSyncAssetResponse.h
  include/tencentcloud/cfw/v20190904/model/RunSyncAssetRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeCfwEipsRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListResponse.h
  include/tencentcloud/cfw/v20190904/model/AssociatedInstanceInfo.h
  include/tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupAllRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h
  include/tencentcloud/cfw/v20190904/model/RuleInfoData.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupListData.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h
  include/tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupAllRuleStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupAllRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h
  include/tencentcloud/cfw/v20190904/model/SwitchListsData.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusResponse.h
  )

set(cfw_src
  src/v20190904/CfwClient.cpp
  src/v20190904/model/DescribeVpcRuleOverviewResponse.cpp
  src/v20190904/model/ScanResultInfo.cpp
  src/v20190904/model/ScanInfo.cpp
  src/v20190904/model/SetNatFwDnatRuleRequest.cpp
  src/v20190904/model/DescribeSyncAssetStatusResponse.cpp
  src/v20190904/model/ModifyAllSwitchStatusRequest.cpp
  src/v20190904/model/ModifyAllRuleStatusResponse.cpp
  src/v20190904/model/DescribeGuideScanInfoRequest.cpp
  src/v20190904/model/IocListData.cpp
  src/v20190904/model/DescribeRuleOverviewResponse.cpp
  src/v20190904/model/CfwNatDnatRule.cpp
  src/v20190904/model/CreateSecurityGroupApiRulesRequest.cpp
  src/v20190904/model/DescribeSecurityGroupListResponse.cpp
  src/v20190904/model/ExpandCfwVerticalResponse.cpp
  src/v20190904/model/AcListsData.cpp
  src/v20190904/model/ModifyItemSwitchStatusRequest.cpp
  src/v20190904/model/SequenceData.cpp
  src/v20190904/model/ModifyItemSwitchStatusResponse.cpp
  src/v20190904/model/CreateSecurityGroupApiRulesResponse.cpp
  src/v20190904/model/ModifyAcRuleResponse.cpp
  src/v20190904/model/ModifySequenceRulesResponse.cpp
  src/v20190904/model/DescribeTableStatusResponse.cpp
  src/v20190904/model/DeleteAcRuleResponse.cpp
  src/v20190904/model/ModifySequenceRulesRequest.cpp
  src/v20190904/model/NatFwEipsInfo.cpp
  src/v20190904/model/SecurityGroupApiRuleData.cpp
  src/v20190904/model/DescribeSwitchListsResponse.cpp
  src/v20190904/model/DescribeSyncAssetStatusRequest.cpp
  src/v20190904/model/ModifySecurityGroupAllRuleStatusResponse.cpp
  src/v20190904/model/DescribeCfwEipsResponse.cpp
  src/v20190904/model/DeleteAllAccessControlRuleRequest.cpp
  src/v20190904/model/RunSyncAssetResponse.cpp
  src/v20190904/model/RunSyncAssetRequest.cpp
  src/v20190904/model/DeleteSecurityGroupRuleRequest.cpp
  src/v20190904/model/ModifyTableStatusResponse.cpp
  src/v20190904/model/SetNatFwDnatRuleResponse.cpp
  src/v20190904/model/DescribeCfwEipsRequest.cpp
  src/v20190904/model/DescribeRuleOverviewRequest.cpp
  src/v20190904/model/DescribeVpcRuleOverviewRequest.cpp
  src/v20190904/model/DescribeAcListsRequest.cpp
  src/v20190904/model/DescribeTableStatusRequest.cpp
  src/v20190904/model/CreateAcRulesResponse.cpp
  src/v20190904/model/DescribeAssociatedInstanceListResponse.cpp
  src/v20190904/model/AssociatedInstanceInfo.cpp
  src/v20190904/model/DescribeAssociatedInstanceListRequest.cpp
  src/v20190904/model/ModifyAcRuleRequest.cpp
  src/v20190904/model/DescribeNatRuleOverviewResponse.cpp
  src/v20190904/model/DeleteAcRuleRequest.cpp
  src/v20190904/model/DeleteAllAccessControlRuleResponse.cpp
  src/v20190904/model/ModifyBlockIgnoreListResponse.cpp
  src/v20190904/model/DeleteSecurityGroupAllRuleResponse.cpp
  src/v20190904/model/ExpandCfwVerticalRequest.cpp
  src/v20190904/model/RuleInfoData.cpp
  src/v20190904/model/SecurityGroupListData.cpp
  src/v20190904/model/ModifyBlockIgnoreListRequest.cpp
  src/v20190904/model/CreateAcRulesRequest.cpp
  src/v20190904/model/DescribeSecurityGroupListRequest.cpp
  src/v20190904/model/DescribeSwitchListsRequest.cpp
  src/v20190904/model/ModifyTableStatusRequest.cpp
  src/v20190904/model/DeleteSecurityGroupRuleResponse.cpp
  src/v20190904/model/DescribeNatRuleOverviewRequest.cpp
  src/v20190904/model/ModifySecurityGroupAllRuleStatusRequest.cpp
  src/v20190904/model/DeleteSecurityGroupAllRuleRequest.cpp
  src/v20190904/model/ModifyAllRuleStatusRequest.cpp
  src/v20190904/model/DescribeGuideScanInfoResponse.cpp
  src/v20190904/model/DescribeAcListsResponse.cpp
  src/v20190904/model/SwitchListsData.cpp
  src/v20190904/model/ModifyAllSwitchStatusResponse.cpp
  )

set(cfw_include
    include/tencentcloud/cfw
  )

add_library(cfw ${LIB_TYPE}
  ${cfw_public_header}
  ${cfw_public_header_model}
  ${cfw_src})

set_target_properties(cfw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cfw
  )

target_include_directories(cfw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cfw
  core)

#install(FILES ${cfw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfw/v20190904)
#install(FILES ${cfw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfw/v20190904/model)
install(DIRECTORY ${cfw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cfw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

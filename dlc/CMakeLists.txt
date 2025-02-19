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

set(dlc_public_header
  include/tencentcloud/dlc/v20210125/DlcClient.h
  )

set(dlc_public_header_model
  include/tencentcloud/dlc/v20210125/model/DatabaseInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h
  include/tencentcloud/dlc/v20210125/model/Script.h
  include/tencentcloud/dlc/v20210125/model/KVPair.h
  include/tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeTableRequest.h
  include/tencentcloud/dlc/v20210125/model/Other.h
  include/tencentcloud/dlc/v20210125/model/TaskResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/DescribeViewsResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskResponse.h
  include/tencentcloud/dlc/v20210125/model/Property.h
  include/tencentcloud/dlc/v20210125/model/DeleteScriptRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeTableResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateStoreLocationResponse.h
  include/tencentcloud/dlc/v20210125/model/TableResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/CreateScriptResponse.h
  include/tencentcloud/dlc/v20210125/model/Task.h
  include/tencentcloud/dlc/v20210125/model/DescribeDatabasesResponse.h
  include/tencentcloud/dlc/v20210125/model/Execution.h
  include/tencentcloud/dlc/v20210125/model/DeleteScriptResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateTableResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateDatabaseResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTablesResponse.h
  include/tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h
  include/tencentcloud/dlc/v20210125/model/CreateScriptRequest.h
  include/tencentcloud/dlc/v20210125/model/Partition.h
  include/tencentcloud/dlc/v20210125/model/TableInfo.h
  include/tencentcloud/dlc/v20210125/model/Column.h
  include/tencentcloud/dlc/v20210125/model/CreateStoreLocationRequest.h
  include/tencentcloud/dlc/v20210125/model/Filter.h
  include/tencentcloud/dlc/v20210125/model/CreateTaskRequest.h
  include/tencentcloud/dlc/v20210125/model/TableBaseInfo.h
  include/tencentcloud/dlc/v20210125/model/ViewResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/TextFile.h
  include/tencentcloud/dlc/v20210125/model/DataFormat.h
  include/tencentcloud/dlc/v20210125/model/CSV.h
  include/tencentcloud/dlc/v20210125/model/CreateTableRequest.h
  include/tencentcloud/dlc/v20210125/model/SQLTask.h
  include/tencentcloud/dlc/v20210125/model/DescribeScriptsRequest.h
  include/tencentcloud/dlc/v20210125/model/CSVSerde.h
  include/tencentcloud/dlc/v20210125/model/DescribeTablesRequest.h
  include/tencentcloud/dlc/v20210125/model/CreateDatabaseRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeViewsRequest.h
  include/tencentcloud/dlc/v20210125/model/DescribeScriptsResponse.h
  include/tencentcloud/dlc/v20210125/model/DatabaseResponseInfo.h
  include/tencentcloud/dlc/v20210125/model/ViewBaseInfo.h
  )

set(dlc_src
  src/v20210125/DlcClient.cpp
  src/v20210125/model/DatabaseInfo.cpp
  src/v20210125/model/DescribeTasksRequest.cpp
  src/v20210125/model/Script.cpp
  src/v20210125/model/KVPair.cpp
  src/v20210125/model/DescribeDatabasesRequest.cpp
  src/v20210125/model/DescribeTableRequest.cpp
  src/v20210125/model/Other.cpp
  src/v20210125/model/TaskResponseInfo.cpp
  src/v20210125/model/DescribeViewsResponse.cpp
  src/v20210125/model/CreateTaskResponse.cpp
  src/v20210125/model/Property.cpp
  src/v20210125/model/DeleteScriptRequest.cpp
  src/v20210125/model/DescribeTableResponse.cpp
  src/v20210125/model/CreateStoreLocationResponse.cpp
  src/v20210125/model/TableResponseInfo.cpp
  src/v20210125/model/CreateScriptResponse.cpp
  src/v20210125/model/Task.cpp
  src/v20210125/model/DescribeDatabasesResponse.cpp
  src/v20210125/model/Execution.cpp
  src/v20210125/model/DeleteScriptResponse.cpp
  src/v20210125/model/CreateTableResponse.cpp
  src/v20210125/model/CreateDatabaseResponse.cpp
  src/v20210125/model/DescribeTablesResponse.cpp
  src/v20210125/model/DescribeTasksResponse.cpp
  src/v20210125/model/CreateScriptRequest.cpp
  src/v20210125/model/Partition.cpp
  src/v20210125/model/TableInfo.cpp
  src/v20210125/model/Column.cpp
  src/v20210125/model/CreateStoreLocationRequest.cpp
  src/v20210125/model/Filter.cpp
  src/v20210125/model/CreateTaskRequest.cpp
  src/v20210125/model/TableBaseInfo.cpp
  src/v20210125/model/ViewResponseInfo.cpp
  src/v20210125/model/TextFile.cpp
  src/v20210125/model/DataFormat.cpp
  src/v20210125/model/CSV.cpp
  src/v20210125/model/CreateTableRequest.cpp
  src/v20210125/model/SQLTask.cpp
  src/v20210125/model/DescribeScriptsRequest.cpp
  src/v20210125/model/CSVSerde.cpp
  src/v20210125/model/DescribeTablesRequest.cpp
  src/v20210125/model/CreateDatabaseRequest.cpp
  src/v20210125/model/DescribeViewsRequest.cpp
  src/v20210125/model/DescribeScriptsResponse.cpp
  src/v20210125/model/DatabaseResponseInfo.cpp
  src/v20210125/model/ViewBaseInfo.cpp
  )

set(dlc_include
    include/tencentcloud/dlc
  )

add_library(dlc ${LIB_TYPE}
  ${dlc_public_header}
  ${dlc_public_header_model}
  ${dlc_src})

set_target_properties(dlc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dlc
  )

target_include_directories(dlc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dlc
  core)

#install(FILES ${dlc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dlc/v20210125)
#install(FILES ${dlc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dlc/v20210125/model)
install(DIRECTORY ${dlc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dlc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

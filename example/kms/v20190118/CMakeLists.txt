cmake_minimum_required (VERSION 3.1)
project(KMSDemo)

set(CMAKE_CXX_STANDARD 11)

add_executable(CreateKey CreateKey.cpp)
add_executable(Listkeys ListKeys.cpp)
add_executable(ListkeyDetails ListKeyDetails.cpp)
target_link_libraries(CreateKey tencentcloud-sdk-cpp-kms tencentcloud-sdk-cpp-core)
target_link_libraries(ListKeys tencentcloud-sdk-cpp-kms tencentcloud-sdk-cpp-core)
target_link_libraries(ListKeyDetails tencentcloud-sdk-cpp-kms tencentcloud-sdk-cpp-core)

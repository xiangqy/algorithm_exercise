cmake_minimum_required(VERSION 3.22)

project(bubbling)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

find_library(COMMON_LIBRARY common PATHS ../../common/lib/)

include_directories(../../common/ ../../common/log/include/)

add_executable(${PROJECT_NAME} bubbling.cc)
# 链接
# find_package(name REQUIRED)
target_link_libraries(${PROJECT_NAME} ${COMMON_LIBRARY})
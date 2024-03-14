cmake_minimum_required(VERSION 3.4.2)

project(common)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

aux_source_directory(../common/log/ LOG_SRCS)
add_library(${PROJECT_NAME} ${LOG_SRCS})
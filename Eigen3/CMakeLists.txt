cmake_minimum_required(VERSION 2.8)
project(Eigen3)
# c++ 版本
set(CMAKE_CXX_STANDARD 14)
find_package(Eigen3 REQUIRED)
include_directories(${Eigen3_INCLUDE_DIR})
add_executable(example main.cpp)
# eigen库只有头文件没有链接库，不需要target_link_libraries命令


cmake_minimum_required(VERSION 2.8)
project(PCL)
# c++ 版本
set(CMAKE_CXX_STANDARD 14)
find_package(PCL 1.11 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})
add_executable(example main.cpp)
#注意链接格式为 PCL_XXX_LIBRARIES
target_link_libraries(example ${PCL_LIBRARIES})


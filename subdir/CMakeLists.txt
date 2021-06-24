cmake_minimum_required(VERSION 2.8)
project(subdir)

set(CMAKE_CXX_STANDARD 14)

#添加opencv库
#find_package(OpenCV 3.3 REQUIRED)
find_package(OpenCV REQUIRED)
#添加opencv头文件
include_directories(${OpenCV_INCLUDE_DIRS})
#显示opencv_INCLUDE_DIRES的值
message(${OpenCV_INCLUDE_DIRS})

#添加pcl
find_package(PCL 1.11 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

aux_source_directory(. DIR_SRCS)

add_subdirectory(datastore)

add_executable(subdir ${DIR_SRCS})

target_link_libraries(subdir Datastore ${OpenCV_LIBS} ${PCL_LIBRARIES})


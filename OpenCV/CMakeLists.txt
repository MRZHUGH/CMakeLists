# 声明cmake最低版本
cmake_minimum_required(VERSION 3.5)
#声明一个cmake工程
project(Lidar_Camera_Cal)
#设置编译模式
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#添加opencv库
#find_package(OpenCV 3.3 REQUIRED)
find_package(OpenCV REQUIRED)
#添加opencv头文件
include_directories(${OpenCV_INCLUDE_DIRS})
#显示opencv_INCLUDE_DIRES的值
message(${OpenCV_INCLUDE_DIRS})
#添加一个可执行程序
add_executable(Lidar_Camera_Cal main.cpp)

#将库文件链接到可执行程序上
target_link_libraries(Lidar_Camera_Cal ${OpenCV_LIBS})
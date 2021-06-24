//
// Created by zhangzw on 2021/6/16.
//

#include <iostream>
//#include <unistd.h> //使用pause()保留控制台
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
//#include <pcl-1.11/pcl/cloud_iterator.h>
#include <pcl/visualization/cloud_viewer.h>

#include "Datastore.h"

using namespace std;

void Datastore::readpoint() {
    std::cout << " ### loading lidar point ### " << std::endl;

    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);

    if (pcl::io::loadPCDFile<pcl::PointXYZ>("/home/zzw/Documents/20210617_Lidar_CameraCal/pcd/1.pcd", *cloud) == -1)
    {
        PCL_ERROR("Cloudn't read pcd file!\n");
    }
    cout << "Loaded "
        << cloud->width * cloud->height
        << " data point from 1.pcd with the following fields: "
        << endl;
    //for (size_t i = 0; i < cloud->points.size(); ++i) //显示所有点的x,y,z
    for (size_t i = 0; i < 5; ++i)
        cout << "   " << cloud->points[i].x
        << " " << cloud->points[i].y
        << " " << cloud->points[i].z
        << endl;
    pcl::visualization::CloudViewer viewer("pcd Viewer");
    viewer.showCloud(cloud);
    
    //system("pause"); //windows下使用可保留控制台
    //pause();
    system("read -p 'Press Enter to continue...' var");

}

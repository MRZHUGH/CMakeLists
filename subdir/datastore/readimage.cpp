//
// Created by zhangzw on 2021/6/16.
//
#include "Datastore.h"

#include <opencv2/opencv.hpp>
//#include <stdio.h>
#include <iostream>
using namespace std;

void Datastore::readimage() {
    std::cout << " ### loading camera image ### " << std::endl;

    std::string camera_jpg;
    //std::string window_name; 可设置窗口名字
    std::vector<cv::String> image_files;
    camera_jpg = "/home/zzw/Documents/20210617_Lidar_CameraCal/image/*.jpg";
    cv::glob(camera_jpg, image_files);
    cout << image_files.size() << endl;
    for(int i = 1;i < image_files.size();i++)
    {
        cout << image_files[i] << endl;
   		cv::Mat image=cv::imread(image_files[i]);
        if (!image.data){
            cout << "No camera image!" << endl;
        }
        //cv::namedWindow(window_name);
    	cv::imshow("camera image",image);
        cout << "image No." << i << endl;
        cv::waitKeyEx(100);
    	
    }   
	cv::waitKeyEx(0);

}

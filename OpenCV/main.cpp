#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main(int argc, char **argv)
{



    cout << "Hello Calibration!" << endl;
    return 0;
}

void imageDatastore(string imagePath, vector<string>& files)
{
    cv::Mat image;
    image = cv::imread("imagePath");

    if(image.data == nullptr) //nullptr是c++11新出现的空指针常量
    {
        cerr << "No image file found!" <<endl;
        //return 0;
    }

    cv::imshow("load camera image", image);
    cv::waitKey(0);
    //return 0;

}
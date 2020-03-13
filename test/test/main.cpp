//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    cv::Mat srcM = cv::imread("/Users/xuyishen/Desktop/sa jiganyouhaximeiyouga/2020.3.13/Threshold/RGB.jpg");
    Mat src,dst1,dst2;
    cvtColor(srcM,src,COLOR_RGB2GRAY);
    adaptiveThreshold(src,dst1,255,ADAPTIVE_THRESH_GAUSSIAN_C,THRESH_BINARY,15,10);
    threshold(src,dst2,100,255,THRESH_BINARY);
    imshow("first", dst1);
    imshow("second", dst2);
    waitKey(0);
        return 0;
    }

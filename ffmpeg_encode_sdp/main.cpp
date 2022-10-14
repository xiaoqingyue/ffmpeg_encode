#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

#include "encoder.h"
encoder *ed = new encoder();

int main()
{


      cv::VideoCapture cap(cv::String("/home/zhy/Documents/remote_driving/encoder_YUV_H264-h265/test.mp4"));
       if (!cap.isOpened())
       {
           return -1;
       }

      while(true){
        cv::Mat srcImg;
        cap>>srcImg;
        std::cout<<12<<std::endl;
        ed->encode(srcImg);
       }


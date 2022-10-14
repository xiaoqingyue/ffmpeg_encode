#ifndef ENCODER_H
#define ENCODER_H

#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

extern "C"
{
#include <libavutil/opt.h>
#include <libavutil/mathematics.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <libavutil/imgutils.h>
#include <libavcodec/avcodec.h>
}


class encoder
{
private:
    AVFormatContext* pFormatCtx;
    //AVOutputFormat* fmt;
    AVStream* video_st;
    AVCodecContext* pCodecCtx;
    AVCodec* pCodec;
    AVPacket pkt;
    uint8_t* picture_buf;
    AVFrame* pFrame;

    int picture_size;
    int y_size;
    int framecnt;
    int w;
    int h;
    int bufLen;
    const char* out_file;


public:
     encoder();// initencode
     ~encoder();
  void encode(cv::Mat srcImg,int serverSockfd, const char* clientip, int16_t clientport,
                          struct RtpPacket* rtpPacket);

};

#endif // ENCODER_H

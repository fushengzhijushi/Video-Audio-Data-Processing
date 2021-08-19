// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

using namespace std;

#include <stdio.h>

/**
 * Analysis H.264 Bitstream
 * @param url    Location of input H.264 bitstream file.
 */
int simplest_h264_parser(char* url);


int main(int argc, const char* argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    //资源文件路径，此地址要更换为自己的电脑路径
    char* inUrl = "C:/Users/Admin/Desktop/VideoAudioDataProcessing/H264/resources/sintel.h264";


    //Test
    simplest_h264_parser(inUrl);


    return 0;
}

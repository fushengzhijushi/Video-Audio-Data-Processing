// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

using namespace std;

#include <stdio.h>

int simplest_udp_parser(int port,char* outUrl);



int main(int argc, const char* argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    //资源文件路径，此地址要更换为自己的电脑路径
    char* outUrl = "C:/Users/Admin/Desktop/VideoAudioDataProcessing/UDPRTP/CMakeProject1/output_dump.ts";

    simplest_udp_parser(8880,outUrl);


    return 0;
}

// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

using namespace std;

#include <stdio.h>

int simplest_aac_parser(char* url);

int main(int argc, const char* argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    //资源文件路径，此地址要更换为自己的电脑路径
    char* inUrl = "C:/Users/Admin/Desktop/VideoAudioDataProcessing/AAC/resources/nocturne.aac";

    simplest_aac_parser(inUrl);

    return 0;
}
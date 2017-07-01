// x264_test.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include <iostream>  

extern "C"
{
	#include "x264.h"  
	#include "x264_config.h"  
}

int main(void)
{
	x264_param_t mParam;
	x264_param_default(&mParam);
	std::cout << "hello world" << std::endl;
	system("pause");
	return 0;
}

// x264_test.cpp : �w�q�D���x���ε{�����i�J�I�C
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

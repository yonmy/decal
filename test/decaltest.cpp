// Decal library test for C++
//
// Copyright (c) 2018 YonMy Kim
// All rights reserved.
//
// Author: YonMy Kim (yonmygame@gmail.com / https://yonmy.com)
// File:   decaltest.cpp

#include "decaltest.h"

#ifdef __cplusplus
extern"C" {
#endif

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	const int ret = RUN_ALL_TESTS();
	//::system("pause");
	return ret;
}

#ifdef __cplusplus
	}
#endif

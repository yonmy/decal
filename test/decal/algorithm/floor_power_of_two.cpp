// Decal library test for C++
//
// Copyright (c) 2018 YonMy Kim
// All rights reserved.
//
// Author: YonMy Kim (yonmygame@gmail.com / https://yonmy.com)
// File:   floor_power_of_two.cpp

#include "decaltest.h"
#include "decal/algorithm/floor_power_of_two.h"

TEST(Algorithm, FloorPowerOfTwo)
	{
	EXPECT_EQ(decal::floor_power_of_two(0), 0);
	EXPECT_EQ(decal::floor_power_of_two(1), 1);
	EXPECT_EQ(decal::floor_power_of_two(2), 2);
	EXPECT_EQ(decal::floor_power_of_two(3), 2);
	EXPECT_EQ(decal::floor_power_of_two(4), 4);
	EXPECT_EQ(decal::floor_power_of_two(5), 4);
	EXPECT_EQ(decal::floor_power_of_two(6), 4);
	EXPECT_EQ(decal::floor_power_of_two(7), 4);
	EXPECT_EQ(decal::floor_power_of_two(8), 8);

	size_t exp = 8;
	for (size_t i = 9; i < 65536; i += 4)
		{
		if ((exp * 2) <= i)
			{
			exp *= 2;
			}

		EXPECT_EQ(decal::floor_power_of_two(i), exp);
		}
	}

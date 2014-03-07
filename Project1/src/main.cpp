/*
 * testing.cpp
 *
 *  Created on: 20 févr. 2014
 *      Author: vincent
 */

#include <iostream>
#include <gtest/gtest.h>
#include "Myclass.h"

using namespace std;
int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);



	return RUN_ALL_TESTS();
	 return 0;
}

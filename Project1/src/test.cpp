
/*
 * Test.cpp
 *
 *  Created on: 20 févr. 2014
 *      Author: yanis
 */
#include <iostream>
#include <gtest/gtest.h>
#include "Myclass.h"
using namespace std;

TEST(StringTest, monstring)
{
    string aText="";
    EXPECT_EQ("", aText);
    EXPECT_EQ(0, aText.length());

}


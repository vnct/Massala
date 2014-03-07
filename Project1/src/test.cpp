
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
    string aText="I am the master of my fate \n I am the captain of my soul";
    EXPECT_EQ("I am the master of my fate \n I am the captain of my soul", aText);
    EXPECT_EQ(14, aText.length());

}


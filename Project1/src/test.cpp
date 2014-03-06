
/*
 * Test.cpp
 *
 *  Created on: 20 févr. 2014
 *      Author: yanis
 */
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

TEST(StringTest, Init)
{
    string aText;
    EXPECT_EQ("", aText);
    EXPECT_EQ(0, aText.length());

}

TEST(StringTest, assign)
{
    string aText="SpongeBob";
    EXPECT_EQ("SpongeBo", aText);
}
TEST(StringTest, clear)
{
    string aText="Toto";
    aText.clear();
    EXPECT_EQ("", aText);
}

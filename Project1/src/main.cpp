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

	Myclass toto;
	int nbr=0;
	char str[] = "I am the master of my fate \n I am the captain of my soul";
	  cout << "Nombre de mots" << endl;

	    nbr=toto.monstring(str);

	    cout<<nbr<<endl;


	return RUN_ALL_TESTS();
	 return 0;
}

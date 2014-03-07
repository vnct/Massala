/*
 * testing.cpp
 *
 *  Created on: 20 févr. 2014
 *      Author: vincent
 */

#include <iostream>
#include <gtest/gtest.h>
#include "Group.hpp"
#include "Person.hpp"
#include <vector>

using namespace std;
int main(int argc, char **argv)
{
	vector<Person> myvectPerson;
	Group GroupOne;
	int nbPerson;
	cout << "Nb de person" << endl;
	cin >> nbPerson;
	GroupOne.setNumberOfPerson(nbPerson);
	string name, phoneNumber;
	for(i=1;i<=GroupOne.getNumberOfPerson();i++)
	{
		Person P1;
	}

	::testing::InitGoogleTest(&argc, argv);



	return RUN_ALL_TESTS();
	 return 0;
}

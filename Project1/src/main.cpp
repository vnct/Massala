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
	int i=0;
	cout << "Nb de person" << endl;
	cin >> nbPerson;
	GroupOne.setNumberOfPerson(nbPerson);
	string name, phoneNumber;
	for(i=1;i<=GroupOne.getNumberOfPerson();i++)
	{
		Person P1;
		string toto;
		float tata;
		cout << "Name de person" << endl;
		cin >> toto;
		P1.setName(toto);
		cout << "Number tel" << endl;
		cin >> toto;
		P1.setPhoneNumber(toto);
		cout << "Expenses" << endl;
		cin >> tata;
		P1.setExpenses(tata);



		;
	}

	::testing::InitGoogleTest(&argc, argv);



	return RUN_ALL_TESTS();
	 return 0;
}

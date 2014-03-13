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
	cout << "Number pers " << endl;
	cin >> nbPerson;
	GroupOne.setNumberOfPerson(nbPerson);
	GroupOne.enterPersons();
	GroupOne.calculexpense();
	cout << "Total expenses " << GroupOne.getExpenseTotal() << endl;
	cout << "Result of expenser per person "  << GroupOne.getExpensePerperson() << endl;
	GroupOne.calculPaybackPersons();

//	GroupOne.setNumberOfPerson(nbPerson);
//	GroupOne.setExpenseTotal(0);
//	string name, phoneNumber;
//	for(int i=0;i<GroupOne.getNumberOfPerson();i++)
//	{
//		string sname;
//		string snumber;
//		float fexpenses;
//		cout << "Name person" << endl;
//		cin >> sname;
//		//P1.setName(sname);
//		cout << "Number tel" << endl;
//		cin >> sname;
//	//	P1.setPhoneNumber(sname);
//		cout << "Expenses" << endl;
//		cin >> fexpenses;
//		Person person(sname,snumber,fexpenses);
////		P1.setExpenses(fexpenses);
//		float ExpenseTotal = GroupOne.getExpenseTotal();
//		ExpenseTotal = ExpenseTotal + person.getExpenses();
//		GroupOne.setExpenseTotal(ExpenseTotal);
//		myvectPerson.push_back(person);
//	}

//	GroupOne.calculexpense(myvectPerson);
//	cout << "Total expenses " << GroupOne.getExpenseTotal() << endl;
//	cout << "Result of expenser per person "  << GroupOne.getExpensePerperson() << endl;
//	for(int unsigned i = 0; i < myvectPerson.size();i++)
//	{
//		myvectPerson[i].CalculPayback(GroupOne.getExpensePerperson());
//		cout << "Owed of Person number" << i+1 << " : " << myvectsPerson[i].getPayBack() << endl;
//	}
//
//	//::testing::InitGoogleTest(&argc, argv);



//	return RUN_ALL_TESTS();
	 return 0;
}

//============================================================================
// Name        : main.cpp
// Author      : aabou
// Version     :
// Copyright   : Your copyright notice
// Description : Tutorial - Application to manage friends expenses
//============================================================================

#include "Person.hpp"
#include "Group.hpp"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
	unsigned int aNb = 0;
	unsigned int aNbGroup = 0;
	/*
	 *  Register the input
	 */

	string namegroup;

	vector<Group> myvectGroup;

	cout << "How MANY group?" << endl;
	cin >> aNbGroup;

	for (unsigned int j=0; j < aNbGroup; j++)
	{

		cout << "How name of group " <<  j+1 << " ?" << endl;
		cin >> namegroup;;
		//myvectGroup.push_back(aGroup);
		cout << "How many people are you?" << endl;
		cin >> aNb;
		Group aGroup(aNb,namegroup);
		myvectGroup.push_back(aGroup);
		for (unsigned int i=0; i < aNb; i++) {
			Person aPerson;
			string myname;
			cout << "What is the name of person " << i+1 << " ?" << endl;
			cin >> myname;
			aPerson.setName(myname);
			string phone;
			cout << "What is the phone number of person " << i+1 << " ?" << endl;
			cin >> phone;
			aPerson.setPhoneNumber(phone);
			float expenses;
			cout << "What is the expenses of person " << i+1 << " ?" << endl;
			cin >> expenses;
			aPerson.setExpenses(expenses);
			aPerson.setGroup(&myvectGroup[j]);
			myvectGroup[j].push_back(aPerson);

			//aPerson.setGroup(&myvectGroup[j]);
//			aGroup.push_back(aPerson);
		}
//		cout << endl;
//		cout << "Total expenses:\t\t" << aGroup.totalExpenses() << endl;
//		float aExpensesPerPerson = aGroup.expensesPerPerson();
//		cout << "Expenses per person:\t" << aExpensesPerPerson <<endl;
//		cout << endl;
//		myvectGroup.push_back(aGroup);
		cout << "Total expenses:\t\t" << myvectGroup[j].totalExpenses() << endl;
		float aExpensesPerPerson = myvectGroup[j].expensesPerPerson();
		cout << "Expenses per person:\t" << aExpensesPerPerson << endl;
		cout << endl;

		//myvectGroup.push_back(aGroup);
	}

	/*
	 *  Prepare the output
	 */


	cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
			<< "Payback\t\t" << "Group Name" <<endl;
	cout << "------------------------------------------------------------------------"
			<< endl;

	for (size_t i=0; i < myvectGroup.size(); ++i)
	{

		for (size_t j=0; j < myvectGroup[i].size(); ++j) {
				// operate the payback first
				myvectGroup[i].at(j).operatePayback(myvectGroup[i].expensesPerPerson());

				// display the values
				cout << myvectGroup[i].at(j).getName() << "\t\t" << myvectGroup[i].at(j).getPhoneNumber()
		            		<< "\t\t" << myvectGroup[i].at(j).getExpenses() << "\t\t"
		            		<< myvectGroup[i].at(j).getPayBack()  << "\t\t"
		            		<< myvectGroup[i].at(j).getGroup()->getName() << endl;
			}
	}

	cout << endl;



	return 0;
}

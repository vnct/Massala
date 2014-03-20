//============================================================================
// Name        : main.cpp
// Author      : aabou
// Version     :
// Copyright   : Your copyright notice
// Description : Tutorial - Application to manage friends expenses
//============================================================================

#include "Person.hpp"
#include "Group.hpp"
#include "Csv.hpp"

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char **argv) {

	/*
	 *  Register the input
	 */
	string namegroup;
	Csv my_csv;

	string filename =  string(get_current_dir_name());
	string mon_emplacement_fichier = filename + "/src/test.csv";
	my_csv.setName(mon_emplacement_fichier);
	vector<Group> myvectGroup = my_csv.setGroup(my_csv.getLigneCSV());


	cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
			<< "Payback\t\t" << "Group Name" << endl;
	cout << "------------------------------------------------------------------------"
			<< endl;
	cout.precision(4);
	for (size_t i=0; i < myvectGroup.size(); ++i)
	{

		for (size_t j=0; j < myvectGroup[i].size(); ++j) {

			myvectGroup[i].at(j).operatePayback(myvectGroup[i].expensesPerPerson());

			cout << myvectGroup[i].at(j).getName() << "\t\t" << myvectGroup[i].at(j).getPhoneNumber()
		            				<< "\t\t" << myvectGroup[i].at(j).getExpenses() << "\t\t"
		            				<< myvectGroup[i].at(j).getPayBack()  << "\t\t"
		            				<< myvectGroup[i].at(j).getGroup()->getName() << endl;
		}
	}

	cout << endl;



	return 0;
}

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
	unsigned int aNb = 0;
	unsigned int aNbGroup = 0;
	/*
	 *  Register the input
	 */

	string namegroup;
	Csv my_csv;

	string filename =  string(get_current_dir_name());
	string mon_emplacement_fichier = filename + "/src/test.csv";
	vector<Group> myvectGroup = my_csv.getData(mon_emplacement_fichier);


	cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
			<< "Payback\t\t" << "Group Name" <<endl;
	cout << "------------------------------------------------------------------------"
			<< endl;

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

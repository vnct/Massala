/*
 * Group.hpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#ifndef GROUP_HPP_
#define GROUP_HPP_
#include <string>
#include <vector>
#include "Person.hpp"

using namespace std;


class Group : public vector<Person>{
public:
	Group();
	Group(int NumberofPerson);
	~Group();

	int getNumberOfPerson() const;
	float getExpensePerperson() const;
	float getExpenseTotal() const;
	void setNumberOfPerson(const int iNumberOfPerson);
	void setExpensePerperson(const float iExpensePerperson);
	void setExpenseTotal(const float iExpenseTotal);
	void calculexpense();
	void enterPersons();
	void addPersons(string name, string phoneNumber, float expenses);
	void calculPaybackPersons();

/*CECI EST UN TEST*/
private:
	int _numberOfPerson;
	float _expensePerperson;
	float _expenseTotal;

};
#endif /* GROUP_HPP_ */

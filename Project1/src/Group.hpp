/*
 * Group.hpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#ifndef GROUP_HPP_
#define GROUP_HPP_
#include <string>
using namespace std;


class Group{
public:
	Group();
	~Group();

	int getNumberOfPerson() const;
	float getExpensePerperson() const;

	float getExpenseTotal() const;
	void setNumberOfPerson(const int iNumberOfPerson);
	void setExpensePerperson(const float iExpensePerperson);
	void setExpenseTotal(const float iExpenseTotal);

private:
	int _numberOfPerson;
	float _expensePerperson;
	float _expenseTotal;

};
#endif /* GROUP_HPP_ */

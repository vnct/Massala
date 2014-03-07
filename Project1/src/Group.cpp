/*
 * Group.cpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#include "Group.hpp"
#include <vector>
Group::Group()
{
	_numberOfPerson=0;
	_expensePerperson=0;
	_expenseTotal=0;
}
Group::Group(int NumberofPerson)
{
	_numberOfPerson=NumberofPerson;
	_expensePerperson=0;
	_expenseTotal=0;
}
Group::~Group()
{

}
int Group::getNumberOfPerson() const
{
	return _numberOfPerson;
}
float Group::getExpensePerperson() const
{
	return _expensePerperson;
}
float Group::getExpenseTotal() const
{
	return _expenseTotal;
}
void Group::setNumberOfPerson(const int iNumberOfPerson)
{
	_numberOfPerson=iNumberOfPerson;
}
void Group::setExpensePerperson(const float iExpensePerperson)
{
	_expensePerperson=iExpensePerperson;
}
void Group::setExpenseTotal(const float iExpenseTotal)
{
	_expenseTotal=iExpenseTotal;
}
void Group::calculexpense(vector<Person> tperson)
{
	for(int unsigned i=0;i < tperson.size();i++)
	{
		_expenseTotal += tperson[i].getExpenses();
	}
	_expensePerperson = _expenseTotal / _numberOfPerson;
}


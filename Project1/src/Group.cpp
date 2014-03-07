/*
 * Group.cpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#include "Group.hpp"
Group::Group()
{

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


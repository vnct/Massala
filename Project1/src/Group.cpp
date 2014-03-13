/*
 * Group.cpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#include "Group.hpp"
#include <vector>
#include <iostream>
using namespace std;
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
void Group::calculexpense()
{
	for(int unsigned i=0;i < this->size();i++)
	{
		_expenseTotal += this->at(i).getExpenses();
	}
	_expensePerperson = _expenseTotal / _numberOfPerson;
}
void Group::enterPersons()
{
	float expenses;
	string name,phone;
	for(int i=0;i< _numberOfPerson ;i++)
	{
		cout << "Name person" << endl;
		cin >> name;
		cout << "Number tel" << endl;
		cin >> phone;
		//	P1.setPhoneNumber(sname);
		cout << "Expenses" << endl;
		cin >> expenses;
		Person person(name,phone,expenses);
		this->push_back(person);

	}
}
void Group::addPersons(string name, string phoneNumber, float expenses)
{
	Person person(name,phoneNumber,expenses);
	this->push_back(person);
	_numberOfPerson++;
}
void Group::calculPaybackPersons()
{
	for(int unsigned i = 0; i < this->size();i++)
		{
			this->at(i).CalculPayback(this->getExpensePerperson());
			cout << "Owed of Person number" << i+1 << " : " << this->at(i).getPayBack() << endl;
		}
}

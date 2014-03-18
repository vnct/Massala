/*
 * Person.cpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#include "Person.hpp"
#include "Group.hpp"

Person::Person()
{
	_expenses=0;
	_payback=0;
}

Person::~Person() {

}
Group* Person::getGroup()
{
	return _group;
}
void Person::setGroup(Group *iGroup)
{
	_group = iGroup;
}

const string& Person::getName() const {
	return _name;
}

const string& Person::getPhoneNumber() const{
	return _phoneNumber;
}
float Person::getExpenses() const{
	return _expenses;
}
float Person::getPayBack() const{
	return _payback;
}
void Person::setName(const string& iName)
{
	_name=iName;
}
void Person::setPhoneNumber(const string& iPhoneNumber)
{
	_phoneNumber=iPhoneNumber;
}
void Person::setExpenses(const float iExpenses)
{
	_expenses=iExpenses;
}
void Person::setPayBack(const float iPayback)
{
	_payback=iPayback;
}

void Person::operatePayback(const float iExpensesPerPerson) {
    _payback = _expenses - iExpensesPerPerson;
}

/*
 * Person.cpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */


#include "Person.hpp"
Person::Person()
{

}

Person::~Person()
{

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



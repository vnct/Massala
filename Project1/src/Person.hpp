/*
 * Person.hpp
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>
using namespace std;


class Person{
public:
	Person();
	Person(const string& iName,const string& iPhoneNumber,const float iExpenses);
	~Person();

	const string& getName() const;
	const string& getPhoneNumber() const;
	float getExpenses() const;
	float getPayBack() const;
	void setName(const string& iName);
	void setPhoneNumber(const string& iPhoneNumber);
	void setExpenses(const float iExpenses);
	void setPayBack(const float iPayback);
	void CalculPayback(float depensetotal);


private:
	string _name;
	string _phoneNumber;
	float _expenses;
	float _payback;
};


#endif /* PERSON_HPP_ */

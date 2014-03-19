	/*
	 * Person.hpp
	 *
	 *  Created on: Feb 18, 2014
	 *      Author: aabou
	 */

	#ifndef PERSON_HPP_
	#define PERSON_HPP_

	#include <string>

	class Group;

	using namespace std;

	class Person{

	public:
		Person();
		virtual ~Person();
		void operatePayback(const float iExpensesPerPerson);
		const string& getName() const;
		const string& getGroupName() const;
		const string& getPhoneNumber() const;
		float getExpenses() const;
		float getPayBack() const;
		Group* getGroup();
		void setGroup(Group *iGroup);
		void setName(const string& iName);
		void setGroupName(const string& iGroupName);
		void setPerson(const string& iName,const string& iPhoneNumber,const float iExpenses);
		void setPhoneNumber(const string& iPhoneNumber);
		void setExpenses(const float iExpenses);
		void setPayBack(const float iPayback);

	private:
		string _name;
		string _phoneNumber;
		string _groupName;
		Group *_group;
		float _expenses;
		float _payback;
	};

	#endif /* PERSON_HPP_ */

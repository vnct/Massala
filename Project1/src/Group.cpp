/*
 * Group.cpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#include "Group.hpp"

Group::Group() {

}
Group::Group(int iNbPerson, const string& iNameg) :
_name(iNameg),
_nbPerson(iNbPerson)
{

}

Group::~Group() {

}


const string& Group::getName() const {
	return _name;
}
void Group::setName(const string& iName)
{
	_name=iName;
}

float Group::totalExpenses() const {
    float aTotal = 0;
    for (size_t i=0; i < this->size(); i++) {
        aTotal += this->at(i).getExpenses();
    }
    return aTotal;
}

float Group::expensesPerPerson() const {
    float aExpense = this->totalExpenses() / this->size();
    return aExpense;
}


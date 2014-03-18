/*
 * Group.hpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#ifndef GROUP_HPP_
#define GROUP_HPP_


#include "Person.hpp"
#include <string>
#include <vector>

class Group : public vector<Person> {

public:
    Group();
    virtual ~Group();

    const string& getName() const;
    void setName(const string& iName);

    float totalExpenses() const;
    float expensesPerPerson() const;

private:
    string _name;
};

#endif /* GROUP_HPP_ */

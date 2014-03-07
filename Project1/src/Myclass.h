/*
 * Myclass.h
 *
 *  Created on: 7 mars 2014
 *      Author: lapie
 */

#ifndef MYCLASS_H_
#define MYCLASS_H_
#include <iostream>
#include <string.h>
using namespace std;

class Myclass {
private:
	char* _montring;
public:
	Myclass() : _montring() {}
	int monstring(char* String_);
};

#endif /* MYCLASS_H_ */



/*
 * Csv.hpp
 *
 *  Created on: 19 mars 2014
 *      Author: lapie
 */

#ifndef CSV_HPP_
#define CSV_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "Group.hpp"
class Group;

	class Csv{

	public:
		Csv();
		vector<string> getLigneCSV();
		vector<Group> setGroup(vector<string> contenu_fichier);
		const string& getName() const;
		vector<string> split(const string &s, char delim);
		vector<string> &split(const string &s, char delim, vector<string> &elems);
		void setName(const string& iNameFile);

	private:
		string _namefile;
	};

#endif /* CSV_HPP_ */

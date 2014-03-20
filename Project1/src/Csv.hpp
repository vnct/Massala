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
		virtual ~Csv();
		vector<string> getLigneCSV();
		vector<Group> fillGroup(vector<string> contenu_fichier);
		const string& getName() const;
		vector<string> split(const string &my_string_to_split, char char_separator) ;
		vector<string> &split(const string &my_string_to_split, char char_separator, vector<string> &element_string);
		void setName(const string& iNameFile);

	private:
		string _namefile;
	};

#endif /* CSV_HPP_ */

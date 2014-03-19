/*
 * Csv.cpp
 *
 *  Created on: 19 mars 2014
 *      Author: lapie
 */

#include "Csv.hpp"
Csv::Csv() {

}
vector<string> &Csv::split(const string &s, char delim, vector<string> &elems) {
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

vector<string> Csv::split(const string &s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, elems);
	return elems;
}
vector<Group> Csv::getData(const string& iNameFile)
{
	// ICI on écrit la fonction qui va lire le fichier
	vector<Group> mesgroupes;

	string mon_fichier = iNameFile;  // je stocke dans la chaîne mon_fichier le nom du fichier à ouvrir
	ifstream fichier(mon_fichier.c_str(), ios::in);
	if(fichier)  // si l'ouverture a réussi
	{
		// instructions
		string ligne;
		vector<string> myperson;
		vector<Person> persons;
		unsigned int groupeexistant=1;
		while(getline(fichier, ligne))
		{
			Person aPerson;
			myperson = split(ligne,',');
			aPerson.setName(myperson.at(0));
			aPerson.setPhoneNumber(myperson.at(1));
			aPerson.setExpenses(atof(myperson.at(2).c_str()));
			aPerson.setGroupName(myperson.at(3));
			persons.push_back(aPerson);

			if(mesgroupes.size()==0)
			{
				mesgroupes.push_back(Group(myperson.at(3)));
			}
			for(unsigned int j=0; j < mesgroupes.size(); j++)
			{
				groupeexistant= mesgroupes.at(j).getName().compare(myperson.at(3));
				if(groupeexistant==0)
				{break;}
			}
			if(groupeexistant!=0)
			{
				mesgroupes.push_back(Group(myperson.at(3)));
			}
		}

		fichier.close();  // on referme le fichier
		for(unsigned int k=0; k < persons.size(); k++)
		{
			int index;
			for(unsigned int j=0; j < mesgroupes.size(); j++)
			{
				groupeexistant= mesgroupes.at(j).getName().compare(persons.at(k).getGroupName());
				if(groupeexistant==0)
				{index=j;break;}
			}
			cout << index;
			if(groupeexistant==0)
			{
				persons.at(k).setGroup(&mesgroupes[index]);
				mesgroupes[index].push_back(persons.at(k));

			}
		}

	}
	else  // sinon
	{
		cerr << "Erreur à l'ouverture !" << endl;
	}

	return mesgroupes;
}
const string& Csv::getName() const
{
	return _namefile;
}
void Csv::setName(const string& iNameFile)
{
	_namefile=iNameFile;
}



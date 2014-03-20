/*
 * Csv.cpp
 *
 *  Created on: 19 mars 2014
 *      Author: lapie
 */

#include "Csv.hpp"
Csv::Csv() {

}
Csv::~Csv() {

}


vector<string> &Csv::split(const string &my_string_to_split, char char_separator, vector<string> &element_string) {
	stringstream ss(my_string_to_split);
	string item;
	while (getline(ss, item, char_separator)) {
		element_string.push_back(item);
	}
	return element_string;
}

vector<string> Csv::split(const string &my_string_to_split, char char_separator) {
	vector<string> element_string;
	split(my_string_to_split, char_separator, element_string);
	return element_string;
}
vector<string> Csv::getLigneCSV()
{
	vector<string> meslignes; // tableau de string meslignes pour stocker chaque ligne du fichier
	string mon_fichier = _namefile;  // je stocke dans la chaîne mon_fichier le nom du fichier à ouvrir
	ifstream fichier(mon_fichier.c_str(), ios::in);
	if(fichier)  // si l'ouverture a réussi
	{
		string ligne;
		while(getline(fichier, ligne)) // pour chaque ligne du fichier
		{
			meslignes.push_back(ligne); //on ajoute la ligne dans le tableau de string meslignes
		}
		fichier.close();  // on referme le fichier
	}
	else  // sinon
	{
		cerr << "Erreur à l'ouverture !" << endl;
	}
	return meslignes; // on retourne toutes les lignes récupérées dans tableau de string meslignes

}
vector<Group> Csv::fillGroup(vector<string> contenu_fichier)
{
	vector<Group> mesgroupes; // déclaration de tous les groups
	vector<string> myperson; // déclaration d'un tableau de string pour récuperer le contenu d'une personne après le split de la ligne
	vector<Person> persons; // déclaration d'un tableau pour stocker chaque personne du fichier
	unsigned int groupeexistant=1;
	for(unsigned int a=0; a < contenu_fichier.size(); a++)
	{
		Person aPerson;
		myperson = split(contenu_fichier.at(a),','); // on split la ligne du CSV en un tableau de string
		aPerson.setName(myperson.at(0)); // emplacement 0 est le nom de la personne
		aPerson.setPhoneNumber(myperson.at(1)); // emplacement 1 est le telephone de la personne
		aPerson.setExpenses(atof(myperson.at(2).c_str())); //  emplacement 2 est la personne
		aPerson.setGroupName(myperson.at(3)); // on récupère le nom du groupe
		persons.push_back(aPerson); // on ajoute la personne récupérée dans le tableau de personnne
		if(mesgroupes.size()==0) // on regarde si des groupes existes, si NON
		{
			mesgroupes.push_back(Group(myperson.at(3))); // on créé un premier group
		}
		for(unsigned int j=0; j < mesgroupes.size(); j++) // on parcours tous les groupes
		{
			groupeexistant= mesgroupes.at(j).getName().compare(myperson.at(3));
			if(groupeexistant==0) // si le groupe existe alors tant mieux, on sort
			{break;}
		}
		if(groupeexistant!=0) // si le groupe n'existe pas
		{
			mesgroupes.push_back(Group(myperson.at(3))); // on créé le nouveau groupe.
		}
	}
	for(unsigned int k=0; k < persons.size(); k++) // pour chaque personne
	{
		int index;
		for(unsigned int j=0; j < mesgroupes.size(); j++)
		{
			groupeexistant= mesgroupes.at(j).getName().compare(persons.at(k).getGroupName());
			if(groupeexistant==0) // on récupère son group et l'adresse du groupe
			{index=j;break;}

		}
		if(groupeexistant==0) // le group est forcément existant
		{
			persons.at(k).setGroup(&mesgroupes[index]); // on associe l'adresse du groupe
			mesgroupes[index].push_back(persons.at(k)); // on ajoute la personne à son group

		}
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



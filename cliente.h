//
#pragma once

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class cliente{
	string nom;
	string apel;
public:
	cliente (string, string);
	string getNom();
	string getApel();

	void setNom(string);
	void getApel(string);

	string toString();
};
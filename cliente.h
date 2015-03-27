//
#pragma once

#include <string>
#include <sstream>

using std::stringstream;
using std::string;

class Cliente{
	string nom;
	string apel;
public:
	Cliente (string, string);
	string getNom();
	string getApel();

	void setNom(string);
	void getApel(string);

	string toString();
};
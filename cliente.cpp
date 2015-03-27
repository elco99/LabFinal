#include "Cliente.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

Cliente::Cliente (string nom, string apel){
	this->nom = nom;
	this->apel = apel;
}

string Cliente::getNom(){
	return nom;
}

string Cliente::getApel(){
	return apel;
}

void Cliente::setNom(string nom){
	this->nom = nom;
}

void Cliente::getApel(string apel){
	this->apel = apel;
}

string Cliente::toString(){
	stringstream ss;
	ss << "Cliente: " << nom << " " << apel;
	return ss.str();
}

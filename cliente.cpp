#include "cliente.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

cliente::cliente (string nom, string apel){
	this->nom = nom;
	this->apel = apel;
}

string cliente::getNom(){
	return nom;
}

string cliente::getApel(){
	return apel;
}

void cliente::setNom(string nom){
	this->nom = nom;
}

void cliente::getApel(string apel){
	this->apel = apel;
}

string cliente::toString(){
	stringstream ss;
	ss << "Cliente: " << nom << " " << apel;
	return ss.str();
}

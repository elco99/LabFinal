#include <string>
#include "cliente.h"
#include "educativo.h"
#include <sstream>

using std::string;
using std::stringstream;

Educativo::Educativo(double volumen,double peso,double precio,Cliente& client, double tasa):Producto(volumen, peso, precio, client){
	this->tasa = tasa;
}

double Educativo::getTasa(){
	return tasa;
}

void Educativo::setTasa(double tasa){
	this->tasa = tasa;
}

string Educativo::toString(){
	stringstream ss;
	ss << "Precio total final: " << (tasa * getTasa());
	return ss.str();
}
#include <string>
#include "cliente.h"
#include "educativo.h"
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
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
double Educativo::cobrarImpuesto()const{
	return (volumen * tasa) + precio;
}

string Educativo::toString()const{
	stringstream ss;
	ss<<Producto::toString()<<", Tipo: Educativo"<< ", Tasa: " <<tasa<< " Impuesto: " << (cobrarImpuesto()-precio) << " Total: "<<cobrarImpuesto() <<" ";
	return ss.str();
}
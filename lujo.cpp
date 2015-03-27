#include <string>
#include "producto.h"
#include <vector>
#include "cliente.h"
#include "lujo.h"
#include <sstream>

Lujo::Lujo(double tasa, double ,double volumen,double peso,double precio,Cliente client):Producto(volumen, peso,precio,cliente){
	this-> tasa = tasa;
}
double Lujo::getTasa(){
	return tasa;
}
void Lujo::setTasa(double tasa){
	this-> tasa = tasa;
}
virtual double Lujo::cobrarImpuesto(){
	return ( (tasa * peso) + (tasa * volumen) + precio);
}
string toString() const {
	stringstream ss;
	ss << Producto::toString() <<" , Tasa: "<< ", Impuesto: " <<(cobrarImpuesto() - precio);
	return ss;
}

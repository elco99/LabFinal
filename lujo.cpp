//Dany C  11341019
//David B 31211290
//Rene F 11341197
#include <string>
#include "producto.h"
#include <vector>
#include "cliente.h"
#include "lujo.h"
#include <sstream>

Lujo::Lujo(double tasa, double volumen,double peso,double precio,Cliente &cliente):Producto(volumen, peso,precio,cliente){
	this-> tasa = tasa;
}
double Lujo::getTasa(){
	return tasa;
}
void Lujo::setTasa(double tasa){
	this-> tasa = tasa;
}
double Lujo::cobrarImpuesto()const{
	return ( (tasa * peso) + (tasa * volumen) + precio);
}
string Lujo::toString() const {
	stringstream ss;
	ss << Producto::toString() <<", Tipo: Lujo"<< ", Tasa: " <<tasa<< ", Impuesto: " <<(cobrarImpuesto() - precio)<< ", Total: "<<cobrarImpuesto();
	return ss.str();
}

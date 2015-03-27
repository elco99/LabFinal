#include "producto.h"
#include "alcoholico.h"
#include <string>
#include <sstream>

using std::stringstream;

Alcoholico::Alcoholico(double volumen,double peso,double precio,Cliente client,double tasa):Producto(volumen,peso,precio,client),tasa(tasa){

}
double Alcoholico::getTasa()const{
	return tasa;
}
void Alcoholico::setTasa(double tasa){
	this-> tasa = tasa;
}
double Alcoholico::cobrarImpuesto(){
	double impuesto;
	impuesto = (peso+volumen)*tasa;
	return impuesto;
}

 string Alcoholico::toString()const{
 	stringstream ss;
 	ss << Producto::toString() << ", Tasa: "<< tasa << ", Impuesto: "<< (cobrarImpuesto() - precio);
 	return ss;
 }
//Dany C  11341019
//David B 31211290
//Rene F 11341197
#include "producto.h"
#include "alcoholico.h"
#include <string>
#include <sstream>

using std::stringstream;

Alcoholico::Alcoholico(double volumen,double peso,double precio,Cliente &client,double tasa):Producto(volumen,peso,precio,client),tasa(tasa){

}
double Alcoholico::getTasa()const{
	return tasa;
}
void Alcoholico::setTasa(double tasa){
	this-> tasa = tasa;
}
double Alcoholico::cobrarImpuesto()const{
	double impuesto;
	impuesto = (peso+volumen)*tasa ;
	return (impuesto+ precio);
}

 string Alcoholico::toString()const{
 	stringstream ss;
 	double impuesto = cobrarImpuesto() - getPrecio();
 	ss << Producto::toString() <<", Tipo: Alcoholico"<< ", Tasa: " <<tasa<< ", Impuesto: "<< impuesto<< " Total: "<< cobrarImpuesto() ;
 	return ss.str();
 }
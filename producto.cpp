#include <string>
#include <sstream>
#include "cliente.h"
#include "producto.h"

using std::string;
using std::stringstream;
//double,double,double,Cliente

Producto::Producto(double volumen,double peso,double precio,Cliente& cliente){
	this-> volumen = volumen;
	this->peso = peso;
	this->precio = precio;
	this->cliente = (&cliente);
}
Producto::Producto(const Producto& other):volumen(other.volumen),peso(other.peso),precio(other.precio),cliente(other.cliente){

}
double Producto::getVolumen()const{
	return volumen;
}
double Producto::getPeso()const{
	return peso;
}
double Producto::getPrecio()const{
	return precio;
}	
void Producto::setVolumen(double volumen){
	this->volumen = volumen;
}
void Producto::setPeso(double peso){
	this->volumen = volumen;
}
void Producto::setPrecio(double precio){
	this->precio = precio;
}
double Producto::cobrarImpuesto()const{
	return 0;
}

string Producto::toString()const{
	stringstream ss;
	ss << "Volumen: "<<volumen << ", Peso: "<<peso<<", Precio: "<<precio<<", Cliente: "<< cliente->toString();
	return ss.str();
}
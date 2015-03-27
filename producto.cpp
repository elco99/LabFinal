#include <string>
#include <sstream>
#include "cliente.h"

Producto::Producto(double volumen,double peso,double precio,Cliente client){
	this-> volumen = volumen;
	this->peso = peso;
	this->precio = precio;
	this->client = client;
}
Producto::Producto(const Producto& other):volumen(other.volumen),peso(other.peso),precio(other.precio),client(other.client){

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
double Producto::cobrarImpuesto(){
	return 0;
}
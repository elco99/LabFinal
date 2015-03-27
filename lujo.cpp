#include <string>
#include "producto.h"
#include <vector>
#include "cliente.h"
#include "lujo.h"

Lujo(double tasa, double ,double volumen,double peso,double precio,Cliente client):Producto(volumen, peso,precio,cliente){
	this-> tasa = tasa;
}
double getTasa(){
	return tasa;
}
void setTasa(double tasa){
	this-> tasa = tasa;
}
virtual double cobrarImpuesto(){
	return ( (tasa * peso) + (tasa * volumen) );
}
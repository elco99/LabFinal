//Dany C  11341019
//David B 31211290
//Rene F 11341197
#pragma once

#include <string>
#include "cliente.h"
using std::string;

class Producto{
protected: 
	double volumen;
	double peso;
	Cliente * cliente;
	double precio;
public:
	Producto(double,double,double,Cliente &);
	Producto(const Producto&);
	double getVolumen()const;
	double getPeso()const;
	double getPrecio()const;
	void setVolumen(double);
	void setPeso(double);
	void setPrecio(double);
	virtual double cobrarImpuesto()const;
	virtual string toString()const;
};
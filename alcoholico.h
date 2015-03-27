#pragma once
#include "producto.h"
#include "cliente.h"
#include <string>

using std::string;

class Alcoholico:public Producto{
	double tasa;
public:
	Alcoholico(double,double,double,Cliente,double);
	double getTasa()const;
	void setTasa(double);
	virtual double cobrarImpuesto();
};
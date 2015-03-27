//Dany C  11341019
//David B 31211290
//Rene F 11341197
#pragma once
#include "producto.h"
#include "cliente.h"
#include <string>

using std::string;

class Alcoholico:public Producto{
	double tasa;
public:
	Alcoholico(double,double,double,Cliente&,double);
	double getTasa()const;
	void setTasa(double);
	virtual double cobrarImpuesto()const;
	virtual string toString()const;
};
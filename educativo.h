//Dany C  11341019
//David B 31211290
//Rene F 11341197
#pragma once

#include <string>
#include "producto.h"
#include "cliente.h"

using std::string;

class Educativo:public Producto{
	double tasa;
public:
	Educativo(double,double,double,Cliente&,double);
	double getTasa();
	void setTasa(double);
	virtual string toString()const;
	virtual double cobrarImpuesto()const;
};
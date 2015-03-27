#pragma once

#include <string>
#include "cliente.h"

using std::string;

class Producto{
public:
	educativo(double,double,double,cliente,double);
	double getTasa();
	void setTasa(double);
	virtual string toString();
};
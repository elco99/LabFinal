//Dany C  11341019
//David B 31211290
//Rene F 11341197
#pragma once
#include <string>
#include "producto.h"
#include "cliente.h"

using namespace std;
class Lujo:public Producto{
 	double tasa;
public:

	Lujo(double, double, double, double, Cliente&);
	double getTasa();
	void setTasa(double);
	virtual double cobrarImpuesto()const;
	virtual string toString() const;
};

#pragma once
#include <string>
#include "producto.h"
#include <vector>
#include "cliente.h"

using namespace std;
class Lujo:public Producto{
 	double tasa;
public:

	Lujo(double, double, double, double, Cliente);
	double getTasa();
	void setTasa(double);
	virtual double cobrarImpuesto();
};

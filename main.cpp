//Dany C  11341019
//David B 31211290
//Rene F 11341197
#include <iostream>
#include <cmath>
#include "lujo.h"
#include "producto.h"
#include "alcoholico.h"
#include "cliente.h"
#include <string>
#include <vector>
#include <fstream>
#include "educativo.h"

using namespace std;

int main(int argc, char * argv[]){
	int op;
	vector<Cliente*> clients;
	vector<Producto*> lista;
	double tasa1,tasa2,tasa3;
	cout << "Ingrese la tasa de los productos Educativos"<<endl;
	cin >> tasa1;
	cout << "Ingrese la tasa de los productos Alcoholico"<<endl;
	cin >> tasa2;
	cout << "Ingrese la tasa de los productos Lujos"<<endl;
	cin >> tasa3;
	do{
		cout << "1.- Agregar Cliente" << endl
			 << "2.- Agregar Producto" << endl
			 << "3.- Historial" << endl
			 << "4.- Salir" << endl;
		cin >> op;

		switch(op){
			case 1:{//AGREGAR CLIENTES
				string nombre, apellido;
				cout << "1. -Agregar cliente" << endl
					 << "Ingrese nombre del cliente: " << endl;
				cin >> nombre;
				cout << "Ingrese apellido del cliente"<<endl;
				cin >> apellido;

				clients.push_back(new Cliente(nombre, apellido));
				//delete client;

			}break;
			case 2:{
				int op1;
				cout << "1. Educativo"<<endl
					 << "2. Alcoholico"<<endl
					 <<"3. Lujo"<<endl
					 <<"4.Salir"<<endl;
				cin >> op1;
				switch(op1){
					case 1:{//Educativo
						double volumen,peso,precio;
						int este; 
						Cliente tmp("","");
						cout << "Ingrese el volumen del producto Educativo"<<endl; 
						cin >> volumen; 
						cout <<"Ingrese el peso del producto Educativo"<<endl; 
						cin >> peso; 
						cout <<"Ingrese el precio del producto Educativo"<<endl; 
						cin >> precio; 
						cout << "------CLIENTE------"<<endl; 
						for(int i=0;i < clients.size();i++){ 
							cout << i << ") " <<clients.at(i)->toString()<<endl; 
						} 
						cout << "Ingrese el cliente que compro el producto."<<endl; 
						cin >> este;
						lista.push_back(new Educativo(volumen,peso,precio,*clients.at(este),tasa1));

					}break;//FIN EDUCATIVO
					case 2:{//ALCOHOLICO
						double volumen,peso,precio;
						int este; 
						Cliente tmp("","");
						cout << "Ingrese el volumen del producto alcoholico"<<endl; 
						cin >> volumen; 
						cout <<"Ingrese el peso del producto alcoholico"<<endl; 
						cin >> peso; 
						cout <<"Ingrese el precio del producto alcoholico"<<endl; 
						cin >> precio; 
						cout << "------CLIENTE------"<<endl; 
						for(int i=0;i < clients.size();i++){ 
							cout << i << ") " <<clients.at(i)->toString()<<endl; 
						} 
						cout << "Ingrese el cliente que compro el producto."<<endl; 
						cin >> este;
						lista.push_back(new Alcoholico(volumen,peso,precio,*clients.at(este),tasa2));
					}break;//FIN ALCOHOLICO
					case 3:{//LUJO
						double volumen,peso,precio;
						int este; 
						Cliente tmp("","");
						cout << "Ingrese el volumen del producto Lujo"<<endl; 
						cin >> volumen; 
						cout <<"Ingrese el peso del producto Lujo"<<endl; 
						cin >> peso; 
						cout <<"Ingrese el precio del producto Lujo"<<endl; 
						cin >> precio; 
						cout << "------CLIENTE------"<<endl; 
						for(int i=0;i < clients.size();i++){ 
							cout << i << ") " <<clients.at(i)->toString()<<endl; 
						} 
						cout << "Ingrese el cliente que compro el producto."<<endl; 
						cin >> este;
						lista.push_back(new Lujo(tasa3,volumen,peso,precio,*clients.at(este)));

					}break;//FIN LUJO
					case 4:{//SALIR
						break;
					}break;//FIN SALIR
				}//FIN SWITCH PRODUCTO

			}break;
			case 3:{//historial
				for(int i =0; i < lista.size();i++){
					cout << (*lista[i]).toString()<<endl;
				}
				
			}break;
			default:{//salir
				break;
			}break;



		}//FIN SWITCH MAIN MENU	

	}while(op <4);

}
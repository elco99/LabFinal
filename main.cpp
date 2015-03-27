#include <iostream>
#include <cmath>
#include "lujo.h"
#include "producto.h"
#include "alcoholico.h"
#include "cliente.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]){
	int op;
	vector<Cliente*> clients;
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
				cout << "Ingrese apellido del cliente";
				cin >> apellido;

				clients.push_back(new Cliente(nombre, apellido));
				//delete client;
				cout << (clients.at(0)->toString());

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

					}break;//FIN EDUCATIVO
					case 2:{//ALCOHOLICO
						double volumen,peso,precio;
						int este; 
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
					}break;//FIN ALCOHOLICO
					case 3:{//LUJO

					}break;//FIN LUJO
					case 4:{//SALIR

					}break;//FIN SALIR
				}//FIN SWITCH PRODUCTO

			}break;
			case 3:{
				
			}break;
			default:{
				break;
			}break;



		}//FIN SWITCH MAIN MENU	

	}while(true);

}
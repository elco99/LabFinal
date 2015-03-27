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
	do{
		cout << "1.- Agregar Cliente" << endl
			 << "2.- Agregar Producto" << endl
			 << "3.- Historial" << endl
			 << "4.- Salir" << endl;
		cin >> op;

		switch(op){
			case 1:{//AGREGAR CLIENTES

			}break;
			case 2:{
				int op1;
				cout << "1. Educativo"<<endl
					 << "2. Alcoholico"<<endl
					 <<"3. Lujo"<<endl<<
					 <<"4.Salir"<<endl;
				cin >> op1;
				switch(op1){
					case 1:{//Educativo

					}break;//FIN EDUCATIVO
					case 2:{//ALCOHOLICO

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
/*
Crear un programa que pida al usuario ingresar dos números enteros y almacenarlos en variables int.
Calcular la suma, resta, multiplicación y división de los dos números e imprimir los resultados.
*/

#include<iostream>

using namespace std;

int main() {
	int numero1, numero2;
	string operacion;
	
	cout<<"Ingrese el numero 1: ";
	cin>>numero1;
	
	cout<<"Ingrese el numero 2: ";
	cin>>numero2;
	
	cout<<"Ingrese la operacion que desea: ";
	cin>>operacion;
	
	if(operacion == "suma") {
		cout<<"SUMA: "<<numero1 + numero2<<endl;
	}
	else if(operacion == "resta") {
		cout<<"RESTA: "<<numero1 - numero2<<endl;
	}
	else if(operacion == "division") {
		cout<<"DIVISION: "<<numero1 / numero2<<endl;
	}
	else if(operacion == "multiplicacion") {
		cout<<"MULTIPLICACION: "<<numero1 * numero2<<endl;
	}
	
	return 0;
}

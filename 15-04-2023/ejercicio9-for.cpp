/*
Ingrese un numero int, y muestre por pantalla la tabla de multiplicacion del 1 al 12.
*/

#include<iostream>

using namespace std;

int main() {
	int numero, inicio, fin;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	cout<<"Ingrese un rango: ";
	cin>>inicio>>fin;
	
	for(int i = inicio; i <= fin; i++) {
		cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
	}

	return 0;
}

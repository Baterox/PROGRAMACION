/*
Ingrese un numero int, y muestre por pantalla la tabla de multiplicacion del 1 al 12.
*/

#include<iostream>

using namespace std;

int main() {
	int numero, iterador, inicio, fin;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	cout<<"Ingrese un rango: ";
	cin>>inicio>>fin;
	
	iterador = inicio;
	
	while(iterador <= fin) {
		cout<<numero<<" x "<<iterador<<" = "<<numero*iterador<<endl;
		iterador++;
	}

	return 0;
}

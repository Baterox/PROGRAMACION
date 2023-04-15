/*
Crear un programa que pida al usuario ingresar dos números enteros y determinar si el primero es mayor,
menor o igual al segundo. Imprimir el resultado.
*/

#include<iostream>

using namespace std;

int main() {
	int numero1, numero2;
	
	cout<<"Ingrese 2 numeros: ";
	cin>>numero1>>numero2;
	
	if(numero1 > numero2) {
		cout<<"El numero 1 es mayor al 2"<<endl;
	}
	else if(numero1 < numero2) {
		cout<<"El numero 1 es menor al 2"<<endl;
	}
	else {
		cout<<"Ambos numeros son iguales"<<endl;
	}
	
	
	
	return 0;
}

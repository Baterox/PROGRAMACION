/*
Crear un programa que pida al usuario ingresar un número entero y determinar si es par o impar.
Imprimir el resultado.
*/

#include<iostream>

using namespace std;

int main() {
	
	int numero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero%2 == 0) {
		cout<<"El numero es par"<<endl;
	}
	else {
		cout<<"El numero es impar"<<endl;
	}
	
	
	
	return 0;
}

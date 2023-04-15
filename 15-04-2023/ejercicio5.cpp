/*
Crear un programa que pida al usuario ingresar un número entero y determinar si es positivo,
negativo o cero. Imprimir el resultado.
*/

#include<iostream>

using namespace std;

int main() {
	
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero > 0) {
		cout<<"El numero es positivo"<<endl;
	}
	else if(numero < 0) {
		cout<<"El numero es negativo"<<endl;
	}
	else {
		cout<<"El numero es 0"<<endl;
	}
	
	
	
	return 0;
}

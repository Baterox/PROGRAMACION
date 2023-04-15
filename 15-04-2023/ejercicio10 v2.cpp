// imprimir los numeros divisibles de un entero int ingresado por teclado

#include<iostream>

using namespace std;

int main() {
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	bool esPrimo = true;
		
	for(int i = 2; i <= numero/2; i++) {
		if(numero % i == 0) {
			esPrimo = false;
		}
	}
	
	if(esPrimo) {
		cout<<"El numero es primo";
	}
	else {
		cout<<"El numero no es primo";
	}
	
	return 0;
}

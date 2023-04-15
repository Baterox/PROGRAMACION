// imprimir los numeros divisibles de un entero int ingresado por teclado

#include<iostream>

using namespace std;

int main() {
	int numero;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	int contador_divisores = 0;
	
	for(int i = 1; i <= numero; i++) {
		if(numero % i == 0) {
			contador_divisores++;
		}
	}
	
	if(contador_divisores == 2) {
		cout<<"El numero es primo";
	}
	else {
		cout<<"El numero no es primo";
	}
	
	return 0;
}

/*
Crear un programa que pida al usuario ingresar un carácter y determinar si es una vocal o no.
Imprimir el resultado.
*/

#include<iostream>

using namespace std;

int main() {
	
	char caracter;
	cout<<"Ingrese un caracter: ";
	cin>>caracter;
	
	if(caracter == 'a' or caracter == 'e' or caracter == 'i' or caracter == 'o' or caracter == 'u') {
		cout<<"Es una vocal"<<endl;
	}
	else {
		cout<<"No es una vocal"<<endl;
	}
	
	
	return 0;
}

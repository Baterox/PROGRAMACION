/*
Crear un programa que pida al usuario ingresar un año y determinar si es bisiesto o no.
Imprimir el resultado.

Un año es bisiesto cuando es divisible por 4 y no divisible por 100, o es divisible por 400.

2012.
2016.
2020.
2024.
2028.
2032.
2036

*/

// and: && ó and
// or: || ó or

#include<iostream>

using namespace std;

int main() {
	
	int anio;
	cout<<"Ingrese un anio: ";
	cin>>anio;
	
	if((anio % 4 == 0 and anio % 100 != 0) or anio % 400 == 0) {
		cout<<"El anio es bisiesto"<<endl;
	}
	else {
		cout<<"El anio no es bisiesto"<<endl;
	}
	
	return 0;
}

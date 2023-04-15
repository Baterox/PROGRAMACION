/*
Crear un programa que pida al usuario ingresar su nombre y apellido, para almacenarlos en variables de tipo string.
Concatenar las dos palabras e imprimir el resultado.
*/

#include<iostream>

using namespace std;

int main() {
	
	string nombre, apellido, nombre_completo;
	
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	
	cout<<"Ingrese su apellido: ";
	cin>>apellido;
	
	nombre_completo = nombre + " " + apellido;
	
	cout<<nombre_completo;
	
	
	return 0;
}

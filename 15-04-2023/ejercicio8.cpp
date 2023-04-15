/*
PIDA AL USUARIO QUE INGRESE SI PUEDE SALIR DE VIAJE. SOLO PUEDE IR SI ES MAYOR DE EDAD O TIENE EL PERMISO DE SU MAMÁ.
*/

#include<iostream>

using namespace std;

int main() {
	int edad;
	bool permisoMama;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	cout<<"Ingrese si la mama le da permiso: ";
	cin>>permisoMama;
	
	if(edad >= 18 or permisoMama == true) {
		cout<<"Puedes salir de viaje"<<endl;
	}
	else {
		cout<<"No puedes salir de viaje"<<endl;
	}
	
	return 0;
}

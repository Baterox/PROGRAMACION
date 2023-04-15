// EXTRAER TODOS LOS DIGITOS DE UN NUMERO

#include<iostream>

using namespace std;

int main() {
	
	int numero, numerotemp;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	numerotemp = numero;
	
	while(numerotemp != 0) {
		cout<<numerotemp%10<<" ";
		numerotemp /= 10;
	}
	
	cout<<endl<<endl;
	
	for(int i = numero; i != 0; i /= 10) {
		cout<<i%10<<" ";
	}
	
	return 0;
}

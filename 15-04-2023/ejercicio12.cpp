/*
Un corredor demora x segundos en dar una vuelta a la pista atl�tica. Se sabe que cada 3 vueltas 
su rendimiento decrece, demor�ndose un 20% m�s del tiempo en dar una vuelta. En base a lo 
anterior, se pide desarrollar un programa que lea el n�mero de vueltas que dar� el corredor y 
el tiempo que demora en la primera vuelta (un dato por l�nea). El programa debe imprimir el 
tiempo que demorar� en dar las n vueltas.
*/

#include<iostream>

using namespace std;

int main() {
	int vueltas;
	float tiempo_total = 0, tiempo_primera_vuelta;
	
	cout<<"Ingrese la cantidad de vueltas: ";
	cin>>vueltas;
	
	cout<<"Ingrese el tiempo en dar la primera vuelta: ";
	cin>>tiempo_primera_vuelta;
	
	for(int i = 1; i <= vueltas; i++) {
		tiempo_total += tiempo_primera_vuelta;
		if(i%3==0) {
			tiempo_primera_vuelta *= 1.2;
		}
	}
	
	cout<<"El atleta se demora "<<tiempo_total;
	
	
	return 0;
}

/*
Un corredor demora x segundos en dar una vuelta a la pista atlética. Se sabe que cada 3 vueltas 
su rendimiento decrece, demorándose un 20% más del tiempo en dar una vuelta. En base a lo 
anterior, se pide desarrollar un programa que lea el número de vueltas que dará el corredor y 
el tiempo que demora en la primera vuelta (un dato por línea). El programa debe imprimir el 
tiempo que demorará en dar las n vueltas.
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

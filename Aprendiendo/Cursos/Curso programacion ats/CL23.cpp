/* CICLOS y BUCLES
Ejercicio: Realizar un programa que calcule y muetre en la salida estándar la suma de 
los cuadrados de los primeros 10 enteros mayores que cero.
*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
// Mi código:
	int t,h,n = 0;
	for(int i=1; i<=10; i++){
		t = i * i;	
		n = n + t;
		cout<<"La suma de los primeros "<<i<<" cuadrados son: "<<n<<endl;				
	}
	getch();
// Código vídeo:
	
	int suma = 0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma = suma + cuadrado; // suma += cudrado;

	}	
	cout<<"El resultado de la suma es: "<<suma;
	getch();
	
	
	
	return 0;
}

// 22- EJERCICIOS: CICLOS y BUCLES
/*

Ejercicio: Realizar un programa que solicite de la entrada estándar un número enterio
del 1 al 10 y muestre en la salida estándar en su tabla de multiplicar.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
// Mi solución:
	int i, n, t;
	cin>>n;
	for(i=1;i<=10;i++){
		t=n;
		n=i*n;
		cout<<n<<endl;
		n=t;
	}	
	getch();  // Permite detener el proceso hasta este lugar del código
//Escribiremos la solución dada en el vídeo	
	int numero;
	
	do{
		cout<<"Digite un número: "; cin>>numero;
	}while((numero<1) || (numero>10));


	for(int h=1; h<=20;h++){
		cout<<numero<<" * "<<h<< " = "<<numero*h<<endl;		
	}

// Vemos que el proceso del vídeo es más sencillo
	return 0;
}

// 22- EJERCICIOS: CICLOS y BUCLES
/*

Ejercicio: Realizar un programa que solicite de la entrada est�ndar un n�mero enterio
del 1 al 10 y muestre en la salida est�ndar en su tabla de multiplicar.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
// Mi soluci�n:
	int i, n, t;
	cin>>n;
	for(i=1;i<=10;i++){
		t=n;
		n=i*n;
		cout<<n<<endl;
		n=t;
	}	
	getch();  // Permite detener el proceso hasta este lugar del c�digo
//Escribiremos la soluci�n dada en el v�deo	
	int numero;
	
	do{
		cout<<"Digite un n�mero: "; cin>>numero;
	}while((numero<1) || (numero>10));


	for(int h=1; h<=20;h++){
		cout<<numero<<" * "<<h<< " = "<<numero*h<<endl;		
	}

// Vemos que el proceso del v�deo es m�s sencillo
	return 0;
}

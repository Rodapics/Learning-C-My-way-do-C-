/* CICLOS O BUCLES:
Conjunto de instrucciones que se van a estar repitiendo y repitiendo mientras se este cumpliendo una condición.

WHILE:


	while(expresión lógica){
		conjunto de instrucciones;
	
	}


*/

#include<iostream>

#include<conio.h>  //Libreria que no permite que el ejecutable se cierre

using namespace std;

int main(){
	int i;			//Definir  la variable.
	
	i=1;			// Inicializar la variable la variable.
	
	while(i<=10){
		cout<<i<<endl;
		i++; //Permite aumentar en una unidad el valor de la variable i que estamos usando en el ciclo while		
	}
// Realizaremos lo mismo pero en orden inverso:

	i=10;			// Inicializar la variable la variable.
	
	while(i>=1){
		cout<<i<<endl;
		i--; //Permite aumentar en una unidad el valor de la variable i que estamos usando en el ciclo while		
	}	
	
	
	getch();    //Permite que los ejecutables no se cierren de manera inmediata al ejecutar un .exe
	return 0;
}

/* CICLOS o BUCLES:

Sentencia DO WHILE: Actua y Luego piensa.


	do{
		conjunto de intrucciones;
	}while(expresión lógica);

*/

#include<iostream>

#include<stdlib.h>   //Otra libreria que permite que no se cierre de manera inmediata el programa.


using namespace std;

int main(){
	int i;
	
	i = 1;
	
	do{
		cout<<i<<endl;
		i++; // aumenta el iterador en una unidad		
	}while(i<=10);
// Realizando el proceso contrario.
	system("pause"); 

	i = 10;
	
	do{
		cout<<i<<endl;
		i--; // decrementa el iterador en una unidad		
	}while(i>=1);

	system("pause");   //Realiza que tenga que presionar una tecla para continuar con el proceso realizado
	
	return 0;
}

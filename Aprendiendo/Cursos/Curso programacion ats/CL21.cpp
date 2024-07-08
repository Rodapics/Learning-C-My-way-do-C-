/* CICLOS O BUCLES:

La sentencia FOR:

	for(expr1;  expresi�n l�gica; expr2){
		conjunto de intrucciones;
	}


*/

// El for permite inicializar el interador debtri de la expresi�n.


#include<iostream>
#include<conio.h>     // Usamos una utilidad para que el proceso no termine.



using namespace std;

int main(){
	int i;   //Asignamos el espacio de la variable
	
	for(i=1; i<=10; i++){
		cout<<i<<endl;
	}
// Proceso Inverso:
	getch();  // Permite detener el proceso hasta este lugar del c�digo

	for(i=10; i>=1; i--){
		cout<<i<<endl;
	}
	getch();
	
	return 0;
}

/* Carlos Andres Rodallega Millan -17 de Julio del 2023

Escribir un programa quelea de la entrada est�ndar dos n�meros y muestre en la salida est�ndar su
suma, resta, multiplicaci�n ydivisi�n.

*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, suma = 0, resta = 0, multiplicacion =0, division=0;
	
	cout<<"Introduzca su primer numero, por favor:"; cin>>n1;
	cout<<"\n Introduzca su segundo n�mero, por favor:"; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\n La suma es:  "<<suma<<endl;
	cout<<"\n La resta es:  "<<resta<<endl;
	cout<<"\n La multiplicacion es:  "<<multiplicacion<<endl;
	cout<<"\n La division es:  "<<division<<endl;  // Para que la divisi�n sea exacta hay que cambiar la definici�n y que no sea entero.
	
	
	
	return 0;
}

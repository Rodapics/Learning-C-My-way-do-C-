/* Carlos Andres Rodallega Millan -17 de Julio del 2023

EXPRESIONES: Escribir la siguiente expresión en C++

*/

#include<iostream>

using namespace std;

int main(){
	float a, b, resultado = 0;
	
	cout<<"Digute el valor de a: "; cin>>a;
	cout<<"Digute el valor de b: "; cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout<<"El resultados es: "<<resultado<<endl; // Para redondear cout.presicion()
	
	
	return 0;
}

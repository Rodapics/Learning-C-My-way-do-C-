/* Carlos Andres Rodallega Millan -17 de Julio del 2023


Ejercicio: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:

	Edad: dato entero.
	Sexo: Dato de tipo carácter.
	Altura en metro: dato de tipo real.
	
*/

#include<iostream>

using namespace std;

int main(){
	
	int Edad;
	char Sexo[10]; //Esto leería 10 caracteres
	float Altura;
	
	cout<<"Introduzca su Edad, por favor:"; cin>>Edad;
	cout<<"Introduzca su Sexo,  por favor:"; cin>>Sexo;
	cout<<"Introduzca su Altura en metros, por favor:"; cin>>Altura;
	
	cout<<"\n Edad:"<<Edad<<endl;
	cout<<"\n Sexo:"<<Sexo<<endl;
	cout<<"\n Altura:"<<Altura<<"  mts"<<endl;
		
	return 0;
}


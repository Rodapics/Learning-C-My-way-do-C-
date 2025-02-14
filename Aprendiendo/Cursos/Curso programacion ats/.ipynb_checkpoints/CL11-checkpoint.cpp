/*
CONDICIONALES:


	if(condition){
		intrucciones 1;
	
	}
	else{
		intrucciones 2;
	
	}

*/

#include<iostream>

using namespace std;

int main(){
	
	int numero, dato = 5;
	
	cout<<"Digite el numero, por favor: ";
	cin>>numero;
	
	
	
	// Operador de igualdad.
	if(numero ==dato){
		cout<<"\nEl numero es 5";
		
	}
	else{
		cout<<"El numero es diferente de 5";
		
	}
	
cout<<"\nPasamos a operador de diferencia";

	// Operador de diferencia.
	if(numero != dato){
		cout<<"\nEl numero no es 5";
		
	}
	else{
		cout<<"\nEl numero es 5";
		
	}


cout<<"\nPasamos a operador de Mayor que";

	// Operador de mayor que.
	if(numero > dato){
		cout<<"\nEl numero es mayor que 5";
		
	}
	else{
		cout<<"\nEl numero es menor que 5";
		
	}
cout<<"\nPasamos a operador de Menor que";

	// Operador de mayor que.
	if(numero < dato){
		cout<<"\nEl numero es menor a 5";
		
	}
	else{
		cout<<"\nEl numero es mayor a 5";
		
	}



	return 0;
}

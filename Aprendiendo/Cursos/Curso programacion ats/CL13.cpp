// Problema 1: Escriba un programa que lea dos n�mero y determine cu�l de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	
	int numero_1, numero_2;
/*	
	cout<<"Por favor digite el primer numero:  "; cin>>numero_1;

	cout<<"Por favor digite el segundo numero:  ";
	cin>>numero_2;
*/

	cout<<"Digite 2 numeros: ";
	cin>>numero_1>>numero_2;	

	
	if(numero_1 > numero_2){
		cout<<"\n El primer n�mero es mayor al segundo";
	}
	else if(numero_1 < numero_2) {
		cout<<"\n El segundo n�mero es mayor al segundo ";
	}
	else if(numero_1 == numero_2){
		cout<<"\n Los n�meros son iguales";				
	}	
	else{
		cout<<"\n Los n�meros digitados son diferentes"; 
	}
	
	
	
	return 0;
}

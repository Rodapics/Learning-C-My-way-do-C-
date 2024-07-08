/*
Escribir un fragmento de programa que intercambie los valores de dos variables.


*/

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"Digite el valor de x, por favor:  "; cin>>x;
	cout<<"Digite el valor de y, por favor:  "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\n La variable x ahora es:  "<<x<<endl;
	cout<<"\n La variable y ahora es:  "<<y<<endl;
	
	
	return 0;
}

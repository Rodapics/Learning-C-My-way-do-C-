/*
Un pograma para una expresion

*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x,y , resultado = 0;
	
	cout<<"Digite el valor de x, por favor:  "; cin>>x;
	cout<<"Digite el valor de y, por favor:  "; cin>>y;	
	
	resultado = (sqrt(x))/((pow(y,2))-1);  // Funciones usadas: sqrt(), pow(lo que potencio, el grado a potenciar)
	
	cout<<"\n El resultado es:  "<<resultado<<endl;	

	
	
	return 0;
}


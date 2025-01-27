//39

// 27-01-2025

//Write a program that determines if a matrix is simetric or not.A matrix is simetric if
// 1- Squared. The number of rows is the same of the number of columns.
// 2- Its the same value to its transpose.

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main(){
	
	int numeros[100][100],filas,columnas;
	
	cout<<"Please, write the numbers of arrows: "; cin>>filas;
	cout<<"Please, write the numbers of colums: "; cin>>columnas;
	
	
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<"Please, write the number["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
		
	char band='v'; // we start with a positive band.
	
	if (filas==columnas){  
		for (int i=0; i<filas;i++){
 			for (int j=0; j<columnas;j++){
  				if (numeros[i][j]!=numeros[j][i]){ //We verify if for any number the relationship holds.
   				band='f';
   				break;
  				}
  			}			 
		}
	}

	if (band=='f' || filas!=columnas){
 		cout<<"NO son Simétricas";
	}
	else{
 		cout<<"SON simétricas";
	}	
	
	getch();
	return 0;
}





// 23-01-2025

// Arrays.

//Write a program that define a number vector and calculate the sum of its the elements.

#include<iostream>
#include<conio.h>
#include<cmath>


using namespace std; // cout & cin functionalities.


int main(){
	
	int numeros[]={1,2,3,4,5};
	
	int suma = 0;
	
	
	for(int i=0; i<5;i++){
		suma = suma + numeros[i];
	}
	
	cout<<"The sum of the number given is; "<<suma<<endl;
	getch();	
	return 0;
}

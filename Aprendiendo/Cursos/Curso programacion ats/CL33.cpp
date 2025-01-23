// 23-01-2025

// Arrays.

// Write a program that read the standard input of a number vector and determine the maximun element of 
// the vector.

#include<iostream>

#include<cmath>

#include<conio.h>

using namespace std;

int main(){
	
	int n;
	cout<<"\nWrite the number of elements of your number vector:"<<endl;
	cin>>n;
	
	
	int numeros[n];
	
	int mayor;
	
	//Now we need to write the elements asociated with each position.
	
	
	for(int i=0; i<n; i++){
		cout<<"\nPlease write the number for the vector in the position: "<<i<<endl;
		cin>>numeros[i];		
		
		if(numeros[i] > mayor){
			mayor = numeros[i];			
		}
	 
	}
		
	cout<<"The biggest number is: "<<mayor<<endl;
	getch();
	return 0;
}

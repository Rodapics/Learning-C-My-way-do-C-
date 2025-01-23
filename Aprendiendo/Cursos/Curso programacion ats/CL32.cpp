// 23-01-2025

// Arrays.

// Write a program that read the standard input of a number vector and show the standard output
// of the numbers of the vectors asociates with their index.

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int main(){
	int numeros[100];
	
	int n;
	
	cout<<"Write the numer of elements of your array: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		cout<<"\nSaving the elements of the vector in the position " <<i<<" is equal to: ";
		cin>>numeros[i];
		}
	
	
	for(int i= 0; i<n; i++){
		cout<<i<<" is the number of the element "<<numeros[i]<<endl;
		
	}
	
	getch();
	return 0;
}

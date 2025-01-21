// 27
// 20-01-2025

//Write a program that calculates the value of 2^1 + 2^2 + 2^3 + .....

// Calculates the sum of the powers of n.


#include<iostream>

#include<conio.h>
#include<stdlib.h> // here we would like to used the function SYTEM PAUSE.

#include <cmath>  // Necesario para pow()



using namespace std;

int main(){
	int n, value =0;
	
	cout<<"Please write the value n for the calcualtion ";
	cin>>n;

	for(int i= 1 ; i<=n; i++){
		value =  value + pow(2,i);			
	}

	cout<<"The value is "<<value<<endl;

return 0;	
}


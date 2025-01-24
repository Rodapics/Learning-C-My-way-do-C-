//24-01-2025

//33.

// Write a program that define two caractheres vector and then storage them in a new vector.

// At the beggining must be the elements of the first vector following by the second one.

// Show the elements of the new vector in the standar output.

#include<iostream>

#include<conio.h>

#include<cmath>

using namespace std;

int main(){
	
	char letras1[]={'a','b','c','d','e'};
	char letras2[]={'f','g','h','i','j'};
	char letras3[10];
	
	for(int i=0; i<5; i++){
		
		letras3[i] =letras1[i];		
	}
	
	
	for(int i=5; i<10; i++){
		
		letras3[i] =letras2[i-5];		
	}
	
	//Show the new vector:
	
	for(int i = 0; i<10; i++){
		cout<<letras3[i]<<endl;
		
	}
	
	
	
	getch();
	return 0;
}

// 42

// 27-01-2025

// Lenght of Characters. Function sterlen()

// Copy the content of one chain to another one. Function strcpy().

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char name[] = "Carlos";

	char name2[20];

	strcpy(name2,name); // Function to copy one chain to another. From nombre2 to name2.
	
	cout<<name2<<endl;
	
	getch();
	return 0;
}

// 40

// 27-01-2025

// Chain of Characters.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "Alejandro";
	
	char palabra2[] = {'A', 'l','e','j','a','n','d','r','o'};
	
	char nombre[30];
	
	char apellido[30];

	
	cout<<"Digite su nombre; ";
	gets(nombre); // Way of get the character string from the user.
	
	cout<<nombre<<endl;
	
	
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	cout<<"Digite su apellido; ";
	cin.getline(apellido,20,'\n'); // Way of get the character string from the user.
	cout<<apellido<<endl;

	
	
	getch();
	return 0;
}

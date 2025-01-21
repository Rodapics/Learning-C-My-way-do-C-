// 25
// 20-01-2025
// Exercise: Write a program that calculates the value of the following sum: 1+2+3+...+n.


#include<iostream> // standar c++ library.
#include<conio.h>



using namespace std;

int main(){
	int n, suma = 0; // inicialization of the variables.
	
	cout<<"Please, write the number of elements for the sum: ";
	cin>>n;
	
	for(int i= 1; i<=n; i++){
		suma = suma + i;		
	}
	
	cout<<"\nLa suma:  "<<suma<<endl;
	
	getch();	
	return 0;
}

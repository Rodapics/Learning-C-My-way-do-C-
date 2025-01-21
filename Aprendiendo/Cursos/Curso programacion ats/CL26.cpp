// 26
// 20-01-2025

//Write a program that calculates the factorial of a number, for example, n! = n*(n-1)*(n-2)*...

#include<iostream>
#include<conio.h>
#include<stdlib.h> // here we would like to used the function SYTEM PAUSE.

using namespace std;

int main(){
	int n, factorial = 1;
	
	
	cout<<"Please, write the number that you would like to know the factorial: ";
	cin>>n;
		
	for(int i=0; i<n  ;i++){
		factorial = factorial*(n-i);
	}
	
	cout<<"\nThe factorial of the number "<<n<<" is "<<factorial<<endl;	
	
	
	system("pause");
	
	return 0;
}


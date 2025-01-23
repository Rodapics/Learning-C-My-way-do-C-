// 28
// 20-01-2025

//Write a program that calculates fibonnaci series until wherever you want.
// 1 1 2 3 5 8 13 ... n
// z y x
//   z y  

#include<iostream>

#include<conio.h>

#include<cmath>

using namespace std;

int main(){
	
	int n,x=0,y=1,z =1;
	
	cout<<"Please write the number until you'd like calculate the Fibonacci serie: ";
	cin>>n;
	
	for(int i = 0; i<n ; i++){
		i = i++;
		x = z+y;
		cout<<x<<" ";
		z=y;
		y=x;		 	
	}
	
	cout<<"\nThe position of the Fibonnaci Serie is "<<n<< " and its value is "<<x<<endl;
	return 0;
}

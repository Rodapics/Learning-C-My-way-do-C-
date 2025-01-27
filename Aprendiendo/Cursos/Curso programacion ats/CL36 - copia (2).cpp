// 24-01-2025

// 36

// Make a program that ask to the user about the number of rows and columns. Then, print the matrix in the screen.


#include<iostream>

#include<conio.h>

#include<cmath>

using namespace std;

int main(){
	
	int numeros[100][100], n,m;
	
	cout<<"\nPlease write the number of rows of your matrix: "<<endl;
	cin>>n;
	
	
	cout<<"\nPlease write the number of columns of your matrix: "<<endl;
	cin>>m;
	
	
	//storing elements in the matrix
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"Digite el número de ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
		
		
	}
	// Showing the matrix
	
	for(int i =0;i<n;i++){		
		for(int j=0; j<m;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	
	//cout<<matrix<<endl;
	
	getch();
	return 0;
}

#include<iostream> //entrada  salida de infa a terminal
#include<fstream>
using namespace std;

int main (){

int A, B, C;

cin>>A;
cin>>B;
cin>>C;

if(A>B){
			if(A>C){
		cout<<"A="<<A<< endl;
					}
			else {
		cout<<"B="<<B<< endl;
		 		 }	
		}

else{
			if(B<C){
		cout<<"C="<<C<< endl;
					}
			else{
			cout<<"B="<<B<< endl;
				}
	}
	
return 0;
}
#include<iostream> //entrada  salida de infa a terminal

using namespace std;

int main (){

double A, B, C;

cin>>A;
cin>>B;
cin>>C;

if(A>B){
		if(A>C){
		cout<<"A="<<A<< endl;
					}
		else {
			if (C>B){
				cout<<"C="<<C<< endl;
					}
			else{
				cout<<"B="<<B<< endl;
				}
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
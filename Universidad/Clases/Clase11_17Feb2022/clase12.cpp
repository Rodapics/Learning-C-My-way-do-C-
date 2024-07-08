#include<iostream> //para la lectura y escritura de la power shell
#include<fstream> // lectura y escritura en archivo 
#include<cmath>
using namespace std; //es como una estanteria
//---------------------

int main() {
//ciclo while y do - while

int x, x0=46, xf= 75;

//inicio
x= x0;
// condicion
while(x<= xf){
	if(x%2==0){
		cout<<x<<" es par"<<endl;
	}
	else{
		cout<<x<<" es impar"<<endl;
	}
x++;
}
//finalizar
cout<<"El ciclo while terminó";

//...................................................

//inicio, debemos re iniciar a x
x= x0;
do{
	if(x%2==0){
		cout<<x<<" es par"<<endl;
	}
	else{
		cout<<x<<" es impar"<<endl;
	}
x++;
} while(x<= xf);
//finalizar
cout<<"El ciclo do-while terminó";

return 0;	
}
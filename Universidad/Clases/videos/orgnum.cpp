// código para escribir números ordenados de menos a mayor.


#include<iostream> //entrada  salida de infa a terminal

using namespace std;

int main (){

double a, b, c, aux;
cout<<"Escriba tres numeros separados por enter:"<<endl;
cin>>a;
cin>>b;
cin>>c;

if(a>b){ //Intercambiar valores de a y b.
	aux=a;
	a=b;
	b=aux;
}
if(a>c){
	aux=a;
	a=c;
	c=aux;
}
if(!(c>b)){
	aux=b;
	b=c;
	c=aux;
}
cout<<"Los numeros ordenados son:"<<a<<","<<b<<","<<c<<endl;
return 0;
}
// Operando con variables
#include<iostream> //entrada y salida de info a terminar
using namespace std;

int main (){
//declaracion de varibles:

int a, b; //dos variables para números enteros

double x, y; // dos variables para número reales

// inicializando variables

a=5;
b=7; 

x=0.1;
y=0.9;

//proceso

a=a+b ; // la nueva asignación de a es el valor a+b

// escribir el resultado en la terminal (shee¿ll)

cout<<"El resultado de a+b es:" << a << endl;

//------operaciones (ariméticas) básicas-----
cout<<"Resta: "<< a-b <<endl; 
cout<<"Multiplicacion: "<< a*b <<endl; 
//La división no es cerrada en los enteros.
//Hacer una división entre dos enteros da un entero.
//Así lo procesa el computador, apesar de que para uno
//No es así.
//EL COMPUTADOR NO REDONDEA.


//----------- Solución problema------
// Asignamos variables reales.

x=a/b; 
cout<<"Division fea : "<< x <<endl;
// Hasta aquí daría lo mismo.

// Solución
x=a/(1.*b); 

cout<<"Division buena: "<< x <<endl;

// siguiente operación

cout<<"Modulo %  (operacion entre enteros y retorna un entero): "<<endl;

cout<<"4%7="<< 4%b << endl;
cout<<"5%7="<< 5%b << endl;
cout<<"6%7="<< 6%b << endl;
cout<<"7%7="<< 7%b << endl;
cout<<"8%7="<< 8%b << endl;
cout<<"%7="<< 9%b << endl;
cout<<"10%7="<< 10 %b << endl;
	return 0;
}
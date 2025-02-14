//-------Librerias------------
#include<iostream>  // Escribir o leer informacion de la powershell (Lectura y escritura de la pantalla) stream es chorrito.
#include<fstream>  // Lectura y escritura en archivo
#include<string>   // cadena de caracteres
using namespace std; //name space estandar. Evitar escritura larga.

//------------Inicio código----------
int main (){

int B, H;
cout<<"Introduzca la base y la altura entera del triangulo"<<endl;
cin>>B>>H;

double A;

A=0.5*B*H;

//Al usar la división, la división por enteros no está definida, por eso multiplicamos.


//Abrir el archivo. Tipo archivo + identificardor (name file).    Tipo de dato: output stream 

ofstream kokito;
kokito.open("area_triangulo.dat");   //evitar espacios
//abrir el archivo si existe y lo sobre escribe, o crearlo si no existe
kokito<<"El area del triangulo es: "<<A<<endl;

kokito.close ();

return 0;

}
// Algoritmo. Pasos a seguir para solucionar un problema
// usando un computador.
// Diagramas de flujo
// Ejemplo: Calcular el area del triangulo.
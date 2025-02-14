//-------Librerias------------
#include<iostream>  // Escribir o leer informacion de la powershell (Lectura y escritura de la pantalla) stream es chorrito.
#include<fstream>  // Lectura y escritura en archivo
#include<string>   // cadena de caracteres
using namespace std; //name space estandar. Evitar escritura larga.
// Clase para operaciones básicas, practicar a realizar algoritmos.

//------------Inicio código----------


int main (){

int x; // DECLARANDO la variable x //Caja del tipo entero, hallar el tamaño de esta caja.

// Declarar: separar un espacio en memoria.

x=5; // asignación de información a la varibale. Estoy INCIALIZANDO la varible.
cout<<"El valor asignado a x es " <<x<<endl;
x=45; // Esto no es una inicialización.
cout<<"El valor asignado a x es " <<x<<endl;
//Declarar e inicializar en la misma linea.
double y=5.3; //Creando espacio en memoria de mayor tamaño.
cout<<"El valor asignado a y es " <<y<<endl;

//cin para traer info de la pantalla

cout<<"Escriba un numero real"<<endl;
cin>>y;
cout<<"El numero que usted escribio es : " <<y<<endl;


char nombre;
cout<<"Escriba la inicial de su primer nombre"<<endl;
cin>>nombre;
cout<<"Hola " <<nombre<<endl;

//Armaremos un tipo de varibales no fundamentales.
//Esto siempre requiere una libreria
// Cadena de caracteres simples (string)

string nomComp, apellido; // declarar una cadema de caracteres
//Dos líneas de caracteres declaradas, separadas por comas.
cout<<"Ahora su nombre y su apellido"<<endl;
cin>>nomComp;
cin>>apellido;
cout<<"Hola " <<nomComp<<" "<<apellido<<endl;


return 0;

}
//-------- Fin codigo----------


// <<endl; para cortar linea o \n para cortar linea.
// \sirve para gnuplot y phyton
// ./nombrearchivo.exe  PARA EJECUTAR.
// Los simbolos mayor que, menor que, sirven para indicar el flujo de información que tenemos



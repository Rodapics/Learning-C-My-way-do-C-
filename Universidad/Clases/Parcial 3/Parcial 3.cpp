//-------Librerias------------
#include<iostream>  // Escribir o leer informacion de la powershell (Lectura y escritura de la pantalla) stream es chorrito.
#include<fstream>  // Lectura y escritura en archivo
#include<cmath>
using namespace std; //name space estandar. Evitar escritura larga.

//------------Inicio código---------- CODIGO 1
int main (){
  int L=10;
  double H[L], Eo[L];

  for(int z=1;z<L+1;z++){
    Eo[z-1]= cos (z);
    }
   for(int z=1;z<L+1;z++){
    for(int z=z%2; z<L+1;z+=2){
      H[z-1]+=2.*Eo[z];
    }}
  return 0;
}
//-----------Fin código--------------
// La lectura se realiza de derecha a izquierda.

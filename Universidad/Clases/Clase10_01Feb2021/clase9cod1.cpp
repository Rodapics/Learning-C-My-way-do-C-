//-------Librerias------------
#include<iostream>  // Escribir o leer informacion de la powershell (Lectura y escritura de la pantalla) stream es chorrito.
#include<fstream>  // Lectura y escritura en archivo
#include<cmath>    // Libreria matematica.

using namespace std; //name space estandar. Evitar escritura larga.

//------------Inicio código----------
int main (){

double x,y; //declarando las variables.

double x0=-10., xf=30.; // Extremos del intervalo

double Dx=(xf-x0)/5.; //"Ancho del intervalo"

x=6.;

if(x<=(x0+Dx)) {   // Incluye los valores de x0 y x1
  y=tan(x); //I
}
else if (x>(x0+Dx) && x<=(x0+2.*Dx)){
  y=cos(x); //II
}
else if (x>(x0+2.*Dx) && x<=(x0+3.*Dx)){
  y=exp(-3.*x); //III
}
else if (x>(x0+3.*Dx) && x<=(x0+4.*Dx)){
  y=pow(x,3.); //IV power: potencia x^3, potencias reales también.
}
else{

  y=pow(1-x,4);//V
} 
cout<<"y= "<<y<<endl;
cout<<"Dx= "<<Dx<<endl;
return 0;
}
//-----------Fin código--------------
// La lectura se realiza de derecha a izquierda.

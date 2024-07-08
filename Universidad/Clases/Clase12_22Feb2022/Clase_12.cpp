#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
// soluciones dy/dx = 4*^cos(y)
#define PI 3.14159    //manera de definir pi, manera fácil.
//------------------Lugar de las funciones-------------------------
double f_edo(double x,double y){
double resultado;
resultado=4*cos(y);
return resultado;
}
//-----------------------------------------------------------------
int main(){
//-------------Definiciones ----------------
// Parámetros.    (Condiciones inciales(yo), x_0, x_f, ▲x)
double x,x0=1.5,xf=10.,dx=0.1; ///x \in [1.5,10]
double y, y0=3.;
ofstream kokito;
kokito.open("solucionEDO.dat");
y=y0;
//Ciclo de la ecuación diferencial.
//---------------------------------------------------------
// Método de Euler
for(x=x0; x<=xf; x+=dx){
kokito<<x<<" "<<y0<<endl;
y=y0+dx*f_edo(x,y0);
y0=y;   //uptade de la información conocida
}
kokito.close();
//---------------------------------------------------------------
//Los parámetros serán los mimmos ya usados.
y0=3.; //rescribir la condición inicial en y
kokito.open("solucionEDO-RK2-.dat");
y=y0;
//Método RK (Runge-Kutta de 2° orden)
//dos pendientes
double k1,k2,y_aux;
for(x=x0; x<=xf; x+=dx){
kokito<<x<<" "<<y0<<endl;
k1= f_edo(x,y0); //PRIMERA pendiente
y_aux=y0+k1*0.5*dx; // sol a mitad de paso
k2= f_edo(x+0.5*dx, y_aux); //SEGUNDA pendiente
y=y0+k2*dx; //Solución al final del paso
y0=y; //uptade de la información conocida
}
kokito.close();
return 0;	
}
#include<iostream>
#include<fstream>
#include<cmath>


using namespace std;
// soluciones dy/dx = 4*^cos(y)
#define PI 3.14159    //manera de definir pi, manera fácil.

int main(){
//-------------Definiciones ----------------
// Parámetros.    (Condiciones inciales(yo), x_0, x_f, ▲x)

double x,x0=1.5,xf=10.,dx=0.1; ///x \in [1.5,10]
double y, y0=3.;
ofstream kokito;
kokito.open("solucionEDO.dat");

y=y0;
//Ciclo de la ecuación diferencial.
for(x=x0; x<=xf; x+=dx){
kokito<<x<<" "<<y0<<endl;
y=y0+dx*4.*cos(y0);
y0=y;   //uptade de la información conocida

}

kokito.close();

return 0;	
}
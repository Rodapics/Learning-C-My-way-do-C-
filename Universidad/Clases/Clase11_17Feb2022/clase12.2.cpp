#include<iostream> //para la lectura y escritura de la power shell
#include<fstream> // lectura y escritura en archivo 
#include<cmath>
using namespace std; //es como una estanteria
//---------------------

int main() {
double x, f, fpp, fp, x0 = -75, xf= 75, dx= 0.1;
//La funcion f(x)= x^2

ofstream kokito;
kokito.open("derivada.dat");
x= x0;
// condicion
while(x< xf){
	fp= (pow(x+dx, 2.)- pow(x,2.))/dx;
	kokito<<x<<" "<<pow(x,2.)<<" "<<fp<<endl;

x+= dx;
}
kokito<<endl<<endl;


// Con do while hacemos la segunda derivada......................................

//Inicio
x= x0 + dx;
do{

	fpp= (pow(x+dx, 2.)- 2.* pow(x,2.) +pow(x-dx, 2.))/(pow(dx,2.));
	kokito<<x<<" "<<pow(x,2.)<<" "<<fpp<<endl;

x+= dx;
} while(x< xf);

return 0;	
}
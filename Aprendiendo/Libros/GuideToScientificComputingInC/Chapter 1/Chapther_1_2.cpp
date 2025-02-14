// 1.3.1 Basin Numerical Varibales.

/*
int row, column;
double temperature;
row = 1;
column = 2;
temperature = 3.0;


About tolerance and scientific notation:

double tolerance = 0.000000000001;

double tolerance = 1.0e-12;

int integer1;
short int integer2;
long int integer3;
The actual range of integers that may be stored by each of these variables depends
on the system that you are using. For example, on an obsolete 32-bit operating system
the long int is completely synonymous with the int data type—but on modern
64-bit architectures the long int is assigned twice as much space as the int (so
it can store numbers in the range ±9 × 1018 as opposed to ±2 × 109).

integers. Signed integers may be used to store both positive and negative integers,
whilst unsigned integers may be used to store only nonnegative integers. These
variables may be used as shown below.
	
1
2
signed long int integer4; // signed is unnecessary
unsigned int integer5;


Floating point variables may be declared using the keywords float, double
or long double as shown below.
	
1
2
3
float floating_point_number1;
double floating_point_number2;
long double floating_point_number3;



*/
#include <cmath>

int main(int argc, char* argv[]){
	double x = 1.0, y = 2.0, z;
	// division
	z=x*y;
	z = sqrt(x);
	z = exp(y);
	// multiplication
	// square root
	// exponential function
	z = pow(x, y); // x to the power of y
	z = M_PI;  // z stores the value of PI
	return 0;
}


/*
Many other mathematical functions are available. The functions cos, sin, tan,
acos, asin, atan, cosh, sinh, tanh, log, log10, ceil, floor can be used
in exactly the same way as sqrt and exp in the code above: that is, they accept
one argument, and return one value.


*/

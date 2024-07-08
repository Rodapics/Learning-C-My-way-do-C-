/* La sentencia SWITCH, se usa para condicionales MULTIPLES

		switch(expresion){
			case literal1:
				conjunto de intrucciones1;
				break;
			case literal2:
				conjunto de intrucciones1;
				break;
			case literaln:
				conjunto de intrucciones1;
				break;
			default:
				conjunto de intrucciones por defecto;
				break;	
		
	}
*/


// El break permite salir del proceso de manera inmediata cuando se ha cumplido la sentencia, el break permite salir del caso.

#include<iostream>

using namespace std;

int main(){
	int numero;
	cout<<"Digite un numero entre 1 y 5:  ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Usted a elegido el numero 1";break;
		case 2: cout<<"Usted a elegido el numero 2";break;
		case 3: cout<<"Usted a elegido el numero 3";break;
		case 4: cout<<"Usted a elegido el numero 4";break;
		case 5: cout<<"Usted a elegido el numero 5";break;
		default: cout<<"Usted ha digitado un número que no se encuentra entre 1-5";break;
		
	}
	
	return 0;
}

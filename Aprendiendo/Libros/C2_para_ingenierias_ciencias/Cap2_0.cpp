/* Cap�tulo 2: Solucion de problemas mediante C++

Se realiza la definici�n de Funci�n (la habitual) y de CLASE.

Clase: Encapsula datos, funciones, y m�s conjuntos de operaciones. Cada clase se puede considerar como una peque�a fabrica.
Debido a que esta f�brica contiene la materia prima (datos) y las m�quinas (funciones). juntos a sus respectivas operaciones.


** Identificadores  ** Permiten establecer un nombre en funciones de su uso a las funciones y clases. Tiene las siguientes reglas de titulacion:
1- Primer car�cter deber ser una letra o subrayado.
2 - No se permiten espacion en clanco
3 - No ser una de las palabras claves de c++
4 - N�mero m�ximo de caracteres (1024)

Puede ser una combinaci�n de mat�sculas y min�sculas, teniendo en cuenta que C++ es sensible a estas variaciones.


**La funci�n main ***  main()

Para facilitar la colocaci�n y ejecuci�n ORDENADA de modulos, C++ debe tener una sola funci�n principal o controladora, esta actua entre lo m�dulo e
inidica la secuencia en que ellos deben ejecutarse.


** M�dulo: <iostream>** 
Parte de la biblioteca estandar de C++ que permite la entrada y s�lida de datos respectivamente.

** Sintaxis **
Conjunto de reglas para formular instrucciones gramaticales correctas en el lenguaje. Escribir de manera apropia una instrucci�n en C++ para que el compitador acepte la instrucci�n.
Un programa puede ser correcto desde el punto de vista sint�ctico, pero puede ser incorrecto desde el punto de vista l�tico.


** using namespace std; **
Indica al compilador d�nde buscar para encontrar los archivos de encabezado en ausencia de cualquer designaci�n expl�cita adiccional.



*/

#include<iostream>
#include<conio.h>

using namespace std;


int main(){                             //El hecho de que los parentesis se encuentren vac�os significa que no se transmitir�n datos a la funci�n cuando se esta ejecutando
	//Aqui van las listas de instrucciones
	
	// **El objeto cout** : Permite imprimir mensajes en la pantalla.
	cout<<"Hola mundo!";
	getch();
	cout<<endl<<"Computadores, computadoras por todos lados";
	cout<<"\ntan lejos como pueda llegar c++";
	
	
	return 0;
}

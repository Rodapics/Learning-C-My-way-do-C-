/* Capítulo 2: Solucion de problemas mediante C++

Se realiza la definición de Función (la habitual) y de CLASE.

Clase: Encapsula datos, funciones, y más conjuntos de operaciones. Cada clase se puede considerar como una pequeña fabrica.
Debido a que esta fábrica contiene la materia prima (datos) y las máquinas (funciones). juntos a sus respectivas operaciones.


** Identificadores  ** Permiten establecer un nombre en funciones de su uso a las funciones y clases. Tiene las siguientes reglas de titulacion:
1- Primer carácter deber ser una letra o subrayado.
2 - No se permiten espacion en clanco
3 - No ser una de las palabras claves de c++
4 - Número máximo de caracteres (1024)

Puede ser una combinación de matúsculas y minúsculas, teniendo en cuenta que C++ es sensible a estas variaciones.


**La función main ***  main()

Para facilitar la colocación y ejecución ORDENADA de modulos, C++ debe tener una sola función principal o controladora, esta actua entre lo módulo e
inidica la secuencia en que ellos deben ejecutarse.


** Módulo: <iostream>** 
Parte de la biblioteca estandar de C++ que permite la entrada y sálida de datos respectivamente.

** Sintaxis **
Conjunto de reglas para formular instrucciones gramaticales correctas en el lenguaje. Escribir de manera apropia una instrucción en C++ para que el compitador acepte la instrucción.
Un programa puede ser correcto desde el punto de vista sintáctico, pero puede ser incorrecto desde el punto de vista lótico.


** using namespace std; **
Indica al compilador dónde buscar para encontrar los archivos de encabezado en ausencia de cualquer designación explícita adiccional.



*/

#include<iostream>
#include<conio.h>

using namespace std;


int main(){                             //El hecho de que los parentesis se encuentren vacíos significa que no se transmitirán datos a la función cuando se esta ejecutando
	//Aqui van las listas de instrucciones
	
	// **El objeto cout** : Permite imprimir mensajes en la pantalla.
	cout<<"Hola mundo!";
	getch();
	cout<<endl<<"Computadores, computadoras por todos lados";
	cout<<"\ntan lejos como pueda llegar c++";
	
	
	return 0;
}

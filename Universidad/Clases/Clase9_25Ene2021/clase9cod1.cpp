//-------Librerias------------
#include<iostream>  // Escribir o leer informacion de la powershell (Lectura y escritura de la pantalla) stream es chorrito.
#include<fstream>  // Lectura y escritura en archivo

using namespace std; //name space estandar. Evitar escritura larga.

//------------Inicio código----------
int main (){

//double a=5, b=4, z;

// 1)Preguntando. 
// 2) Agsinación en base a la respuesta. Inicializamos z, condicionalmente.
// 3) Respuesta es 1 (V), => z=a+1
//				   0 (F), => z=b (b cambió?) 

//cout<<"b antes "<<b<<endl;   // Forma compacta de realizar condicionales.



// Es igual a b? Si sí entonces asigne a z el valor de a,  si no entonces asigne el valor de b-1.

//z=(a==b)? a++ : --b;
// Operador compuesto como prefijo, asignamos valor a b y se lo asignamos a z.

//z=(a!=b)? a++ : --b;                          //Pregunta con respuesta verdadera.

//cout<<"z= "<<z<<endl;

//cout<<"a despues "<<a<<endl;

//------Otra forma de realizar preguntas------
// Condicionales simples.
// "Es igual a b? Si sí entonces asigne a z el valor de a y añada a a una unidad
//,  si no entonces asigne el valor de b-1."

//if (a==b){
// z=a++;
// cout<<"Z es "<<z<<endl;
//	}

//else {
//  z=b--;
// cout<<"Z es "<<z<<endl;
//	}
//if (a>b){
//   cout<<"Entre a este condicional"<<endl;
//}


// "Es igual a b? Si sí entonces asigne a z el valor de a,  si no entonces asigne el valor de b-1."
//------------Código de diagrama de flujo-----------
double a, b, c, aux;
cout<<"Escriba tres numeros separados por enter, con estos numeros realizaremos las condiciones:"<<endl;
cin>>a;
cin>>b;
cin>>c;

if (a>b){ //Condición 1
  cout<<"La condicion que pusimos es que a>b"<<endl;
}
else if (a>0) { //Condición 2
  cout<<"La condicion que pusimos es que a>0"<<endl;
  }
else if ((b*c)>=a){ //Condición 3
cout<<"La condicion que pusimos es que si la multiplicacion entre b y c era mayor a a. Es decir, ((b*c)>=a)"<<endl;
    }
else{
    cout<<"La condición que pusimos en la condición 3 fue que si la multiplicacion entre b y c era mayor a a. Es decir, ((b*c)>=a), esta condicon es FALSA."<<endl;
   }


 cout<<"Aqui se sale"<<endl;






return 0;
}
//-----------Fin código--------------
// La lectura se realiza de derecha a izquierda.

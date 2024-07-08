/* 1D FDTD simulation i nfree espace
*/

#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define KE 200  // *KE es el número de celdas que usaremos

using namespace std;


main(){
	float ex[KE], hy[KE];
	int n, k, kc, ke, NSTEPS;
	float T;
	float t0, spread, pulse;
	FILE *fp;
	
	/*Inicializamos */
	for(k=1; k < KE; k++ ){
		ex[k] = 0;
		hy[k] = 0.;
	}
	
	kc = KE/2;   /*Ubicamos el centro del problema en el espacio*/
	t0 = 40.0;   /*Centro del pulso incidente*/
	spread = 12;  /* Ancho del pulso incidente*/
	T = 0;
	NSTEPS = 1;
	
	while ( NSTEPS > 0){
		cout<<"NSTEPS ---->"<<endl;     /* NTEPS es el número de tiempos*/
		cin>>NSTEPS;						/*Ciclo principal se ha ejecutado*/
		cout<<"El número de NSTEPS escogido es "<<NSTEPS<<endl;
		n = 0;
		
		for(n=1; n <= NSTEPS; n++){
			T = T+1;
		/* Parte Principal del ciclo FDTF*/
			/* Calculamos la componente Ex del campo Electrico*/
			for(k=1; k< KE; k++){
				ex[k] = ex[k] + .5*(hy[k-1] - hy[k]);
			/* Colocamos un pulso Gaussiano en el medio*/
			pulse = exp(.05*pow( (t0 - T)/spread, 2.0));
			ex[kc] = pulse;
			cout<<"%5.1f  %6.2f\n"<<t0-T<<ex[kc];
			/* Calculamos la componente Hy del campo*/
			for(k=0; k< KE-1; k++){
				hy[k] = hy[k] + .5*( ex[k] - ex[k+1]);		
			}
		}
		/* Fin del ciclo princial de la FDTF*/
			/* Como final del calculo, escriba en pantalla las componente Ex y Hy del campo*/
			for(k=1; k<=KE; k++){
				cout<<" %3d  %6.2f  %6.2f\n "<<k<<ex[k]<<hy[k];			
			}
			/* Escribir lo anterior en un archivo llamado "Ex"*/
			fp = fopen("Ex", "w");
			for(k=1; k<=KE; k++){
				fprintf(fp, "  %6.2f \n", ex[k]);
			}
			fclose(fp);
			/* Escribir lo anterior en un archivo llamado "Hy"*/
			fp = fopen("Hy", "w");
			for(k=1; k<=KE; k++){
				fprintf(fp, "  %6.2f\n", hy[k]);
			}
			fclose(fp);
			
			printf("T = %5.0f\n, T");
			}
		}
							
	return 0;
}

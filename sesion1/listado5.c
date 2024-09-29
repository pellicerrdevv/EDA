/*
 * listado5.c
 *
 *  Created on: 20/09/2013
 *      Author: M José Polo
 */

#include <stdio.h>
#include <stdlib.h>
#include "ordenacion.h"
#include <time.h>

int main(int argc, char *argv[])
{ 
	//clock_t tiempoInicial , tiempoFinal ;
	double tiempoInicial , tiempoFinal, tiempoMinimo=10*CLOCKS_PER_SEC ;
	
        double tiempo;

	int *vector, *vectorOrdenado, rango=100000, numElementos=10000,i,repeticiones=0;
        

	if (argc > 2) {
            printf("\n Uso: ./prueba3 <número de elementos a ordenar>\n\n");
            return -1;
        }
       if (argc==2) 
		numElementos=atoi(argv[1]); 



	vector = crearVector(numElementos,rango);

     	tiempoInicial = tiempoFinal= (double)clock();
	while (tiempoFinal-tiempoInicial < tiempoMinimo) 
	{ 	vectorOrdenado = ordenarBurbuja(vector,numElementos);
	        free(vectorOrdenado);	  
		repeticiones++;
	     	tiempoFinal = (double) clock();
	}

     	tiempo =  (tiempoFinal - tiempoInicial ) / (double)CLOCKS_PER_SEC /repeticiones;

	printf( "\nTiempo de ejecución en ordenar %d elementos: %g)\n (inicio: %g, fin: %g, repeticiones: %d)\n", 		numElementos,tiempo,tiempoInicial,tiempoFinal,repeticiones);
	//printf("%d ; %e \n", numElementos,tiempo);
 	//printf("%d ; %g \n", numElementos,tiempo);


      free(vector);

   
return 0;
}



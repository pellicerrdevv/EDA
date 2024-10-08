/*
 * medirTiempos.c	Procedimiento general para medir tiempos de ejecución a diferetes algortimos en funcion
 * 			del "tamaño"
 *
 *  Created on: 29/09/2014
 *      Author: M.J. Polo
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algoritmos.h"

long int contadorInterno, contadorExterno, contadorMedio;


int main(int argc, char *argv[])
{ 
	//clock_t tiempoInicial , tiempoFinal ;
	double tiempo,tiempoInicial , tiempoFinal, tiempoMinimo=10*CLOCKS_PER_SEC ;


	
	int n,i,repeticiones=0;
        
 	FILE *f;  
 	
	if (argc != 2) {
            printf("\n Uso: ./medirTiempos <nombre fichero resultados>\n\n");
            return -1;
        }

        f = fopen(argv[1], "w+");
        fprintf(f,"n;tiempoMedio;Externo;Interno\n");


        for (n=5000;n<=50000;n=5000+n) {
                repeticiones=contadorExterno=contadorInterno=contadorMedio=0;
		tiempoInicial = tiempoFinal= (double)clock();
		while ((tiempoFinal-tiempoInicial < MIN_T) || (repeticiones < MIN_REP))
		{ 	algA(n) ;
			repeticiones++;
	     		tiempoFinal = (double)clock();
		}

     		tiempo =  (tiempoFinal - tiempoInicial ) / CLOCKS_PER_SEC /repeticiones;
		printf("\n %d \t %e \t %ld \t %ld \t %ld", n,tiempo,contadorExterno/repeticiones,contadorInterno/repeticiones, contadorMedio/repeticiones);
		fprintf(f,"\n %d \t %e \t %ld \t %ld \t %ld", n,tiempo,contadorExterno/repeticiones,contadorInterno/repeticiones, contadorMedio/repeticiones);

      }
fclose(f);

   
return 0;
}



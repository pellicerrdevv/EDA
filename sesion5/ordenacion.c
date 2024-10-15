/*
 * auxiliares.c
 *
 *  Created on: 20/09/2013
 *      Author: M José Polo 
 */
#include <stdlib.h>
#include "ordenacion.h"
#include "busqueda.h"

/*
/* Crea y devuelve un vector de numElementos asignando a cada elemento del vector un numero 
/* aleatorio entre 0 y rango-1
*/

int *crearVector (int numElementos , int rango )
{ int *vector , i;

  vector = malloc ( numElementos * sizeof ( int));
  for (i = 0; i < numElementos ; i++)   vector[i] = rand () % rango ;

 return vector ;
}

/*
 * Crea y devuelve un vector de numElementos donde ordenada los elementos del vector desordenado que se
 * le pasa en el primer argumento
 * OJO:  se reserva memoria de forma dinámica !!!hay que liberarla después de su uso!!!!
 */

int *ordenarBurbuja (int *vector , int numElementos )
{ int *nuevo , i, j;

  nuevo = ( int *) malloc ( numElementos * sizeof (int));

  for (i = 0; i < numElementos ; i++)
  nuevo [i] = vector [i];

    for (i = 0; i < numElementos ; i++) {
	contadorExterno++;
      for (j = 0; j < numElementos -1-i; j++){
	contadorInterno++;
        if ( nuevo [j] > nuevo [j +1]) {
          intercambiar (&( nuevo [j]) ,&( nuevo [j +1]) );
        }
      }
     }
 return nuevo ;
}

/*
 * Intercambia los valores de sus dos argumentos
 */

void intercambiar (int *x, int *y)
{ int temp ;

  temp = *x;
  *x = *y;
  *y = temp;

}


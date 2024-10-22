/*
 * auxiliares.c
 *
 *  Created on: 20/09/2013
 *      Author: M José Polo 
 */
#include <stdlib.h>
#include "ordenacion.h";
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

void *ordenarBurbuja(int *vector, int numElementos){

  int *nuevo, i , j;

  // IMPORTANTE --> reservar memoria para el nuevo vector

  nuevo = (int*) malloc (numElementos * sizeof(int));

  for( i = 0; i < numElementos; i++){
    contadorExterno;
    for (j = 0; j < numElementos-1; j++){
      contadorInterno;
      if(nuevo[j] > nuevo [j]+1){
        intercambiar(nuevo[j], nuevo[j+1]);
      }
    }
  }


}

*/

/*
 * Intercambia los valores de sus dos argumentos
 */

void intercambiar (int *x, int *y)
{ int temp ;

  temp = *x;
  *x = *y;
  *y = temp;

}


void *ordenarBurbuja2(int *vector, int numElementos){

  int *nuevo, i ,j;

  nuevo = malloc(numElementos *sizeof(int));
  if(nuevo != NULL){
    nuevo [i] = vector [i];
    for(i = 0; i<= numElementos-1; i++){
      contadorExterno;
      for(j=numElementos-1; j >=i; j--){
        if(nuevo[j] > nuevo[j+1]){
          interambiar(&(nuevo[j]), &(nuevo[j+1]));
        }
      }
    }
  }

  return nuevo;
}


int *ordenarSeleccion(int *vector, int numElementos){

  int *nuevo, i ,j; 

  *nuevo = malloc(numElementos*sizeof(int));

  if(nuevo != NULL){
    nuevo[i] = vector[i];
  }

  for( i = 0; i <= numElementos -1; i++){
    contadorExterno++;
    int posSeleccion = i;
    int valorSeleccion = nuevo[i];
    for(j = (i+1); i<=numElementos; i++){
      if(nuevo[j] < valorSeleccion){
        posSeleccion = j;
        valorSeleccion = nuevo[j];
      }
    }

    nuevo[posSeleccion] = nuevo[i];
    nuevo[i] = valorSeleccion;
  }

  return nuevo;


}

int *ordenarInsercion(int *vector, int numElementos){

int *nuevo , x , i, j;
if(nuevo != NULL){
  nuevo[i] =vector[i];
}

for( i = 1; i <= numElementos; i++){
   x = nuevo[i];
   j = i-1;
   while(j>0 && nuevo[j] > x){
    nuevo[j+1] = nuevo[j];
    j--;
   }

   nuevo[j+1] = x;
}

}


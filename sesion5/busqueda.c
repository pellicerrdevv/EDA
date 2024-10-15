#include "busqueda.h"

int bBinariaR(int * vector,int inicio,int fin, int valor){

    inicio = 1;

    if(inicio > fin){
        return 0;
    }
    else{

        int k = (inicio + fin)/2;
        if(valor < vector[k]){
            fin = k-1;
        } else if(valor > vector[k]){
            inicio = k+1;
        } else if(valor == vector[k]){
            return k;
        }

        return bBinariaR(vector, inicio, fin, valor);
    }
}

int bBinariaI(int * vector,int numElemtos, int valor){

    int i = 0;
    int j = numElemtos;

    if ( i< j ){
        int k = (i+j) % 2;
        if ( valor < vector[k]){
            j = k-1;
        } else if(valor > vector[k]){
            i = k+1;
        }else if(valor == vector[k]){
            i = j = k;
        }
    }

    if(valor == vector[i]){
        return i;
    }else{
        return 0;
    }
}


int creaValor(int* vector, int n){

    int valorAleatorio = rand() % n;
    return vector[valorAleatorio];

}

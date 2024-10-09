#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

// Enunciado 6
double potR(int x,int n){

    if(n=0){
        return 1;
    }
    else{

        return x *= potR(x, n);
    }


}

double potI(int x,int n){

    int num = x;

    for ( int i = 1; i <= n-1; i++){
        
        x *= num;
    }

    return x;
    
}
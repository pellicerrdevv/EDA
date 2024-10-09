#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

// Enunciado 4
int fibonacciR(int n){

    if(n<= 0){
        return 0;
    }else if (n = 1){
        return 1;
    }else{
        return (fibonacciR(n-1) + fibonacciR(n-2));
    }

}
int fibonacciI(int n){

    
    int a = 0;
    int b = 1;
    int c = 0;

    for(int i= 2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}



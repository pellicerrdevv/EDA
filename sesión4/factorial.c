#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

//Enunciado 3
double factorialR(int n){

    if(n<=0){
        return 1;
    }
    else{
        return (n *factorialR(n-1));
    }
}

double factorialI(int n){

    double resultado = 1;
    for(int i=2; i<=n; i++){
        resultado *=i;
    }

    return resultado;
}

/*

double factorial(int num){

    double factorial = 0;

    if(num-1 <= 0){
        return 0;
    }
    else{
        while(num>=1){
            factorial *=num;
            num -=1;
        }
    }

    return factorial;
}

*/
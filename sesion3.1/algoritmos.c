/*
 * algoritmos.c
 *
 *  Created on: 07/10/2013
 *      Author: MJ Polo
 */
#include <math.h>
#include "algoritmos.h"

long int contadorInterno, contadorMedio, contadorExterno, contadorMedio;

// Orden cuadrático
void algA(int n)
{ int i,j,c;

	c = 1;
	for (i=1;i<=n;i++){
		contadorExterno++;
		for (j=1;j<=n;j++) {
			contadorInterno++;
			c = c + 1;
		}
  	}
}

/*

void algB(int n){
	int i,j,k,c;

	c = 1;
	for(i=1;i<=n; i++){
		contadorExterno++;
		for(j=1; j<=n; j++){
			contadorMedio++;
			for(k=1; k<=2; k++){
				contadorInterno++;
				c += 1;
			}
		}
	}

}

void algC(int n){

	int i,j,k,c;

	c = 1;
	for(i=1; i<=n; i++){
		contadorExterno++;
		for(j=1; j<=pow(n,2); j++){
			contadorMedio++;
			for(k=1; k<=pow(n,3); k++){
				contadorInterno++;
				c+=1;
			}
		}
	}
}

void algD(int n){

	int i,j,c;

	c = 1;
	for(i=1; i<=n; i++){
		contadorExterno++;
		for(j=0; j<=i; j++){
		contadorInterno++;
			c +=1;
		}
	}
}

void algE(int n){

	int i,j,k,c;

	c = 1;
	for(i=1; i<=n; i++){
		contadorExterno++;
		for(j=1; j<=i; j++){
			contadorMedio++;
			for(k=1; k<=j; k++){
			contadorInterno++;
				c+=1;
			}
		}
	}

}

void algF(int n){

	int i,j,k,c;

	c = 1;
	for(i=1; i<=n; i++){
		contadorExterno++;
		for(j=1; j<=i; j++){
			contadorMedio++;
			for(k=1; k<=j; k++){
				contadorInterno++;
				c+=1;
			}
		}
	}

}

void algG(int n){

	int j,x;

	x = 0;
	j = n;
	do{
		contadorExterno++;
		x +=1;
		j = j/2;
	}while(j>=1);


}

void algH(int n){

	int j,x;
	x = 0;
	j = n;
	do{
		contadorExterno++;
		x +=1;
		j = j%3;
	}while(j>=1);
}

void algI(int n){

	int x = 0;
	int i = 1;

	do{
		contadorExterno++;
		int j= 1;
		do{
			contadorInterno++;
			x +=1;
			j*=2;
		}while(j<=i);
		i +=1;
	}while(i>n);
}

void algJ(int n){

	int i = 1;
	int x = 0;
	int j;

	do{
		contadorExterno++;
		int j= 1;
		do{
			contadorInterno++;
			x +=1;
			j+=2;
		}while(j<=i);
		i +=1;
	}while(n>=i);

}

int algK(int n){

	int i, j,x;
	x = 0;
	i = 1;

	while(i<=n){
		contadorExterno++;
		for(j=1; j<=i; j++){
			contadorInterno;
			x+=1;
		}
		i *=10;
	}

	return x;
}

*/



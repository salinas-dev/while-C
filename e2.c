#include<stdio.h>
#include<stdlib.h>

/*
Imprimir los cuadrados y los cubos de los primeros quinientos números naturales.

El cuadrado de un número se define como: x 2 = x*x
El cubo de un número se define como: x 3 = x*x*x
*/

int main(){

  int cubo, cuadrado;
  int numero=1;
  int contador=0;

  while(numero<=500){
      printf( "%d \n", numero*numero);
      printf( "%d \n", numero*numero*numero);
      numero++ ;
  }
return 0;
}


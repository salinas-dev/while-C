#include<stdio.h>
#include<stdlib.h>


/*
Imprimir todos los números que son divisibles entre 2 y entre 7, mayores a 0 y menores a mil.
Ejemplo:
14, 28, 42, 56, …
*/

int main(){
    int numero=0;

    while(numero<1000){

        if((numero%2 || numero%7)==0)
        printf("%d\t\n",numero);
        
        numero++;
    }
    
return 0;
}

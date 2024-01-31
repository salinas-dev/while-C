#include <stdio.h>
#include <stdlib.h>

/*

Escribir todos los enteros positivos menores que 100
omitiendo aquellos que son divisibles por 7.

*/


int main(){
    int numero=0;

    while(numero<1000){

        if((numero%7)!=0)
        printf("%d\t\n",numero);
        numero++;
    }
    
return 0;
}
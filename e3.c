#include<stdio.h>
#include<stdlib.h>


/*
Imprimir todos los números divisibles entre 3 mayores a 0 y menores a mil.
Ejemplo:
3, 6, 9, 12, 15, 18, 21, …. 999
*/

int main(){
    int numero=0;

    while(numero<1000){

        if(numero%3==0)
        printf("%d\t\n",numero);
        
        numero++;
    }

return 0;
}
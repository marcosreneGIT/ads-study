// goto

#include <stdio.h>

int main(void){
    int contador = 0;

    loop:

        if (contador++ < 10){
            printf("\nContador = %d", contador);
            goto loop;
        }

    return 0;
}
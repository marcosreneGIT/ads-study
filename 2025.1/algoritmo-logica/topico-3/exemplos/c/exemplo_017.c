// break

#include <stdio.h>

int main (void){
    for (int contador = 1; contador < 100; contador ++){
        printf("\nValor de contador = %d", contador);

        if (contador == 10)
        break;
    }
    return 0;
}
// ponteiros

#include <stdio.h>

int main(void){
    int soma = 20 + 30;
    int * somaParcial = &soma;

    printf("\nValor da variavel 'soma' = %i", soma);
    printf("\nValor da variavel *somaParcial = %i", * somaParcial);

    return 0;
}
// While

#include <stdio.h>

int main(void)
{
    int contador = 0;

    printf("\nExemplo de estrutura de repeticao while:\n");

    while (contador < 10)
    {
        contador++;

        printf("\nValor do contador: %d", contador);
    }

    return 0;
}
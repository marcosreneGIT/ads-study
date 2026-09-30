// Operador ternario

#include <stdio.h>

int main(void)
{
    int valor01, valor02;

    printf("Informe um valor numerico: ");
    scanf("%d", &valor01);

    if (valor01 < 0)
    {
        valor02 = 0;
    }
    else
    {
        valor02 = valor01;
    }

    printf("\nResolvido com estrutura 'if':");
    printf("\nO valor de valor02 e de: %d", valor02);

    valor02 = (valor01 < 0) ? 0 : valor01;

    printf("\n\nResolvido com estrutura '?': ");
    printf("\nO valor de valor02 e de: %d", valor02);

    return 0;
}
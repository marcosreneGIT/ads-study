// Problema da tabuada

#include <stdio.h>

int main(void)
{
    int numero, resultado;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 10)
    {
        printf("\nTabuado do %d\n", numero);

        for (int contador = 1; contador <= 10; contador++)
        {
            resultado = numero * contador;

            printf("\n%d X %d = %d", numero, contador, resultado);
        }
    }
    else
    {
        printf("\nNumero invalido!");
    }
    printf("\nFim do programa.");

    return 0;
}
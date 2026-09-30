#include <stdio.h>

// Parâmetros formais

int calcula(char opcao, int valor1, int valor2) // Local onde os valores irão ser armazenados
{
    int resultado = 0;

    if (opcao == 'A')
    {
        resultado = valor1 + valor2;
    }
    else
    {
        resultado = valor1 * valor2;
    }
    return resultado;

    // Parâmetros são semelhantes a variaveis locais
}

int main(void)
{
    int calculo = calcula('M', 3, 2); // Porem a entrada de dados é externa
    printf("O valor final foi de: %d", calculo);

    return 0;
}

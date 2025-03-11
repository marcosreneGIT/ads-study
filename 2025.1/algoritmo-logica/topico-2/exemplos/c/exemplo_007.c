#include <stdio.h>
int main(void)
{
    int valor, resultado;
    valor = 101;

    if (valor > 100)
    {
        resultado = 200;
    }
    else
    {
        resultado = 300;
    }
    printf("resultado = %d\n", resultado);

    // O mesmo codigo com o operador ternario

    resultado = valor > 100 ? 200 : 300;

    printf("resultado = %d", resultado);

    return 0;
}
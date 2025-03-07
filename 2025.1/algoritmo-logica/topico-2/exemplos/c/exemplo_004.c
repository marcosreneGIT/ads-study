#include <stdio.h>
int contador = 10; // Declaração da variável Global "contador"

void alterarContador1()
{
    contador = contador + 10;
    printf("# 1 Neste momento o contador e igual a: %d\n", contador);
    // Alteração do valor
}

void alterarContador2()
{
    contador = contador + 20;
    printf("# 2 Neste momento o contador e igual a: %d\n", contador);
    // Outra alteração de valor
}

int main(void)
{
    printf("# 0 Neste momento o contador e igual a: %d\n", contador);

    alterarContador1();
    alterarContador2();

    contador = contador + 30;
    printf("# 3 Neste momento o contador e igual a: %d\n", contador);

    return 0;

    // A variável global pode ser alterada a qualquer instante
}
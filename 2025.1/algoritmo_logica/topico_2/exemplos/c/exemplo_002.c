#include <stdio.h>

// Variáveis locais

void A(void)
{
    int valor;
    valor = 1; // variavel no local A
    printf("A variavel 'valor' em A: %d\n", valor);
};

void B(void)
{
    int valor;
    valor = 2; // variavel no local B
    printf("A variavel 'valor' em B: %d", valor);

    // A variavel "valor" é diferente dentro de cada função
}

int main()
{
    A();
    B();

    return 0;
}

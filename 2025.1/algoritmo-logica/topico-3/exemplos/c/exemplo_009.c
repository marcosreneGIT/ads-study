// if simples

#include <stdio.h>

int main(void)
{
    float nota01, nota02, media;

    printf("\nInforme a NOTA 1: ");
    scanf("%f", &nota01);

    printf("Informe a NOTA 2: ");
    scanf("%f", &nota02);
    printf("\n");

    media = (nota01 + nota02) / 2;

    if (media >= 7)
        printf("APROVADO!");
    else
        printf("REPROVADO!");

    return 0;
}
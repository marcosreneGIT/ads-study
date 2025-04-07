// Escada de if-else-if

#include <stdio.h>

int main(void)
{
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade < 16)
        printf("Crianca.");

    else if (idade > 15 && idade < 22)
        printf("Adolescente.");

    else if (idade >= 22 && idade < 60)
        printf("Adulto.");

    else if (idade >= 60)
        printf("Idoso.");

    else
        printf("Idade invalida.");

    return 0;
}
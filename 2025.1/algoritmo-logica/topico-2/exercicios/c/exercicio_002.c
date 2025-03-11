/*
PROGRAMA: situacaoAluno - Verificar a situação final
do anulo a partir de suas quatro notas obtidas no periodo
AUTOR: Marcos Renê Santos Gomes
DATA: Março/2025 - Versão 1.0
*/

#include <stdio.h>

int main()
{
    float nota[4];
    float media = 0.0, soma = 0.0;
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\nInforme a nota #%d: ", i + 1);
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    media = soma / 4;
    printf("\nMedia: %.2f\n", media);

    if (media < 7)
    {
        printf("O aluno foi REPROVADO!");
    }
    else
    {
        printf("O aluno foi APROVADO!");
    }

    return 0;
}
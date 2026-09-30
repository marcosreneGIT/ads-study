// Media aritmetica com while

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool continuar = true;
    float media;
    int aprovado;

    while (continuar == true)
    {
        media = calculoMedia();
        aprovacao(media);
        continuar = repetirCalculo();
    }

    return 0;
}

float calculoMedia(void)
{
    float notas[4];
    float soma = 0.0, media = 0.0;

    for (int i = 0; i < 4; i++)
    {
        printf("Informe a nota #%d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    media = soma / 4;
    printf("\nSua media foi de %.2f", media);

    return media;
}

int aprovacao(float media)
{

    if (media >= 7)
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }
    return 0;
}

bool repetirCalculo(void)
{

    char opcao;

    printf("Deseja calcular mais uma media [S/N]: ");
    opcao = getchar();

    if (opcao == 'N')
    {
        return false;
    }
    else if (opcao == 'S')
    {
        return true;
    }
    else
    {
        printf("Opcao invalida.");
        return false;
    }
}
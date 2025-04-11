// Switch

#include <stdio.h>

char menu(void)
{
    char opcao;

    printf("\nCadastro de clientes: ");

    printf("\n\n[1] Consulta\n");
    printf("[2] Alteracao\n");
    printf("[3] Inclusao\n");
    printf("[4] Exclusao\n");
    printf("[0] Sair\n\n");

    printf("Selecione a opcao: ");
    opcao = getchar();

    return opcao;
}

int main(void)
{
    char opcao = menu();

    switch (opcao)
    {
    case '1':
        printf("\nVoce escolheu 'Consulta'.");
        break;
    case '2':
        printf("\nVoce escolheu 'Alteracao'.");
        break;
    case '3':
        printf("\nVoce escolheu 'Inclusao'.");
        break;
    case '4':
        printf("\nVoce escolheu 'Exclusao'.");
        break;
    case '0':
        printf("\nVoce escolheu 'Sair'.");
        break;
    default:
        printf("\nOpcao invalida!");
        break;
    }
    return 0;
}
// Operadores booleanos

#include <stdio.h>

int main(void)
{
    int p, q;

    printf("\nInforme o estado de 'p' e 'q' | FALSO: 0 ou VERDADEIRO: 1");
    printf("\nInforme 'p': ");
    scanf("%d", &p);
    printf("Informe 'q': ");
    scanf("%d", &q);

    printf("\np(%d) AND q(%d) resulta: %d", p, q, p && q);
    printf("\np(%d) OR q(%d) resulta: %d", p, q, p || q);
    printf("\nNOT p(%d) resulta: %d", p, !p);
    printf("\nNOT q(%d) resulta: %d", q, !q);

    return 0;
}
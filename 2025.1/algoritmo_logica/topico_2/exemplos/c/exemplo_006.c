#include <stdio.h>
int main()
{
    int iI, iJ, idade;
    iI = 18;
    iJ = 60;
    idade = 59;

    if ((idade > iI) && (idade < iJ))
    {
        // se isso for V e se isso for V
        // A meia idade se caracteriza por qualquer pessoa que tenha
        // menos de 60 anos e mais de 17

        printf("A idade informada e de uma pessoa de meia-idade.");
    }
    else
    {
        if (idade >= iJ)
        {
            printf("A idade informada e de uma pessoa idosa.");
        }
        else
        {
            printf("A idade informada e de um jovem.");
        }
    }
    return 0;
}
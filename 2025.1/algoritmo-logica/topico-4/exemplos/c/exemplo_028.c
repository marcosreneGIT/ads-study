//ordenação por troca

#include <stdio.h>

int main(void){
    int vetor[5] = {76, 63, 46, 14, 20}; 
    int limite = 5;

    printf("\nVetor original: \n");

    for (int n = 0; n < limite; n++){
    printf("\nNumero[%d]: %d", n, vetor[n]);
    }

    //classificação
    for (int i = 1; i < limite; i++){
        for (int j = limite - 1; j >= i; j--){

            if (vetor[j - 1] > vetor[j]){
                int auxiliar = vetor[j - 1]; //salvando valor a ser trocado

                vetor[j - 1] = vetor[j]; //neste ponto efetua-se a troca
                vetor[j] = auxiliar;
            }   
        }
    }
    printf("\n\nORDENANDO...\n");
    printf("\nVetor ordenado: ");
    printf("\n");

    for (int c = 0; c < limite; c++){
        printf("\nNumero[%d] = %d", c, vetor[c]);
    }
    return 0;
}

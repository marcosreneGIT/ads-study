#include <stdio.h>

int main(void){
    int vetor[5] = {76, 63, 46, 14, 20};
    int limite = 5;
    int exchange = 0;

    printf("\nVetor original: \n");

    for (int x = 0; x < limite; x++){
        printf("\nNumero[%d]: %d", x, vetor[x]);
    }
    printf("\n");

    for (int i = 0; i < limite - 1; i++){ // começo da classificação
        exchange = 0;
        int c = i;
        int aux = vetor[i];

        for (int j = i + 1; j < limite; j++){
            
            if (vetor[j] < aux){
                c = j;
                aux = vetor[j];
                exchange = 1;
            }
        }
        if (exchange){
            vetor[c] = vetor[i];
            vetor[i] = aux;
        }
    }

    printf("\n\nORDENANDO...\n");
    printf("\nVetor ordenado: ");
    printf("\n");

    for (int y = 0; y < limite; y++){
        printf("\nNumero[%d] = %d", y, vetor[y]);
    }

    return 0;
}


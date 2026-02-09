#include <stdio.h>

int main(void){
    int vetor[5] = {76, 63, 46, 14, 22};
    int limite = 5;

    printf("\nVetor Original: ");

    int i = 0;
    int j = 0;
    
    for(int w = 0; w < limite; w++){
        printf("\nVetor[%d] = %d", w, vetor[w]);
    }
    // Ordenar por INSERÇÃO
    for (i = 1; i < limite; i++){
        int aux = vetor[i];
        
        for (j = i - 1; j >= 0 && aux < vetor[j]; j--){
            vetor[j + 1] = vetor[j];
        }
        vetor[j + 1] = aux;            
        }
    
    printf("\n\nVetor Classificado por INSERCAO: ");

    for (int z = 0; z < limite; z++){
        printf("\n Vetor[%d] = %d", z, vetor[z]);
    }
    return 0;
    }
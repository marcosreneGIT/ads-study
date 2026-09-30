// vetor

# include <stdio.h>

int main(void){
    float notas[4];
    float soma = 0;

    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("\nInforme a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    for (int j = 0; j < 4; j++){
        soma = soma + notas[j];
    }
    printf("\nA media das notas e: %.1f", (soma / 4));
    return 0;

}
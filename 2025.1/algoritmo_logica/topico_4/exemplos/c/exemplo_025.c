// matriz

#include <stdio.h>

float temperaturaTrimestral[3][4]; // variavel global

void entradaTemperaturas(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("\nInforme a temperatura #%d para o mes #%d: ", j + 1, i + 1);
            scanf("%f", &temperaturaTrimestral[i][j]);
        }
        
    }
}

int main(void){
    entradaTemperaturas();
    
    for (int i = 0; i < 3; i++){
        printf("\nTemperatura do mes #%d: ", i + 1);

        for (int j = 0; j < 4; j++){
            printf("\nTemperatura #%d = %.2f", j + 1, temperaturaTrimestral[i][j]);
        }
    }
    return 0;
}

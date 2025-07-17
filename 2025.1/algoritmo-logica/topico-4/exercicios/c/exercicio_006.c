// matriz

#include <stdio.h>   

int main(void){
    float temperaturaTrimestral[3][4] = {
        {25.4, 27.09, 28.90, 29.50},
        {20.05, 20.90, 21.8, 22.90},
        {17.70, 18.8, 19.00, 20.10}
    };

    printf("\nExemplo de acesso a Matriz Bidimensional:\n\n");

    for (int i = 0; i < 3; i++){
        printf("----- Temperaturas do Mes: %d -----\n", i + 1);
        
        for (int j = 0; j < 4; j++){
            printf("Temperatura %d: %.2f\n", j + 1, temperaturaTrimestral[i][j]);
        }
    }
    return 0;
}
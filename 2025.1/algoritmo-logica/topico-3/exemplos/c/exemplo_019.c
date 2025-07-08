// continue

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// função com o valor booleano
bool verificaPar(int numero){
    if (numero % 2 == 0){
        return true; // o numero é PAR
    }
    else{
        return false; // o numero é IMPAR
    }
}


int main(void){
    for (int numero = 1; numero <= 10; numero ++){
        printf("\n----------------------------------");

        if(verificaPar(numero)){
            printf("\nO numero e PAR!");
        }
        else{
            printf("\nO numero e IMPAR!");
            continue; // para números ímpares, o programa volata para a linha 18 e não execulta a linha 29
        }
        printf("\nProduto numero par %d * 2 e: %d", numero, numero * 2);
    }

    return 0;
}
// return

#include <stdio.h>
#include <stdbool.h>
// função com retorno de valor tipo booleano

bool verificarPar(int numero){
    if (numero % 2 == 0){
        return true; // retorna true (PAR)
    }else{
        return false; // retorna false (IMPAR)
    }
}

int main(void){
    int numeroEntrada = 4;

    if (verificarPar(numeroEntrada)){
        printf("\nSim. O numero %d e PAR", numeroEntrada);
    }
    else{
        printf("\nNao. O numero %d e IMPAR", numeroEntrada);
    }
    return 0;
}
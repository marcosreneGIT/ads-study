// exit

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// função com retorno de valor tipo booleano

bool verificaPar(int numero){
    if (numero % 2 == 0){
        return true; // valor é par
    }
    else{
        return false; // valor é impar
    }
}

int main(void){
    int numeroEntrada = 3;

    if(verificaPar(numeroEntrada)){
        printf("\nO numero e PAR!");
    }
    else{
        printf("\nO numero e IMPAR!\nPrograma CANCELADO!!!");
        exit(1); // termina o programa neste ponto
    }

    return 0;
}
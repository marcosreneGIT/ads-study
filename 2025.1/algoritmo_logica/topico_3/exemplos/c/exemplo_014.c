// do-while

#include <stdio.h>

int main(void){
    printf("\nExemplo de estrutura de repeticao do-while\n");

    int contador = 0; 

    do{
        contador ++;
        printf("\nO valor do contador e = %d", contador);
    }
    while(contador < 10);

    printf("\n\nO valor do contador na saida do laco = %d", contador);

    return 0;

}
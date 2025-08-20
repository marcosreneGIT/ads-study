// recursividade 

#include <stdio.h>

double fatorial(int entrada){
    double vfatorial;

    printf("Chamando fatorial(%d)\n", entrada);

    if (entrada <= 1){
        return 1;
    }
    else{
        vfatorial = entrada * fatorial(entrada - 1);
        printf("Retornando: %.0f\n", vfatorial);
        return vfatorial;
    }
}

int main(void){
    int numero;
    double fat;

    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    printf("CALCULANDO...\n");

    fat = fatorial(numero);

    printf("Fatorial de %d: %.0lf\n", numero, fat);

    return 0;
}

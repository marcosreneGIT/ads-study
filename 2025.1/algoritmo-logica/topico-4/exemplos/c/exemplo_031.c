#include <stdio.h>

int vetor[5] = {76, 63, 46, 14, 22};
int limite = 5;

void qs(int *vetor, int left, int right){
    int i, j;
    int x, y;

    i = left;
    j = right;
    x = vetor[(left + right) / 2];

    do{
        while (vetor[i] < x && i < right) i++;
        while (vetor[j] > x && j > left) j--;

        if (i <= j){
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j)
        qs(vetor, left, j);

    if (i < right)
        qs(vetor, i, right);
}

void quick(int *vetor, int count){
    printf("\nVetor original:\n");

    for (int z = 0; z < limite; z++){
        printf("vetor[%d] = %d\n", z, vetor[z]);
    }

    qs(vetor, 0, count - 1);
}

int main(void){
    quick(vetor, 5);

    printf("\nVetor Classificado QUICKSORT:\n");

    for (int z = 0; z < limite; z++){
        printf("vetor[%d] = %d\n", z, vetor[z]);
    }

    return 0;
}

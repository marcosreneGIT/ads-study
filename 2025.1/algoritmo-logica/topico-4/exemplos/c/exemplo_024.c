// string 

#include <stdio.h>
#include <string.h> // // necessário para str
int main(void){
    char *fruta01 = "banana";
    char *fruta02 = "manga";

    int i;

    i = strncmp(fruta01, fruta02, 7); // compara as 7 posições das duas strings

    if (i < 0){
        printf("\nFruta 1 vem antes.");
    }
    else if(i > 0){
        printf("\nFruta 1 vem depois.");
    }
    else{
        printf("\nAmbas sao iguais.");
    }
    return 0;
}
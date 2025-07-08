// sting

# include <stdio.h>
# include <string.h> // necessário para strcpy e strlen

int main(void){
    char nome[15];
    strcpy(nome, "Fulano de Tal");
    
    printf("\nNome: %s", nome);
    printf("\nTamanho: %d", strlen(nome));
}
/*
quadrado.cpp : calcula o quadrado de um número inteiro
Escrito por Marcos Renê Santos Gomes
Data: 07/03/2025 - Versão 1.0
*/

#include <stdio.h> // Definição de diretivas de biblioteca para printf e scanf
#include <conio.h> // Definição de biblioteca para getch

int main() // Função principal
{
    int num, qua;                        // Definição de variáveis
    printf("Digite um valor inteiro: "); // Mensagem que aparece na tela
    scanf("%d", &num);                   // Guarda o valor digitado

    qua = num * num; // Calcula o quadrado do número

    printf("O quadrado de %d = %d. ", num, qua);      // Apresenta o resultado em tela
    printf("Presione qualquer tecla para finalizar"); // Mensagem em tela

    getch(); // Agurda pressionar uma tecla

    return 0;
}

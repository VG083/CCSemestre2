/*
Faça um programa que leia seu nome completo na entrada (stdin) letra a letra e as escreva uma em cada linha.
Você poderá utilizar qualquer estrutura de repetição.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    char letra;
    // Entrada
    printf("Informe seu nome: ");

    letra = getchar();
    // Processamento
    while (letra != '\n')
    {
        printf("%c\n", letra);
        letra = getchar();
    }
    
    printf("Fim do programa\n");
    // Saída
}
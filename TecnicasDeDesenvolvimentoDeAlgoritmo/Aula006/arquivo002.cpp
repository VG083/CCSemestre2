// 10) Faça um programa em C que leia seu nome completo de entrada (stdin) letra a letra e as escreva em cada linha. Você poderá utilizar qualquer estrutura de repetição.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char letra;

    // Entrada
    printf("Escreva seu nome: ");

    // Processamento
    letra = ' ';
    while(letra != '\n')
    {
        scanf("%c", &letra);
        printf("%c\n", letra);
    }

    // Saída

}
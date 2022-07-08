#include <stdio.h>

int main()
{
    /*
        Exercício de fixação:
        Parte 1: Escreva um programa C para ler separadamente três valores: um número inteiro, um número real e um string, e apresentar separadamete para cada valor lido.
        Parte 2: Modifique o programa para ler os três valores em um só scanf() e apresentá-los em um só printf().
    */

    int idade;
    float peso;
    char nome[45];

    // Fazer a entrada e saída das variaveis separadamete
    // Ler cada valor de entrada e guardar em variaveis
    // Escrever separadamente cada valor
    // Fazer a entrada e saída de dados juntas
    printf("Escreva sua idade, peso e nome: ");
    scanf("%d %f %s", &idade, &peso, &nome);
    printf("%d %.2f %s", idade, peso, nome);

}
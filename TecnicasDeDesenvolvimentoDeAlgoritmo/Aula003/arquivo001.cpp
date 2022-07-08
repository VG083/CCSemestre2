#include <stdio.h>

int main()
{
    /*
        Exercício de fixação:
        Parte 1: Escreva um programa C para ler separadamente três valores: um número inteiro, um número real e um string, e apresentar separadamete para cada valor lido.
        Parte 2: Modifique o programa para ler os três valores em um só scanf() e apresentá-los em um só printf().
    */

   // PARTE 1

   // Criando variáveis
    int idade;
    float peso;
    char nome[20];

    // Entrada e processamento
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    // Processamento

    // Saída
    printf("\nIdade:\t%d\nPeso:\t%.2f\nNome:\t%s", idade, peso, nome);

    // PARTE 2
    
    // Leitura única
    /*
    printf("Escreva sua idade, peso e nome: ");
    scanf("%d %f %s", &idade, &peso, &nome);
    printf("%d %.2f %s", idade, peso, nome);
    */
}
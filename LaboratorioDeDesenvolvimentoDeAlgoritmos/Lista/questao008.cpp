/*
    Questão 8:
    Faça um programa C que leia dez números que representem as notas de dez alunos, e que apresente:
    a) a soma dos números;
    b) a média dos números;
    c) o maior número;
    d) o menor número.
*/

#include <stdio.h>

int main(void){
    float numeros[10];
    int i;
    float soma, maior = 0;
    float menor = 10;

    for (i = 0; i < 10; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    printf("\nA soma de todos os numeros: %.2f", soma);
    printf("\nA media de todos os numeros: %.2f", soma/10);
    printf("\nO maior numero: %.2f", maior);
    printf("\nO menor numero: %.2f", menor);
}
/*
    Questão 2:
    Escreva um programa em C que apresente a tabuada (multiplicação) de um número (1 a 9), inserido pelo usuário.
*/

#include <stdio.h>

int main(void){
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    for (n2 = 1; n2 < 10; n2++)
    {
        printf("\n%d x %d = %d", n1, n2, n1*n2);
    }
}
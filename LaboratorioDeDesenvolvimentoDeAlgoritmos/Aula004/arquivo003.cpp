#include <stdio.h>

/*
Faça um programa que lê diversos números positivos e escreve o dobro de cada um.
Quando um número negativo for digitado, o algoritmo deverá parar de ler números.
*/

int main (void){
    int n = 0;

    while (n>=0)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        if(n>=0)
        {
            printf("O dobro: %d", n*2);
        }
    }
    
}
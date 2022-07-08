/*
    Questão 9:
    Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram digitados
*/

#include <stdio.h>

int main(void){
    int numeros[6];
    int i;

    for (i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 5; i >= 0; i--){
        printf("\n%d", numeros[i]);
    }
}
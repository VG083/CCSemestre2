/*
Escreva um algoritmo em C para ler seu nome completo e guardar uma letra em cada posição de um vetor.
Em seguida exiba os valores desse vetor em ordem crescente dos índices e em ordem decrescente dos índices
*/
#include <stdio.h>

int main(void){
    //Jose Nilton Oliveira Netto
    char meu_nome[26];
    int ind;

    printf("Digite seu nome: \t");

    for(ind = 0; ind < 26; ind++){
        meu_nome[ind] = getchar();
    }

    printf("\n\n");
    for(ind = 0; ind < 26; ind++){
        printf("\nO seu nome na ordem crescente no indice %d e: %c\t", ind+1, meu_nome[ind]);
    }

    printf("\n\n");
    for(ind = 25; ind >= 0; ind--){
        printf("\nO seu nome na ordem crescente no indice %d e: %c\t", ind+1, meu_nome[ind]);
    }
}
/*
Escreva um algoritmo em C para ler o nome e a média de um aluno. Em seguida exiba os valores lidos
*/
#include <stdio.h>

int main(void){
    //Entrada
    char meu_nome[26];
    int ind;
    float media;

    printf("Digite seu nome: \t");
    for(ind = 0; ind < 26; ind++){
        meu_nome[ind] = getchar();
    }

    printf("Digite a media: ");
    scanf("%f", &media);
    //Processamento

    //Saída
    printf("Seu nome: %s", meu_nome);
}
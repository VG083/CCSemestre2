/*
    Atividade: Armazene a média de 7 pessoas
*/

#include <stdio.h>

int main (void){
    // Declarando variáveis
    float medias[7];
    int indice;

    medias[2] = 4.6;

    // Criando laços
    for (indice = 0; indice < 7; indice++){
        printf("Digite a nota do aluno %d: ", indice+1);
        scanf("%f", &medias[indice]);
    }

    for (indice = 0; indice < 7; indice++){
        printf("\nA nota do aluno %d e %.2f: ", indice+1, medias[indice]);
    }

    return 0;
}
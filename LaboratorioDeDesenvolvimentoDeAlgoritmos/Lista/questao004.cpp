/*
    Questão 4:
    Desenvolva um programa para comparar a idade de Pedro e a de Joana e informar quem é o mais velho.
    Dados de entrada: idade de Pedro e de Joana (tipo das variáveis: inteiro, e valor em anos).
    Observação: essas pessoas possuem idades diferentes.
*/

#include <stdio.h>

int main(void){
    int pedro, joana;

    printf("Digite a idade de Pedro: ");
    scanf("%d", &pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d", &joana);

    if(pedro > joana){
        printf("Pedro e %d anos mais velho do que a Joana", pedro-joana);
    }
    if(joana > pedro){
        printf("Joana e %d anos mais velha do que o Pedro", joana-pedro);
    }
}
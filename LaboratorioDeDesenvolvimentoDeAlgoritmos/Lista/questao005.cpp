/*
    Questão 5:
    Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e informar quem é o mais velho.
    Dados de entrada: idade de Pedro, de Joana e de Ismael (tipo das variáveis: inteiro, e valor em anos).
    Considere que essas pessoas possuem idades diferentes.
*/

#include <stdio.h>

int main(void){
    int pedro, joana, ismael;

    printf("Digite a idade de Pedro: ");
    scanf("%d", &pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d", &joana);
    printf("Digite a idade de Ismael: ");
    scanf("%d", &ismael);

    if((pedro>joana) && (pedro>ismael)){
        printf("Pedro e %d anos mais velho do que a Joana e %d anos mais velho do que o Ismael", pedro-joana, pedro-ismael);
    }
    if((joana>pedro) && (joana>ismael)){
        printf("Joana e %d anos mais velha do que o Pedro e %d anos mais velha do que o Ismael", joana-pedro, joana-ismael);
    }
    if((ismael>pedro) && (ismael>joana)){
        printf("Ismael e %d anos mais velho do que o Pedro e %d anos mais velho do que a Joana", ismael-pedro, ismael-joana);
    }
}
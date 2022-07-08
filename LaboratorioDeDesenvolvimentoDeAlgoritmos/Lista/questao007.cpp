/*
    Questão 7:
    Faça um programa em C, que a uma vez que se forneça um número inteiro de 1 a 12, apresente o nome do mês correspondente por extenso ou uma mensagem de inválido, caso o usuário digite um número fora do estabelecido.
*/

#include <stdio.h>

int main(void){
    int mes;

    printf("Digite um numero inteiro entre 1 e 12: ");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("O mes 1 se refere a Janeiro");
        break;
    case 2:
        printf("O mes 2 se refere a Fevereiro");
        break;
    case 3:
        printf("O mes 3 se refere a Marco");
        break;
    case 4:
        printf("O mes 4 se refere a Abril");
        break;
    case 5:
        printf("O mes 5 se refere a Maio");
        break;
    case 6:
        printf("O mes 6 se refere a Junho");
        break;
    case 7:
        printf("O mes 7 se refere a Julho");
        break;
    case 8:
        printf("O mes 8 se refere a Agosto");
        break;
    case 9:
        printf("O mes 9 se refere a Setembro");
        break;
    case 10:
        printf("O mes 10 se refere a Outubro");
        break;
    case 11:
        printf("O mes 11 se refere a Novembro");
        break;
    case 12:
        printf("O mes 12 se refere a Dezembro");
        break;
    default:
        printf("Numero digitado invalido por estar fora do estabelecido");
        break;
    }
}
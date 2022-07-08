/*
    Questão 1:
    Escreva um programa que leia o número de alunos e de alunas de uma sala. Como saída, o programa deve apresentar o número de alunos e em seguida o de alunas.
*/

#include <stdio.h>

int main(void){
    int alunos, alunas;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &alunos);
    printf("Digite a quantidade de alunas da turma: ");
    scanf("%d", &alunas);

    printf("\nTem %d alunos na turma", alunos);
    printf("\nTem %d alunas na turma", alunas);
}
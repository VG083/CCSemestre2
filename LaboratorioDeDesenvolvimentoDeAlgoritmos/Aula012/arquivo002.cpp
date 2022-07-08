/*
    Crie um struct ALUNO que contem o nome do aluno, a matricula, as 3 notas e a data da matricula. Receba os dados e apresente-os na tela
*/
#include <stdio.h>

struct aluno{
    char nome[15];
    int matricula;
    int nota1;
    int nota2;
    int nota3;
};

struct date{
    int dia;
    char mes[10];
    int ano;
};

int main(void){
    struct aluno aluno1;
    struct date data1;

    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno1.nome);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno1.matricula);

    printf("Digite o dia: ");
    scanf("%d", &data1.dia);

    printf("Digite o mes: ");
    scanf("%s", &data1.mes);

    printf("Digite o ano: ");
    scanf("%d", &data1.ano);

    printf("Digite a nota 1 do aluno: ");
    scanf("%d", &aluno1.nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%d", &aluno1.nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%d", &aluno1.nota3);

    printf("\nDADOS DO ALUNO:\n");
    printf("\nNome: %s", aluno1.nome);
    printf("\nMatricula: %d", aluno1.matricula);
    printf("\nData da matricula: %d/%s/%d\n", data1.dia, data1.mes, data1.ano);
    printf("\nNota 1: %d", aluno1.nota1);
    printf("\nNota 2: %d", aluno1.nota2);
    printf("\nNota 3: %d", aluno1.nota3);
}
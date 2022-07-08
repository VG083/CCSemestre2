#include <stdio.h>

int main(void){
    int alunos[20];
    int matriculas[20];
    float notas[20];
    int i;

    for(i=0; i<20; i++){
        alunos[i] = i+1;
        printf("Aluno %d\n", alunos[i]);
        printf("Digite a matricula do aluno: ");
        scanf("%d", &matriculas[i]);
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
    }

    printf("\nLista de alunos:\n");
    for(i=0; i<20; i++){
        printf("\nAluno %d", alunos[i]);
        printf("\nMatricula: %d", matriculas[i]);
        printf("\nNota: %.1f\n", notas[i]);
    }

    printf("\nLista de alunos com nota igual ou superior a 5\n");
    for(i=0; i<20; i++){
        if(notas[i] >= 5){
            printf("\nAluno %d", alunos[i]);
            printf("\nMatricula: %d", matriculas[i]);
            printf("\nNota: %.1f\n", notas[i]);
        }
    }
}
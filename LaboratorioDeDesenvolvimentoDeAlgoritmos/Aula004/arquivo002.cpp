#include <stdio.h>
/*
Crie um programa que lê o conceito de um aluno na disciplina BCC2021, (Introdução a programação) e imprime seu significado, de acordo com a cabela abaixo. Caso seja informado um conceito inexistente, deve ser exibida uma mensagem de erro.
Conceito    Significado
A           Excelente
B           Ótimo
C           Bom
D           Regular
E           Ruim
F           Nos vemos de novo ano que vem...
*/

int main (void){
    char conceito;

    printf("Digite o conceito do aluno: ");
    scanf("%c", &conceito);

    switch (conceito){
        case 'A':
            printf("Excelente\n");
            break;
        case 'B':
            printf("Otimo\n");
            break;
        case 'C':
            printf("Bom\n");
            break;
        case 'D':
            printf("Regular\n");
            break;
        case 'E':
            printf("Ruim\n");
            break;
        case 'F':
            printf("Nos vemos de novo ano que vem...");
            break;
        default:
            printf("Erro de conceito inexistente");
            break;
    }
}
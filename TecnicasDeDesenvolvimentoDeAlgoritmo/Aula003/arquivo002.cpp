#include <stdio.h>

int main()
{
    /*
    Leia duas notas, calcule a soma e mostre na tela:
        Aprovado se a soma for maior ou igual a 6.0
        Final se a soma for menor que 6.0 e maior ou igual a 1.0
        Reprovado se a soma for menor que 1.0
    */
    
   // Coletando variáveis
    float nota1, nota2, soma;

    // Entrada
    printf("Informe as duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    // Processamento e saída
    soma = nota1 + nota2;
    if (soma >= 6.0)
    {
        printf("\nAprovado\n");
    }
    else
    {
        if (soma >= 1)
        {
            printf("\nFinal\n");
        }
        else
        {
            printf("\nReprovado\n");
        }
    }
}
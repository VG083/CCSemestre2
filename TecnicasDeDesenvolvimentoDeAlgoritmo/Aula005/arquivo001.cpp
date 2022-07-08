/*
8) Faça um programa que calcule a média de duas notas. Ao final dos cálculos pergunte ao usuário se ele quer realizar um novo cálculo. Se a resposta for 's' repita, para qualquer outra resposta saia do programa.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;
    char resposta;

    // Entrada
    do {
        printf("Informe as duas notas: \n");
        scanf("%f %f", &nota1, &nota2);

        // Procesamento
        media = (nota1+nota2) / 2;

        getchar();
        printf("Deseja continuar com um novo calculo? (s/n)\n");
        scanf("%c", &resposta);
    } while(resposta == 's');
    // Saída
    printf("Final do programa");
}
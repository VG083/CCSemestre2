/*
    Questão 10:
    Desenvolva um programa que leia dez números do tipo inteiro ao usuário. Armazene esses dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em seguida, o programa deverá apresentar na tela os resultados.
*/

#include <stdio.h>

int main(void){
    int numeros[10];
    int i;
    int somatorio = 0, subtracao = 0;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if(i%2 == 0){
            somatorio += numeros[i];
        }else{
            subtracao -= numeros[i];
        }
    }

    printf("\nSoma dos numeros em vetores pares: %d", somatorio);
    printf("\nSubtracao dos numeros em vetores impares: %d", subtracao);
}
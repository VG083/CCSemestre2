// Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.
#include <stdio.h>

int main(void){
    int v1, v2, v3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    if (v1>v2 && v1>v3){
        printf("O primeiro valor e o maior entre os 3");
    }else if (v2>v1 && v2>v3){
        printf("O segundo valor e o maior entre os 3");
    }else if (v3>v1 && v3>v2){
        printf("O terceiro valor e o maior entre os 3");
    }

    return 0;
}
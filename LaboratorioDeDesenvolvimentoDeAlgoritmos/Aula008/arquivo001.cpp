/*
Faça um programa que lê três letras do teclado e imprime-as na ordem inversa.
Primeiro fazer com três variáveis e depois com arrays
*/
#include <stdio.h>

int main (void){
    char letra1, letra2, letra3;
    printf("Digite a letra 1: ");
    scanf("%c", &letra1);
    printf("Digite a letra 2: ");
    scanf("%c", &letra2);
    printf("Digite a letra 3: ");
    scanf("%c", &letra3);
    
    printf("A ordem inversa e: %c, %c, %c", letra3, letra2, letra1);
    
    char letras[3];
    int i;

    for(i = 0; i < 3; i++){
        printf("Digite a letra");
        scanf("%c", &letras[i]);
    }
    for(i = 2; i >= 0; i--){
        printf("\n%c", letras[i]);
    }

    return 0;
}
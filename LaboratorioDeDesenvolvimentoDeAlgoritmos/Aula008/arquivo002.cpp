/*
Receb 10 números inteiros e jogue em um array.
Depois, descubra o indice do maior valor e apresente-o junto com este valor
*/
#include <stdio.h>

int main (void){
    int numeros[10];
    int i;
    int indicemaiorvalor = 0;
    int maiorvalor = -2147483647;

    for(i = 0; i < 10; i++){
        printf("Digite o valor: ");
        scanf("%d", &numeros[i]);
    }

    maiorvalor = numeros[0];

    for(i = 0; i < 10; i++){
        if(numeros[i] > maiorvalor){
            maiorvalor = numeros[i];
            indicemaiorvalor = i;
        }
    }

    printf("O maior valor e %d e esta no indice %d", maiorvalor, indicemaiorvalor);
    
    return 0;
}
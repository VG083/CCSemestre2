/*
Receba 6 numeros reais num array e mostre a soma dos numeros positivos
*/
#include <stdio.h>

int main (void){
    int numeros[6];
    int i;
    int soma = 0;

    for(i = 0; i < 6; i++){
        printf("Digite o valor: ");
        scanf("%d", &numeros[i]);
        if(numeros[i] > 0){
            soma += numeros[i];
        }
    }

    printf("A soma dos valores positivos e %d", soma);
    
    return 0;
}
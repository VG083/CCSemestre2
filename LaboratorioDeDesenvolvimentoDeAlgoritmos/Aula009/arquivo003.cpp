/*
Faça um programa que lê uma matriz de 3x3 elementos, multiplique cada elemento por 5 e imprima a matriz resultante
*/
#include <stdio.h>

int main(void){
    int matriz[3][3];
    int linha, coluna;
    int valor;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Informe um valor: ");
            scanf("%d", &matriz[linha][coluna]);
            matriz[linha][coluna] *= 5;
        }
    }

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 2; coluna++){
            printf("%d - ", matriz[linha][coluna]);
        }
        printf("%d\n", matriz[linha][coluna]);
    }
    
    return 0;
}
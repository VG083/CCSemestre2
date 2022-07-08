/*
Criar uma matriz 3 por 3 e preencher com valores inteiros.
Depois mostrar linha por linha os valores das colunas. Em seguida exiba-os mostrando um " - " entre os valores.
*/
#include <stdio.h>

int main(void){
    //Entrada
    int matriz[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Informe um valor inteiro: ");
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    //Saída
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 2; coluna++){
            printf("%d - ", matriz[linha][coluna]);
        }
        printf("%d\n", matriz[linha][coluna]);
    }
}
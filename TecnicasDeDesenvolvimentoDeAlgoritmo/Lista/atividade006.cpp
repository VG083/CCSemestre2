#include <stdio.h>

int main(void){
    int linha, coluna, v1, v2;

    printf("Digite o tamanho do quadrado que quer desenhado (Exemplo: 5 5)\n");
    scanf("%d %d", &v1, &v2);
    

    for(linha = 0; linha < v1; linha++){
        for(coluna = 0; coluna < v2; coluna++){
            printf("X ");
        }
        printf("\n");
    }

    return 0;
}
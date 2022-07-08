#include <stdio.h>
#include <limits.h>

int main(void){
    int matriz[3][4];
    int linha, coluna;
    int menorvalor = INT_MAX, maiorvalor = INT_MIN;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("Informe um valor inteiro: ");
            scanf("%d", &matriz[linha][coluna]);
            
            if (matriz[linha][coluna] > maiorvalor){
                maiorvalor = matriz[linha][coluna];
            }
            if (matriz[linha][coluna] < menorvalor){
                menorvalor = matriz[linha][coluna];
            }
        }
    }
    
    printf("Maior valor: %d", maiorvalor);
    printf("\nMenor valor: %d", menorvalor);

    return 0;
}
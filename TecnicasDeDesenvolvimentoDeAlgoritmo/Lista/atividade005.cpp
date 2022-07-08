#include <stdio.h>

int main(void){
    int v1, v2;
    char resposta = 'S';

    while(resposta == 'S' || resposta == 's'){
        printf("Digite dois valores: ");
        scanf("%d %d", &v1, &v2);
        printf("\nEsses dois valores somados resultam em %d", v1+v2);

        printf("\nNovo Calculo (S/N)? ");
        getchar();
        scanf("%c", &resposta);
    }
    
    printf("\nFim dos calculos");
    
    return 0;
}
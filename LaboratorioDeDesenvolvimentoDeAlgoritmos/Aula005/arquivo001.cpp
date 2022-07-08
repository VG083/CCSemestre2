/* 
    1) Receba a informação do sexo de 20 pessoas e me diga quantos homens e quantas mulheres há
*/
#include <stdio.h>

int main (void){
    char sexo;
    int homem, mulher = 0;
    int i;

    for(i = 0; i < 20; i++){
        printf("\nDigite o sexo: ");
        scanf("%c", &sexo);

        if(sexo == 'm'){
            homem++;
        }
        if(sexo == 'f'){
            mulher++;
        }
    }

    printf("Tem %d mulheres e %d homens.", mulher, homem);

    return 0;
}
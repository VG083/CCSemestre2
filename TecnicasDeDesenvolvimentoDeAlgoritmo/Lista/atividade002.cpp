#include <stdio.h>

int main(void){
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor >= 10 && valor <= 15){
        printf("O valor esta contido no intervalo entre 10 e 15");
    }else{
        printf("O valor nao esta contido no intervalo entre 10 e 15");
    }

    return 0;
}
#include <stdio.h>

/*
    Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero(0).
*/

int main (void){
    int n = 1;
    int valores = 0;
    int contador = 0;
    float media;

    while (n != 0)
    {
        printf("Digite um valor: ");
        scanf("%d",&n);
        if(n/2 == 0){
            valores += n;
            contador++;
        }
    }
    
    media = valores/contador;
    printf("A media foi: %d", &media);

    return 0;
}
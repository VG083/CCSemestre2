/*
    Faça um programa que leia vários conjuntos de três valores reais e mostrepara cada conjunto: sua soma, seu produto e sua média. O programa para quando um dos valores for zero.
*/
#include <stdio.h>

int main (void){
    int n1, n2, n3;
    int v = 1;
    
    while(v==1){
        printf("Digite 3 valores: ");
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 == 0 || n2 == 0 || n3 == 0){
            break;
        }
        else{
            printf("Sua soma: %d\n", n1+n2+n3);
            printf("Seu produto: %d\n", n1*n2*n3);
            printf("Sua media: %d\n", (n1+n2+n3)/3);
        }
    }
    
    return 0;
}
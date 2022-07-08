#include <stdio.h>

int main(void){
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("\n%c", caractere);
    printf("\n%d", caractere);
    printf("\n%x", caractere);

    return 0;
}
/*
    Questão 3:
    Desenvolva um programa para calcular e escrever a área e o perímetro de um retângulo. 
    Dados de entrada: tamanho da base e da altura (tipo das variáveis: inteiro, valor em centímetros)
*/

#include <stdio.h>

int main(void){
    int b, h, area, perimetro;

    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite a altura: ");
    scanf("%d", &h);

    area = b*h;
    perimetro = (b+h)*2;

    printf("\nArea do retangulo: %d", area);
    printf("\nPerimetro do retangulo: %d", perimetro);
}
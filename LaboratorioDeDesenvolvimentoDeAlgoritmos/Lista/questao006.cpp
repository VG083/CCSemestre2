/*
    Questão 6:
    Escreva um programa que informe o valor de uma corrida de taxi. Para calcular o valor da corrida é necessário saber a distância percorrida em quilômetros e qual o tipo da bandeira da corrida, 1 ou 2. Caso a bandeira seja 1, o preço do quilometro percorrido é de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30.
    Solicite do usuário a distância percorrida em quilômetros e qual o tipo da bandeira da corrida e informe o valor da corrida
*/

#include <stdio.h>

int main(void){
    int corrida;
    float distancia, valor;

    printf("Digite a distancia percorrida em quilometros: ");
    scanf("%f", &distancia);
    printf("Digite o tipo da bandeira da corrida: ");
    scanf("%d", &corrida);
    
    if(corrida == 1){
        valor = distancia * 1.80;
    }
    if (corrida == 2){
        valor = distancia * 2.30;
    }
    
    printf("Valor da corrida: R$ %.2f", valor);
}
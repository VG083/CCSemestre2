/*
    Escreva um algoritmo em C para ler 5 números, um de cada vez e ir armazenando-o em um vetor.
    Em seguida exiba os valores desse vetor em ordem crescente dos índices e em ordem decrescente dos índices
*/
#include <stdio.h>

int main(void){
    // Declarando as variáveis
    int valores[5];
    int indice, aux_valor;

    // Entrada: Criando laço para ler os 5 números
    for (indice = 0; indice < 5; indice++){
        printf("Digite o numero %d: ", indice+1);
        scanf("%d", &aux_valor);
        valores[indice] = aux_valor;
    }

    // Sem etapa de processamento

    // Saída: Ler os valores em ordem crescente e depois decrescente
    printf("\nOrdem crescente dos indices:");
    for (indice = 0; indice < 5; indice++){
        printf("\nO %d valor e %d", indice+1, valores[indice]);
    }

    printf("\nOrdem decrescente dos indices:");
    for (indice = 4; indice >= 0; indice--){
        printf("\nO %d valor e %d", indice+1, valores[indice]);
    }
    
    return 0;
}
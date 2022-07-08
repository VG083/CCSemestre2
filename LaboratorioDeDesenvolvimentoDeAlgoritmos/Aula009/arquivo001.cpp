/*
Receba 6 números reais em um vetor, em seguida apresente a quantidade de negativos e a soma dos positivos. Enquanto recebe os números, verifique se recebeu um zero. Se sim, peça para inserir novamente o número, até garantir que tenha recebido 6 números diferentes de 0
Avise se não houver números positivos ou negativos
*/
#include <stdio.h>

int main (void){
    int i, valor, quantidade_negativos = 0, soma_positivos = 0;

    for (i = 0; i < 6; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);
        if(valor > 0){
            soma_positivos += valor;
        }else if (valor < 0){
            quantidade_negativos++;
        }else if (valor == 0){
            i -= 1;
            printf("Valor 0 inserido, por favor insira um valor diferente de 0\n");
        }
    }

    if(quantidade_negativos == 0){
        printf("Nao houve numeros negativos");
    }else{
        printf("A quantidade de numeros negativos foi: %d", quantidade_negativos);
    }

    if (soma_positivos == 0){
        printf("\nNao houve numeros positivos");
    }else{
        printf("\nA soma dos numeros positivos resultou em: %d", soma_positivos);
    }
    
    return 0;
}
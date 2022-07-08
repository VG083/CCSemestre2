#include <stdio.h>

int main(void){
    int valores[10], indice, n, cont3 = 0, contn = 0;

    for(indice = 0; indice < 10; indice++){
        printf("Digite um numero: ");
        scanf("%d", &valores[indice]);
        if(valores[indice] == 3){
            cont3++;
        }
    }

    printf("O numero 3 foi digitado %d vezes", cont3);

    printf("\nQual numero voce deseja pesquisar? ");
    scanf("%d", &n);

    for(indice = 0; indice < 10; indice++){
        if (valores[indice] == n){
            contn++;
        }
    }
    printf("O numero %d foi digitado %d vezes", n, contn);

    return 0;
}
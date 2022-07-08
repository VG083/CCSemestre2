/*
    2) Calculadora: recebe 2 números e o operador (+, -, *, /) e apresenta o resultado
        // Fazer com if else
*/
#include <stdio.h>

int main (void){
    int n1, n2;
    char op;

    printf("Digite o primeiro numero: \n");
    scanf("%d",&n1);
    
    printf("Digite a operacao: \n");
    scanf("%c",&op);
    
    printf("Digite o segundo numero: \n");
    scanf("%d",&n2);

    if(op == '+'){
        printf("O resultado da %d ", n1+n2);
    }else if(op == '-'){
        printf("O resultado da %d ", n1-n2);
    }else if(op == '*'){
        printf("O resultado da %d ", n1*n2);
    }else if(op == '/'){
        if(n2 == 0){
            printf("Divisao por 0 nao e permitida");
        }
        else{
            printf("O resultado da %d ", n1/n2);
        }
    }else{
        printf("Operador invalido");
    }

    return 0;
}
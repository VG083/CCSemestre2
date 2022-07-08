#include <stdio.h>

/*
Recebe o salário e o valor de empréstimo a ser tirado.
Se o valor do empréstimo foi maior do que o salário, ele será negado. Senão, será liberado.
Avise ao usuário a sua situação.
*/

int main (void){
    int salario, emprestimo = 0;
    
    printf("Digite o valor do salario: ");
    scanf("%d", &salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%d", &emprestimo);

    if(salario>=emprestimo)
    {
        printf("Emprestimo aceito");
    }
    else
    {
        printf("Emprestimo negado");
    }

}
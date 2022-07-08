#include <stdio.h>

int main()
{
    int idade;
    char nome[120];
    // Input e Output de dados
    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    printf("Nome: %s\nIdade: %d", nome, idade);
}
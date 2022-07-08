#include <stdio.h>

int main()
{
    int idade;
    char nome[120];
    // Input de dois dados em uma só linha
    printf("Informe seu nome e idade: ");
    scanf("%s %d", &nome, &idade);
    printf("Nome: %s\nIdade: %d", nome, idade);
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    
    char nome[50];
    int i = 0;
    
    printf("Digite seu nome: "); fgets(nome, 50, stdin);
    
    printf("Seu nome em texto normal:\n%s", nome);

    printf("Seu nome com palavras em linhas diferentes\n");
    while (nome[i] != '\0'){
        printf("%c",nome[i]);
        if (nome[i]==' ') printf("\n");
        i++;
    }
    
    printf("Seu nome com palavras em linhas diferentes e letras separadas com espaco\n");
    i = 0;
    while (nome[i] != '\0'){
        printf("%c ", nome[i]);
        if (nome[i]==' ') printf("\n");
        i++;
    }

    return 0;
}
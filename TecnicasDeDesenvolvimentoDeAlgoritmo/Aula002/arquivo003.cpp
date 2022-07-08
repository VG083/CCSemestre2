#include <stdio.h>

int main()
{
    int idade = 18;
    float peso = 49.8691;
    /*
        O \t deixa um tab formatando o texto
        O \b apaga o caracter escrito antes, como se tivesse apertado o backspace(tecla apagar) do seu teclado
        O \a faz o toque do sistema ligando
    */
    printf("\aMinha\bidade:\t%d, Meu peso:\t%.2f \n", idade, peso);
    printf("Minha id:\t%d, Meu peso:\t%.2f \n", idade, peso);
    printf("Minha idade:\t%d, Meu p:\t%.2f \n", idade, peso);
}
/*
14) Calcular e apresentar o somatório do número de grãos de trigo que se pode colocar em um tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se 1 grão, no segundo quadro coloca-se 2 grãos (neste momento têm-se 3 grãos), no terceiro quadro coloca-se 4 grãos (tendo neste momento 7 grãos), no quarto quadro colocam-se 8 grãos (tendo-se então 15 grãos) até atingir o sexagésimo quadro (Este exercício foi baseado numa situação exposta no capítulo 16 do livro ”O Homem que Calculava” de Malba Tahan da Editora Record)
*/
#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned long long t_geral, t_celula;
    int contador;
    //Processamento
    t_celula = 1;
    t_geral = 1;
    for (contador = 2; contador <= 64; contador++)
    {
        t_celula = t_celula * 2;
        //printf("Total da celula %d: %d\n", contador, t_celula);
        t_geral = t_geral + t_celula;
    }
    //Saída
    printf("Total no tabuleiro: %llu", t_geral);
}
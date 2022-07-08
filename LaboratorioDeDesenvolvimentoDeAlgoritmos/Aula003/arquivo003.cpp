#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    unsigned int ano_nas = 1991;
    unsigned int ano_atual = 2021;
    unsigned int ano_futuro = 2030;

    printf("Sua idade é %d anos\n", ano_atual-ano_nas);
    printf("Sua idade em 2030 será de %d anos", ano_futuro-ano_nas);

    return 0;
}
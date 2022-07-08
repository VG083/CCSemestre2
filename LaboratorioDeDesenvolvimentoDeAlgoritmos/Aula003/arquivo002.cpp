#include <stdio.h>

int main()
{
    // ano do meu nascimento, ano atual e ano de 2030
    unsigned int nascimento, atual, futuro;
    futuro = 2030;
    printf("Informe seu ano de nascimento: ");
    scanf("%u", &nascimento);
    printf("Informe o ano atual: ");
    scanf("%u", &atual);
    printf("Voce tem %d anos agora e tera %d em 2030", atual-nascimento, futuro-nascimento);

    return 0;
}
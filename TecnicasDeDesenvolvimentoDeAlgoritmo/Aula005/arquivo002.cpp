/*
3) Leia o ano de nascimento de um nadador e classifique-o em uma das categorias:
Intantil A  --- de 5 a 7 anos
Infantil B  --- de 8 a 10 anos
Juvenil A   --- de 11 a 13 anos
Juvenil B   --- de 14 a 17 anos
Sênior      --- maiores de 17 anos
O programa deve fornecer uma saída do tipo:
Nadador de idade "idade" é da categoria "categoria"
*/
#include <stdio.h>

int main()
{
    int nascimento, idade, atual = 2021;

    // Entrada
    printf("Informe o ano de nascimento do nadador: ");
    scanf("%d", &nascimento);

    // Processamento e saída
    idade = atual - nascimento;

    if (idade<5 || idade>100){
        printf("Nadador de idade %d esta fora das categorias", idade);
    }
    switch (idade)
    {
    case 5:
    case 6:
    case 7:
        printf("Nadador de idade %d e da categoria Infantil A", idade);
        break;
    case 8:
    case 9:
    case 10:
        printf("Nadador de idade %d e da categoria Infantil B", idade);
        break;
    case 11:
    case 12:
    case 13:
        printf("Nadador de idade %d e da categoria Juvenil A", idade);
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Nadador de idade %d e da categoria Juvenil B", idade);
        break;
    default:
        printf("Nadador de idade %d e da categoria Senior", idade);
        break;
    }
}

/*
int main()
{
    int nascimento, idade, atual = 2021;

    // Entrada
    printf("Informe o ano de nascimento do nadador: ");
    scanf("%d", &nascimento);

    // Processamento e saída
    idade = atual - nascimento;

    if (idade >= 5 && idade <= 7)
    {
        printf("Nadador de idade %d e da categoria Infantil A", idade);
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Nadador de idade %d e da categoria Infantil B", idade);
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Nadador de idade %d e da categoria Juvenil A", idade);
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Nadador de idade %d e da categoria Juvenil B", idade);
    }
    else if (idade >= 18 && idade <= 100)
    {
        printf("Nadador de idade %d e da categoria Senior", idade);
    }
    else
    {
        printf("Nadador de idade %d esta fora das categorias de nado", idade);
    }
}
*/
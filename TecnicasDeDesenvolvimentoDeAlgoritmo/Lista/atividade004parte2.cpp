#include <stdio.h>

int main(void){
    int idade, nascimento;
    int atual = 2021;

    printf("Informe o ano de nascimento do nadador: ");
    scanf("%d", &nascimento);

    idade = atual-nascimento;

    switch (idade){
        case 5:
            printf("O nadador de idade %d pertence a categoria Infantil A", idade);
            break;
        case 6:
            printf("O nadador de idade %d pertence a categoria Infantil A", idade);
            break;
        case 7:
            printf("O nadador de idade %d pertence a categoria Infantil A", idade);
            break;
        case 8:
            printf("O nadador de idade %d pertence a categoria Infantil B", idade);
            break;
        case 9:
            printf("O nadador de idade %d pertence a categoria Infantil B", idade);
            break;
        case 10:
            printf("O nadador de idade %d pertence a categoria Infantil B", idade);
            break;
        case 11:
            printf("O nadador de idade %d pertence a categoria Juvenil A", idade);
            break;
        case 12:
            printf("O nadador de idade %d pertence a categoria Juvenil A", idade);
            break;
        case 13:
            printf("O nadador de idade %d pertence a categoria Juvenil A", idade);
            break;
        case 14:
            printf("O nadador de idade %d pertence a categoria Juvenil B", idade);
            break;
        case 15:
            printf("O nadador de idade %d pertence a categoria Juvenil B", idade);
            break;
        case 16:
            printf("O nadador de idade %d pertence a categoria Juvenil B", idade);
            break;
        case 17:
            printf("O nadador de idade %d pertence a categoria Juvenil B", idade);
            break;
        default:
            printf("O nadador de idade %d pertence a categoria Senior", idade);
            break;}
    
    return 0;
}
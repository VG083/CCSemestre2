#include <stdio.h>

int main(void){
    int idade, nascimento;
    int atual = 2021;

    printf("Informe o ano de nascimento do nadador: ");
    scanf("%d", &nascimento);

    idade = atual-nascimento;

    if(idade >= 5 && idade <= 7){
        printf("O nadador de idade %d pertence a categoria Infantil A", idade);
    }else if (idade >= 8 && idade <= 10){
        printf("O nadador de idade %d pertence a categoria Infantil B", idade);
    }else if (idade >= 11 && idade <= 13){
        printf("O nadador de idade %d pertence a categoria Juvenil A", idade);
    }else if (idade >= 14 && idade <= 17){
        printf("O nadador de idade %d pertence a categoria Juvenil B", idade);
    }else if (idade > 17){
        printf("O nadador de idade %d pertence a categoria Senior", idade);
    }else{
        printf("Idade invalida");
    }
    
    return 0;
}
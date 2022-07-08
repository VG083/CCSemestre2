/*
    Crie uma struct que contenha dia, mês e ano. O mês deve ser escrito por extenso (Exemplo: Julho). Receba os dados do usuário, armazene em uma struct e print os dados no seguinte formato: dia/mês/ano
*/
#include <stdio.h>

struct date{
    int dia;
    char mes[10];
    int ano;
};


int main(void){
    struct date data1;

    printf("Digite o dia: ");
    scanf("%d", &data1.dia);

    printf("Digite o mes: ");
    scanf("%s", &data1.mes);
    //gets(data1.mes);

    printf("Digite o ano: ");
    scanf("%d", &data1.ano);

    printf("A data e: %d/%s/%d", data1.dia, data1.mes, data1.ano);
}
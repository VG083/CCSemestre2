/*
Recebe os preços de 5 produtos em um vetor. Calcule e exiba:
- A quantidade de produtos com preço inferior a R$ 50,00
- A quantidade de produtos entre R$ 50,00 e R$ 80,00
- A quantidade acima de R$ 80,00
- A média dos preços dos produtos
*/
#include <stdio.h>

int main (void){
    float precos[5];
    float media;
    int qtd_menor50 = 0, qtd_entre50e80 = 0, qtd_maior80 = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o preco do produto: R$ ");
        scanf("%f", &precos[i]);
        if(precos[i] < 50){
            qtd_menor50++;
        }else if(precos[i] >= 50 && precos[i] <= 80){
            qtd_entre50e80++;
        }else if(precos[i] > 80){
            qtd_maior80++;
        }
        media += precos[i];
    }
    printf("Ha %d produtos com valor inferior a R$ 50.00", qtd_menor50);
    printf("\nHa %d produtos com valor entre R$ 50.00 e R$ 80.00", qtd_entre50e80);
    printf("\nHa %d produtos com valor superior a R$ 80.00", qtd_maior80);
    printf("\nA media de preco dos produtos e de %.2f", media/5);

    return 0;
}
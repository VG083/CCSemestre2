/*
Construir um programa que efetue um cálculo do salário líquido de um operário
Será necessário conhecer o valor da hora de trabalho, número de horas trabalhadas no mês e percentual de desconto de INSS
Deve-se saber primeiro o valor do salário bruto, para então calcular o valor do desconto e finalmente o valor do salário líquido
*/
#include <stdio.h>
#include<locale.h>

int main()
{
    float sal_liquido, valor_hora, hora_trab, sal_bruto, valor_desconto, percentual;
    // Entrada
    printf("Informe valor da hora, quantidade de horas e o percentual de desconto do INSS\n");
    scanf("%f %f %f", &valor_hora, &hora_trab, &percentual);
    // Processamento
    sal_bruto = valor_hora * hora_trab;
    valor_desconto = (sal_bruto * percentual) / 100;
    sal_liquido = sal_bruto - valor_desconto;
    // Saída
    printf("O salario liquido e de %.2f", sal_liquido);
}
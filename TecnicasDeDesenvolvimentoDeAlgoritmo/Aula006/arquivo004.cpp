/*
12) Apresentar como resultado o valor de uma potência de uma base qualquer elevada a um expoente qualquer, BE (onde B é o valor da base e E o valor do expoente), informados pelo usuário.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, expoente, potencia, contador;

    //Entrada
    printf("Informe a base e o expoente para calculo da potencia: ");
    scanf("%d %d", &base, &expoente);

    //Processamento
    potencia = 1;
    for(contador = 1; contador <= expoente; contador++)
    {
        potencia = potencia * base;
    }

    //Saída
    printf("%d elevado a %d = %d", base, expoente, potencia);
}
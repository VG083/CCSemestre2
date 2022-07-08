/*
11) Apresentar as potências de 3, variando de 0 a 15.
Deve ser considerado que qualquer número elevado a zero é 1, ele elevado a 1 é ele próprio.
Deverá ser apresentado, observando a seguinte formatação:
3 elevado a 0 = 1
3 elevado a 1 = 3
3 elevado a 2 = 9
(...)
3 elevado a 15 = 14348907
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int expoente, potencia;
    
    printf("3 elevado a 0 = 1\n");
    printf("3 elevado a 1 = 3\n");

    potencia = 3;
    for(expoente = 2; expoente <= 15; expoente++)
    {
        potencia = potencia * 3;
        printf("3 elevado a %d = %d\n", expoente, potencia);
    }
}
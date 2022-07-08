#include <stdio.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador;

    // Sem entrada
    
    // Processamento

    for (contador = 1; contador <= 10; contador++)
    {
        printf("For - Escrevendo uma frase...\n");
    }

    contador = 1;
    while(contador <= 10)
    {
        printf("While - Escrevendo uma frase...\n");
        contador++;
    }

    contador = 1;
    do
    {
        printf("Do While - Escrevendo uma frase...\n");
        contador++;
    } while (contador <= 10);
    
    // Saída inclusa dentro do processamento
}
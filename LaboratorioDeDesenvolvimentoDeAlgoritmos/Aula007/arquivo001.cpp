/*
    Faça um proma que imprime o sétimo número, entre 1 e 1 milhão que é dívisivel por 11, 13 e 17.
    com "continue"
*/
#include <stdio.h>

int main(void){
    int numero;
    int contador = 0;

    for (numero = 1; numero <= 1000000; numero++){
        if(numero % 11 == 0 && numero % 13 == 0 && numero % 17 == 0){
            contador++;
            if (contador < 7){
                continue;
            }
            else{
                printf("O numero e: %d", numero);
                break;
            }
        }
    }

    return 0;
}
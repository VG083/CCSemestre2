/*
    Faça uma tabuada da multiplicação de 1 a 9
*/
#include <stdio.h>

int main (void){
    int numero1, numero2;
    
    for (numero1 = 1; numero1 < 10; numero1++){
        printf("\n");
        for (numero2 = 1; numero2 < 10; numero2++){
            printf("\n%d x %d = %d", numero1, numero2, numero1*numero2);
        }
    }
    
    return 0;
}
#include <stdio.h>

/*
Barrinha que fica girando
*/

int main (void){

    while (1)
    {
        printf("|\b");
        printf("/\b");
        printf("-\b");
        printf("\\\b");
        printf("|\b");
        printf("-\b");
        printf("\\\b");
    }

    return 0;
}
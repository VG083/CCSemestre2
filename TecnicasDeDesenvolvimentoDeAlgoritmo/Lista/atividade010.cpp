#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char polar[] = {'p','o','l','a','r'};
    char zenit[] = {'z','e','n','i','t'};
    char frase[50];

    printf("Frase:\n");
    fgets(frase, 50, stdin);

    for (int i = 0; i < 50; i++){
        tolower(frase[i]);
    }

    printf("Zenit Polar:\n");

    for (int j = 0; j < strlen(frase); j++){
        for (int k = 0; k < 5; k++){
            if (frase[j] == zenit[k]) frase[j] = polar[k];
            else if (frase[j] == polar[k]) frase[j] = zenit[k];
        }
        printf("%c", frase[j]);
    }

    return 0;

}
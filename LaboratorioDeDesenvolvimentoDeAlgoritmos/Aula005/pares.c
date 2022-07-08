//1) Escreva um algoritmo que calcule a média dos números digitados pelo usuário,
//se eles forem pares. Termine a leitura se o usuário digitar zero (0).


#include <stdio.h>

int main (void){
	float media;
	int numero;
	int soma = 0;
	int qtd_numeros=0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero);
	
	while(numero != 0){
		if(numero % 2 == 0){
			soma = soma + numero;
			qtd_numeros++;
		}
		printf("Digite o proximo numero: ");
		scanf("%d", &numero);
	}
	media = soma/qtd_numeros;
	printf("A media e %.1f", media);
	
	return 0;
}


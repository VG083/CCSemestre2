//1) Receba a info. do sexo de 20 pessoas e me diga quantos homens e quantas mulheres
//2) CALCULADORA> recebe 2 numeros e o operador (+,-,*,/) e apresenta o resultado
		//fazer com if else
		//fazer com switch
#include <stdio.h>

int main (void){
 char sexo;
	int qtd_homens = 0;
	int qtd_mulheres = 0;
	int i;

	for(i = 0; i < 20; i++){
		printf("Digite o sexo (m ou f): ");
		scanf(" %c", &sexo);

		if(sexo == 'm' || sexo == 'M'){
			qtd_homens= qtd_homens + 1;
		}
		else if(sexo == 'f' || sexo == 'F'){
			qtd_mulheres++;
		}
		else{
			printf("Caracter invalido");

		}
	}
	printf("Ha %d mulheres e %d homens", qtd_mulheres, qtd_homens);

	
	return 0;
}
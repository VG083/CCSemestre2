#include <stdio.h>
//#include <stdbool.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	float f= 15.678;
	
	printf( "O valor �: %.4f", f );

	
	return 0;
}




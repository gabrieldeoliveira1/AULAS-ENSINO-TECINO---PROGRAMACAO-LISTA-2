#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
	float num, raiz;
	

	printf("Digite um numero: ");
	scanf("%f", &num);
	
	raiz = sqrt(num);
	printf("A raiz quadrada do numero e de: %.2f", raiz);
	
	
	return 0; //retorna 0
	}

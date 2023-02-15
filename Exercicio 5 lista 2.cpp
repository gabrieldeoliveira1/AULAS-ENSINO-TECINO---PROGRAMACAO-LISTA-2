#include <stdio.h>

int main() {
	int num, num2, multi;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	printf("Digite um numero inteiro 2: ");
	scanf("%d", &num2);
	
	multi = num * num2;
	
	printf("O resultado da multiplicacao e de: %d", multi);
	return 0; //retorna 0
	
	printf("Os números digitados sao %d e %d, num, num2");
}
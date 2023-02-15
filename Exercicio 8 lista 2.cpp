#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

	int data, sub;
	
	printf("Digite o seu ano de nascimento:");
	scanf("%d", &data);
	
	sub = 2023 - data;
	printf("Sua idade e de: %d", sub);
	return 0;
}

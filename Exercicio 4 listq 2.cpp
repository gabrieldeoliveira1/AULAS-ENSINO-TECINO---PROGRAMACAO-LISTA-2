#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char texto[250];
	int tamanho;

	
	printf("Digite um texto:");
	scanf("%s", &texto );
	
	tamanho = strlen(texto);
	printf("Tamanho do texto: %d", tamanho);
	
	return 0;
}
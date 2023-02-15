#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void) {
	int i;
	char resp[6];
	srand(time(NULL));
	
	printf ("Gerar um numero entre 1 e 10:\n");
	
	printf("%d", rand() %10+1);
	
	printf("\nVoce acertou o numero?");
	scanf("%s", &resp);
	printf("O usuario disse: %s", resp);
	
	
}
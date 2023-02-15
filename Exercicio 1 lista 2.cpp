#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void) {
	int i;
	srand(time(NULL));
	
	printf ("Gerar um numero entre 1 e 100\n");
	
	printf("%d", rand() %100);
	
}
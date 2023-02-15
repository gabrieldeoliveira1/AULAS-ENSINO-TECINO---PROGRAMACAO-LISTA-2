#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void) {
	int i;
	srand(time(NULL));
	
	printf ("Gerar um numero entre 10 e 1000\n");
	
	printf("%d", rand() %100);
	
}


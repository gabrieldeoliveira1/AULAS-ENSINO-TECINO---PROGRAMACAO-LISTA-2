#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int a, b;
	
	a = 10;
	b = 30;
	
	int c; 
	
	c = a;
	a = b;
	b = c;
	
	printf("O valor de a e de: %i\n", a);
	printf("O valor de b e de:%i", b);
	return 0;

}
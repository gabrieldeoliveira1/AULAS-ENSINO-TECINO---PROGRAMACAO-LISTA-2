#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	printf("Você está prestes a fechar este programa");
}
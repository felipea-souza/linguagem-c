/* Fazer um algoritmo para a cria��o, grava��o e leitura de um arquivo. */
// Leitura.

#include <stdio.h>

int main(void)

{
	FILE *pont;
	char palavra[30];
	
	pont = fopen("teste2.txt", "r");
	
	
	fscanf(pont, "%s", palavra);
	printf("%s", palavra);
	
	fclose(pont);
	
return 0;
}

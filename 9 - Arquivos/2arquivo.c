// Grava��o no arquivo

#include <stdio.h>

int main() {
	
  FILE *pont;
  char palavra[30];
	
  pont = fopen("teste.txt", "w");
  
//-----  
  printf("Favor digitar uma palavra.\n");
  scanf("%s", &palavra);
	
  fprintf(pont, "%s", palavra);  //printando o conte�do do vetor 'palavra' na vari�vel 'pont' e N�O na tela.
//-----	

  fclose(pont);
	
return 0;
}

// Leitura do texto

#include <stdio.h>

int main() {
	
  FILE *pont;
  char letra;
  
  pont = fopen("teste.txt", "r");
  
//-----
  printf("O texto do arquivo eh: \n\n");
  
  while ((letra = fgetc(pont)) != EOF)  //<- 'fgetc' l� cada caractere da vari�vel 'pont' (que aponta para o 
    printf("%c", letra);                //arquivo), joga na vari�vel 'letra', e o teste � realizado
//-----
  
  fclose(pont);
  
  
return 0;	
}

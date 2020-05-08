// Leitura do texto

#include <stdio.h>

int main() {
	
  FILE *pont;
  char letra;
  
  pont = fopen("teste.txt", "r");
  
//-----
  printf("O texto do arquivo eh: \n\n");
  
  while ((letra = fgetc(pont)) != EOF)  //<- 'fgetc' lê cada caractere da variável 'pont' (que aponta para o 
    printf("%c", letra);                //arquivo), joga na variável 'letra', e o teste é realizado
//-----
  
  fclose(pont);
  
  
return 0;	
}

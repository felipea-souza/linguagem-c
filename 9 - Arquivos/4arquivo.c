// Grava��o no arquivo de mais de uma palavra (textos)

#include <stdio.h>
#include <string.h>

int main() {
	
  FILE *pont;
  char letra;
	
  pont = fopen("teste.txt", "a"); 
  
//-----  
  printf("Digitar o texto a ser gravado no arquivo.\n");
  //fflush(stdin);   fgets(lerPalavra, 30, stdin); //<- com o 'fgets' � printado com v�rios espa�os no texto (de forma errada)
  while ((letra = getchar()) != '\n')  //<- 'getchar' l� cada caractere digitado no teclado, joga na vari�vel 'letra', 
    putc(letra, pont);                 //e o teste � realizado
//-----
	
  fclose(pont);
	
return 0;
}



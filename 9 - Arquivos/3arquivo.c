// Leitura do arquivo

#include <stdio.h>

int main() {
	
  FILE *pont;
  char lerPalavra[30];
	
  pont = fopen("teste.txt", "r");  //<- variv�el 'pont' pega os dados do arquivo 'teste.txt'
    
//-----    
  fscanf(pont, "%s", &lerPalavra);  //<- 'fscanf' l� esses dados de 'pont', e N�O do teclado, como em 'scanf'	      
	
  printf("Texto do arquivo: %s", lerPalavra);
//-----
	
  fclose(pont);
	
return 0;
}

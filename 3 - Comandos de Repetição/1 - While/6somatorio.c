// Elaborar um programa em C que apresente o somatório dos cem primeiros números inteiros (1 + 2 + 3 + 4... +99 + 100).

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i = 1, soma = 0;
	
  do {
	  soma = soma + i;
	   
	  i++;	
  } while (i <= 100);
	
  printf("O somatorio dos cem primeiros numeros inteiros eh: %d.\n", soma);

  system("pause");
  
 return 0;
} 

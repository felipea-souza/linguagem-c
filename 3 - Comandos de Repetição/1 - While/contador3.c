/* Escrever um programa em C que apresente todos os valores num�ricos inteiros �mpares na faixa de 0 a 20. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i = 0;
	
  while (i <= 20) {
  	
    if (i % 2 != 0) {
	  printf("%d ", i);
	}
	
	i++;
  }
  
  printf("\n\n");
  
  system("pause");
  
 return 0;
}

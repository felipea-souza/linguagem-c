/* Escrever um programa em C que leia dois valores numéricos inteiros ou reais e exiba a diferença
do maior para o menor. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int n1, n2, calc;
	
  printf("Favor digitar o primeiro valor.\n");
  scanf("%d", &n1);
  printf("Favor digitar o segundo valor.\n");
  scanf("%d", &n2);
	 
  if (n1 > n2) calc = n1 - n2;
    else calc = n2 - n1;
	       
  printf("A diferença de %d e %d eh de: %d.\n", n1, n2, calc);
  
  system("pause");
  
 return 0;
}

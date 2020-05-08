/* Fazer em lingaugem C um algoritmo que durante 5 vezes peça a leitura de dois valores , efetua a adição e apresente o resultado
das somas em cada uma das 5 vezes. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int a, b, soma, i = 1;
	
  do {
	  printf("Favor digitar os dois valores desejados.\n");
	  scanf("%d%d", &a, &b);
	  
	  soma = a + b;
	  
	  printf("O resultado da adicao eh %d.\n\n\n", soma);
	  
	  i++;
  } while (i <=5);
  
  system("pause");
  
 return 0;
}

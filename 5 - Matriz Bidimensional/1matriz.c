/* Ler 20 elementos numéricos reais para uma matriz A, considerando que essa matriz tenha o tamanho de quatro
linhas por cinco colunas. Em seguida, apresentar os valores lidos. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  float a[4][5];
  int i, j;
	
  for (i=0 ; i<=3 ; i++) {             //  <<- 'for' externo: controle das linhas.
    printf("Favor digitar os elementos da %da linha.\n", i + 1);
	   
	for (j=0 ; j<=4 ; j++) {           //  <<- 'for' interno: controle das colunas.
	  printf("%do elemento: ", j + 1);
	  scanf("%f", &a[i][j]);
    }  
  }
    
  printf("\n");
      
  for ( i=0 ; i<=3 ; i++) {
    printf("Valores da %da linha.\n", i + 1);
    	
    for (j=0 ; j<=4 ; j++) {
      printf("%do elemento: %.2f\n", j + 1, a[i][j]);
    }
  }
      
  system("pause");
  
return 0;
}



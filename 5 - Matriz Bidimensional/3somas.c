/* Ler duas matrizes A e B com valores inteiros, cada uma de duas dimensões com cinco linhas e três colunas. Construir uma 
matriz C de mesma dimensão, a qual é formada pela soma dos elementos da matriz A com os elementos da matriz B.
Apresentar os elementos da matriz C. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int a[5][3], b[5][3], c[5][3], i, j;
	
  for (i=0 ; i<=4 ; i++) {
    printf("Favor entrar com os valores dos elementos para a %da linha da matriz A.\n", i + 1);
	  	
	for (j=0 ; j<=2 ; j++) {
	  printf("%d elemento: ", j + 1);
	  scanf("%d", &a[i][j]);  	
	}
	  	  
	printf("\n");
  }
	  
  for (i=0 ; i<=4 ; i++) {
    printf("Favor entrar com os valores dos elementos para a %da linha da matriz B.\n", i + 1);
	  	
	for (j=0 ; j<=2 ; j++) {
	  printf("%d elemento: ", j + 1);
	  scanf("%d", &b[i][j]);  	
    }
	  	  
	printf("\n");
  }
	  
  printf("MATRIZ C: resultado da soma das matrizes A e B.\n");
	  
  for (i=0 ; i<=4 ; i++) {
    printf("%da linha.\n", i + 1);
	  	
	for (j=0 ; j<=2 ; j++) {
	  printf("%do elemento: %d.\n", j + 1, c[i][j] = a[i][j] + b[i][j]);
	}
	  	  
	printf("\n");
  }

  system("pause");
  
return 0;
}



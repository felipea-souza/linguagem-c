/* Ler duas matrizes A e B, cada uma com uma dimensão para sete elementos numéricos inteiros. Construir uma matriz C de sete
linhas com duas dimensões cada. A primeira coluna deve ser formada pelos elementos da matriz A e a segunda coluna pelos elementos 
da matriz B. Apresentar os elementos da matriz C. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int a[7], b[7], c[7][2], i, j;
	
  for (i=0 ; i<=6 ; i++) {
    printf("Entre com o %do valor para a matriz unidimensional A, de sete posicoes.\n", i + 1);
	scanf("%d", &a[i]);
	c[i][0] = a[i];
  }
	  
  for (i=0 ; i<=6 ; i++) {
    printf("Entre com o %do valor para a matriz unidimensional B, de sete posicoes.\n", i + 1);
	scanf("%d", &b[i]);
	c[i][1] = b[i];
  } 
  
  for (i=0 ; i<=6 ; i++) {
  	
    printf("Valores da %da linha da matriz C\n", i + 1);
	
	for (j=0 ; j<=1 ; j++) {
	  printf("%d ", c[i][j]);
	}
	
	printf("\n");	
  }
      
  system("pause");
  
return 0;
}



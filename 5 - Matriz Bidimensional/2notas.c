/* Desenvolver um programa que efetue a entrada e a saída das três notas escolares de oito alunos. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  float notas[8][3];
  int i, j;
	
  for (i=0 ; i<=7 ; i++) {
    printf("Favor digitar as tres notas do %do aluno.\n", i + 1);
	  	
	for (j=0 ; j<=2 ; j++) {
	  printf("%da nota: ", j + 1);
	  scanf("%f", &notas[i][j]);
	}
	  	  
	printf("\n");
  }
	  
  for (i=0 ; i<=7 ; i++) {
    printf("Notas do %do aluno: ", i + 1);
      	
    for (j=0 ; j<=2 ; j++) {
      printf("%.1f", notas[i][j]);
      	  	
      if (j<=1)
	    printf(", ");
    }
      	  
    printf("\n");
  }
    
  printf("\n");
      
  system("pause");
  
return 0;
}



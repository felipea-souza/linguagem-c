/* Desenvolver um programa que leia dez elementos de uma matriz A do tipo vetor. Construir uma matriz B do 
mesmo tipo, observando a seguinte lei de formação: se o valor do ÍNDICE for par, o VALOR desta matriz deve ser 
multiplicado por 5 e o resultado guardado no índice de mesma posição da matriz B; sendo ímpar, deve ser somado com 5
e o resultado guardado no índice de mesma posição da matriz B. Ao final, mostrar os conteúdos das duas matrizes. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int a[10], b[10], i;
	
  for (i=0 ; i<=9 ; i++) {
    printf("Favor digitar o %do valor para o vetor A.\n", i + 1);
	scanf("%d", &a[i]);
	  	
	if (i % 2 == 0)    //<- verificando se o ÍNDICE é par/ímpar, e não o valor deste. Senão estaria como a[i]
	  b[i] = a[i] * 5;
	 else 
	   b[i] = a[i] + 5;
	  	    
  }
	  
  printf("Matriz A    |   Matriz B\n");
  printf("________________________\n");
	  
  for (i=0 ; i<=9 ; i++)
    printf("%d       |      %d\n", a[i], b[i]);
	    
  system("pause");
  
return 0;
}



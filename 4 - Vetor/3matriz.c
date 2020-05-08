/* Desenvolver um programa que leia cinco elementos de uma matriz A do tipo vetor. No final, apresente o total
da soma de todos os elementos que sejam ímpares. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int a[5], soma = 0, i;
	
  for (i=0 ; i<=4 ; i++) {  	
    printf("Favor digitar o %do elemento para o vetor A.\n", i + 1);
	scanf("%d", &a[i]);
	
	if (a[i] % 2 != 0)
	  soma += a[i]; 
	     
  }
	  
  printf("A soma de todos os impares e %d\n", soma);
	
  system("pause");
  
return 0;
}



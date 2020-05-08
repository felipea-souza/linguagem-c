/* Ler um vetor do tipo numérico e apresentá-lo em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int numero[5], i, j, x;
	
  for (i=0 ; i<=4 ; i++) {
    printf("Favor digitar o %do numero.\n", i + 1);
	scanf ("%d", &numero[i]);
  }
	  
  //Organizando o vetor em ordem crescente
  for (i=0 ; i<=3 ; i++)
    for (j=i+1 ; j<=4 ; j++)
	  if (numero[i] > numero[j]) {
	    x = numero[i];
	    numero[i] = numero[j];
	    numero[j] = x;
	  }
	      
  printf("\n");      
  printf("Numeros Organizados.\n");
	
  for (i=0 ; i<=4 ; i++) {
    printf("%d\n", numero[i]);
  }
	  
  system("pause");
  
return 0;
}



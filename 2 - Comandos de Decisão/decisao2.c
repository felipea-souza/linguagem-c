/* Escrever um programa em C que leia dois valores inteiros e, independente da ordem em que foram entrados, eles devem
ser impressos na ordem crescente, ou seja, se forem fornecidos 5 e 3, respectivamente, devem ser impressos 3 e 5. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int n1, n2, aux;
	
  printf("Favor digitar o primeiro numero.\n");
  scanf("%d", &n1);
  printf("Favor digitar o segundo numero.\n");
  scanf("%d", &n2);
	
  if (n1 > n2) {
    aux = n1;
	n1 = n2;
	n2 = aux;
  }
	
  printf("Foram digitados os valores %d e %d.\n", n1, n2);
  
  system("pause");
  
 return 0;     
}



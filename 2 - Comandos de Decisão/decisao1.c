/* Escreva um programa em linguagem C que faça a leitura de dois valores, efetue a adição e apresente o seu resultado
caso o valor somado seja maior que 10. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int n1, n2, soma;
  	
  printf("Favor digitar o primeiro numero.\n");
  scanf("%d", &n1);
  printf("Favor digitar o segundo numero.\n");
  scanf("%d", &n2);
  
  soma = n1 + n2;
	
  if (soma > 10) printf("O resultado da soma eh: %d\n", soma);
  
  system("pause");
  
 return 0;        
}

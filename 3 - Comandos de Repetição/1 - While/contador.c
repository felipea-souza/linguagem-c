/* Elaborar um programa em linguagem C que solicite cinco vezes dois números e, a cada vez em que socilitar esses dois numeros
faça o cálculo e apresente a soma. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int n1, n2, soma, i;
	
  i = 1;
  
  while (i <= 5) {
    printf("Favor digitar o primeiro numero.\n");
	scanf("%d", &n1);
	printf("Agora digite o segundo numero.\n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("O resultado da %da adicao eh %d.\n\n", i, soma);
	
	i++; //i = i + 1;
  }
  
  system ("pause");
  
 return 0;          
}

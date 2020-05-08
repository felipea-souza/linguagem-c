/* Escreva um progama em C que leia três valores inteiros (representados pelas variáveis A, B e C). O programa
deve apresentar os valores dispostos em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int a, b, c, aux;
	
  printf("Favor digitar o valor de A.\n");
  scanf("%d", &a);
  printf("Favor digitar o valor de B.\n");
  scanf("%d", &b);
  printf("Favor digitar o valor de C.\n");
  scanf("%d", &c);
	
  if (a > c) {            
    aux = a;
	a = c;
	c = aux;
  }
  
  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }
  
  if (b > c) {
    aux = b;
    b = c;
    c = aux;
  }
  
  printf("Valores em ordem crescente: %d, %d e %d.\n\n\n", a, b, c);
  
  system("pause");
  
 return 0;
}



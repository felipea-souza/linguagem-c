/*Desenvolver um programa que leia dois valores num�ricos inteiros, fa�a a operea��o de adi��o desses dois valores
e apresente o resultado obtido.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int a, b, result;
	
  printf("Favor digitar o primeiro numero.\n");
  scanf("%d", &a);
  printf("Favor digitar o segundo numero.\n");
  scanf("%d", &b);
	
  result = a + b;
	
  printf("O resultado da soma eh: %d\n", result);
	
  system("pause");
	
 return 0;
}

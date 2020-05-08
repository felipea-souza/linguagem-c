/* Desenvolver um programa calculadora que apresente um menu de seleções no menu principal. Esse menu deve dar a possibilidade
do usuário escolher uma entre quatro operações aritméticas. Escolhida a operação desejada, deve ser solicitada a entrada de 
dois números e, processada a operação, deve ser exibido o resultado. */

#include <stdio.h>
#include "funcoes.c"

int main() {

  int n1, n2, opcao;
	
  msg2();
  scanf("%d", &opcao);
	
  calculos(n1, n2, opcao);
	
return 0;
}


void msg2();
int calculos(int a, int b, int escolha);



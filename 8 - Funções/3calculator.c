/* Desenvolver um programa calculadora que apresente um menu de sele��es no menu principal. Esse menu deve dar a possibilidade
do usu�rio escolher uma entre quatro opera��es aritm�ticas. Escolhida a opera��o desejada, deve ser solicitada a entrada de 
dois n�meros e, processada a opera��o, deve ser exibido o resultado. */

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



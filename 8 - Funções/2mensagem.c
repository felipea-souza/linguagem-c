//FUN��O COM PASSAGEM DE PAR�METROS POR VALOR.

// Criar um algoritmo que chame uma fun��o para apresentar uma mensagem de boas vindas!

#include <stdio.h>
#include "funcoes.c" 

int main() {
	
  int n1 = 5, n2 = 3, soma2;
   
  printf("\n%d", msg());
  
  soma(n1, n2);      // <<-- chama a fun��o 'soma' (executando assim, suas instru��es) e passa os valores de 
                     // 'n1' e 'n2' para as suas vari�veis 'a' e 'b', respectivamente.*/
  soma2 = n1 + n2;
  	
  printf("\nResultado da funcao 'main': %d.\n", soma2);
	
return 0;
}


int msg();
int soma(int a, int b);  /* <- esse prot�tipo mostra que a fun��o soma tem como par�metros, duas vari�veis do 
tipo 'inteiro' (vari�veis locais da fun��o soma, que s�o 'a' e 'b'). Perceba que a vari�vel 'a' receber� o 
valor da vari�vel 'n1' e a vari�vel 'b' receber� o valor da vari�vel 'n2'. (Obs.: 'n1' e 'n2' s�o vari�veis 
locais da fun��o principal main.) */



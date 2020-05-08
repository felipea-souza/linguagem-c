//FUNÇÃO COM PASSAGEM DE PARÂMETROS POR VALOR.

// Criar um algoritmo que chame uma função para apresentar uma mensagem de boas vindas!

#include <stdio.h>
#include "funcoes.c" 

int main() {
	
  int n1 = 5, n2 = 3, soma2;
   
  printf("\n%d", msg());
  
  soma(n1, n2);      // <<-- chama a função 'soma' (executando assim, suas instruções) e passa os valores de 
                     // 'n1' e 'n2' para as suas variáveis 'a' e 'b', respectivamente.*/
  soma2 = n1 + n2;
  	
  printf("\nResultado da funcao 'main': %d.\n", soma2);
	
return 0;
}


int msg();
int soma(int a, int b);  /* <- esse protótipo mostra que a função soma tem como parâmetros, duas variáveis do 
tipo 'inteiro' (variáveis locais da função soma, que são 'a' e 'b'). Perceba que a variável 'a' receberá o 
valor da variável 'n1' e a variável 'b' receberá o valor da variável 'n2'. (Obs.: 'n1' e 'n2' são variáveis 
locais da função principal main.) */



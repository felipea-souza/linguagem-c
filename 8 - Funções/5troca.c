/* Criar uma algoritmo que leia duas vari�veis e efetue a troca dos valores delas por meio de uma fun��o.
Obs.: demonstrar primeiro por meio de uma fun��o com passagem de par�metro por valor. */

#include <stdio.h>

int main(void) {
	
  int a = 5, b = 8;
   
  printf("Antes da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n\n", a, b);
  
  troca(&a, &b);                                     // <<- Com o uso do '&' oque � entregue (enviado) � a refer�ncia ao ENDERE�O DE MEM�RIA
                                                     // e n�o a C�PIA DE SEU CONTE�DO (como quando � feito com a passagem de par�metros por
  printf("Depois da chamada da funcao 'troca'.\n");  // valor. Perceba que neste caso, a REFER�NCIA dos endere�os de mem�ria de
  printf("a = %d\nb = %d\n", a, b);                  // 'a' e 'b' s�o enviados para as vari�veis de ponteiros 'x' e 'z'.
                                                                                                                               
return 0;   
}


//Prot�tipos
void troca(int *x, int *z);


//Fun��es
void troca(int *x, int *z) {
	
  int aux;
	
  aux = *x;
  *x = *z;
  *z = aux;
}

/* Criar uma algoritmo que leia duas variáveis e efetue a troca dos valores delas por meio de uma função.
Obs.: demonstrar primeiro por meio de uma função com passagem de parâmetro por valor. */

#include <stdio.h>

int main(void) {
	
  int a = 5, b = 8;
   
  printf("Antes da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n\n", a, b);
  
  troca(&a, &b);                                     // <<- Com o uso do '&' oque é entregue (enviado) é a referência ao ENDEREÇO DE MEMÓRIA
                                                     // e não a CÓPIA DE SEU CONTEÚDO (como quando é feito com a passagem de parâmetros por
  printf("Depois da chamada da funcao 'troca'.\n");  // valor. Perceba que neste caso, a REFERÊNCIA dos endereços de memória de
  printf("a = %d\nb = %d\n", a, b);                  // 'a' e 'b' são enviados para as variáveis de ponteiros 'x' e 'z'.
                                                                                                                               
return 0;   
}


//Protótipos
void troca(int *x, int *z);


//Funções
void troca(int *x, int *z) {
	
  int aux;
	
  aux = *x;
  *x = *z;
  *z = aux;
}

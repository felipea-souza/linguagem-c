/* Criar um algoritmo que leia duas vari�veis e efetue a troca dos valores delas por meio de uma fun��o.
Obs.: demonstrar primeiro por meio de uma fun��o com passagem de par�metros por valor. */

#include <stdio.h>

int main() {
	
  int a = 5, b = 8;
   
  printf("Antes da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n\n", a, b);
  
  troca(a, b);
  
  printf("Depois da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n", a, b);            // <<- os valores continuaram os mesmos, pois � feita a troca de valores
                                               // na fun��o 'troca', mas estes ficam presos dentro desta fun��o. N�o h�
return 0;                                      // qualquer altera��o nos valores das vari�veis da fun��o 'main'.
}


//Prot�tipos
void troca(int x, int z);


//Fun��es 
void troca(int x, int z) {
	
  int aux;
	
  aux = x;
  x = z;
  z = aux;
}



/* Criar um algoritmo que leia duas variáveis e efetue a troca dos valores delas por meio de uma função.
Obs.: demonstrar primeiro por meio de uma função com passagem de parâmetros por valor. */

#include <stdio.h>

int main() {
	
  int a = 5, b = 8;
   
  printf("Antes da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n\n", a, b);
  
  troca(a, b);
  
  printf("Depois da chamada da funcao 'troca'.\n");
  printf("a = %d\nb = %d\n", a, b);            // <<- os valores continuaram os mesmos, pois é feita a troca de valores
                                               // na função 'troca', mas estes ficam presos dentro desta função. Não há
return 0;                                      // qualquer alteração nos valores das variáveis da função 'main'.
}


//Protótipos
void troca(int x, int z);


//Funções 
void troca(int x, int z) {
	
  int aux;
	
  aux = x;
  x = z;
  z = aux;
}



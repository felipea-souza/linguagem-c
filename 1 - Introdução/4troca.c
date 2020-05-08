/* Ler dois valores inteiros para as variáveis A e B e efetuar a troca dos valores de modo que a variável A 
passe a possuir o valor da variável B, e a variável B a possuir o valor da variável A. Apresentar os valores trocados.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int a, b, aux;
 	
  printf("Favor digitar o valor de A.\n");
  scanf("%d", &a);
  printf("Favor digitar o valor de B.\n");
  scanf("%d", &b);
  
  aux = a;
  a = b;
  b = aux;
  
  printf("A = %d\n", a);
  printf("B = %d\n", b);
  
  system("pause");
  
 return 0;
}

/*  Escrever um programa em linguagem C que faça a leitura de dois valores numéricos e efetue a adição. Caso
o valor somado seja maior ou igual a 10, deve ser apresentado somado a ele mais 5. Caso o valor somado
não seja maior ou igual a 10, deve ser apresentado subtraindo dele 7. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  int n1, n2, result;
	
  printf("Favor digitar o primeiro valor.\n");
  scanf("%d", &n1);
  printf("Favor digitar o segundo valor.\n");
  scanf("%d", &n2);
  
  result = n1 + n2;
	
  if (result >= 10) {
    printf("Foi somado mais 5.\n");
	result = result + 5;
  } else {
          printf("Foi subtraido 7.\n");
          result = result - 7;
    }
           	
  printf("O valor eh: %d\n", result);
  
  system("pause");
  
 return 0;
}

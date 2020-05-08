/* Elaborar em linguagem C um programa que apresente os resultados de uma tabuada para um número qualquer a ser fornecido
pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i, num, result;
	
  printf("Favor digitar o numero a ser calculado na tabuada.\n\n");
  scanf("%d", &num);
  printf("___________________\n");
  printf("TABUADA DO NUMERO %d\n", num);
  printf("-------------------");
  printf("\n");
	
  for (i = 0; i <= 10; i++) {
    result = num * i;
    
	printf("%d x %d = %d\n", num, i, result);
  }
  
  system("pause");
    
 return 0;
}



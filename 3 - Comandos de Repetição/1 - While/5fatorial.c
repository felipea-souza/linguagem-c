// Elaborar em linguagem C um programa que calcule o fatorial de um número qualquer.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int fat = 1, i = 1, num;

  printf("Favor digitar o numero desejado.\n");
  scanf("%d", &num);
    
  do {
	  fat = fat * i;
	  
	  i++;
  } while (i <= num);
    
  printf("O resultado do fatorial de %d eh: %d.\n", num, fat);
  
  system("pause");
  
 return 0;
}

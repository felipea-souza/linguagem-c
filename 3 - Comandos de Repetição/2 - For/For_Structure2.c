/* Elaborar em linguagem C um programa que escreva na tela os valores 10, 9, 8, 7, 6, 5, 4, 3, 2 e 1.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i;
	
  for (i = 10; i >= 1; i--)
    printf("%d\n", i);
    
  system("pause");  
	  
 return 0;
}

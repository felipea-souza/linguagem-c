// Elaborar em linguagem C um programa que apresente todos os n�meros divis�veis por 4 que sejam menores que 200.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i;
	
  for (i = 0; i <= 200; i++) {
  	
    if (i % 4 == 0)
	  printf("%d\n", i);
  }
  
  system("pause");
  
 return 0;
}

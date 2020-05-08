/* Elaborar em linguagem C um programa que calcule o fatorial de um numero qualquer. Supondo que o numero seja 5, o programa
deve apresentar o resultado 5! (fatorial de 5). Desta forma, temos que 5! = 5 . 4. 3. 2. 1 ou 5! = 1 . 2 . 3 . 4 . 5, equivalente
a 120. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int fat = 1, i = 1, num;
	
  printf("Favor digitar o numero desejado.\n");
  scanf("%d", &num);
	
  while (i <= num) {
    fat = fat * i;
	
	i++;
  }
	     
  printf("%d! = %d.", num, fat);
  printf("\n\n");
  
  system("pause");
  
 return 0;
}



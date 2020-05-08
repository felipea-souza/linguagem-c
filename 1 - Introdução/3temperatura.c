/* Ler a temperatura em graus celsius e apresentá-lá convertida em graus Fahrenheit. A fórmula de conversão de temperatura
a ser utilizada é F = (9 * C + 160) / 5.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  float celsius, fah;
	
  printf("Favor digitar a temperatura em graus celsius.\n");
  scanf("%f", &celsius);
  
  fah = (9 * celsius + 160) / 5;
  
  printf("%.1f em celsius equivale a %.1f em fahrenheit.\n", celsius, fah);
  
  system ("pause");
  
 return 0;
}

/* Desenvolva um programa que peça nome e sobrenome, faça uma saudação e apresente o nome completo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  char nome[10], sobrenome[10];
	
  printf("Favor digitar o primeiro nome.\n");
  scanf("%s", &nome);                             // <<-- A função scanf faz a leitura dos dados do tipo char mas não aceita
  printf("Favor digitar o segundo nome.\n");      // espaço em branco, vendo este como o carácter de controle \n, finalizando
  scanf("%s", &sobrenome);                        // assim, a sequência. Importante citar também que, para a leitura de 
	                                              // strings, não é necessário o '&' junto ao nome do vetor.
  printf("Bom dia, %s %s.\n\n", nome, sobrenome);
	
  system("pause");
  
return 0;
}

/* Desenvolva um programa que pe�a nome e sobrenome, fa�a uma sauda��o e apresente o nome completo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  char nome[10], sobrenome[10];
	
  printf("Favor digitar o primeiro nome.\n");
  scanf("%s", &nome);                             // <<-- A fun��o scanf faz a leitura dos dados do tipo char mas n�o aceita
  printf("Favor digitar o segundo nome.\n");      // espa�o em branco, vendo este como o car�cter de controle \n, finalizando
  scanf("%s", &sobrenome);                        // assim, a sequ�ncia. Importante citar tamb�m que, para a leitura de 
	                                              // strings, n�o � necess�rio o '&' junto ao nome do vetor.
  printf("Bom dia, %s %s.\n\n", nome, sobrenome);
	
  system("pause");
  
return 0;
}

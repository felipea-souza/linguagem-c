/* Fa�a um programa que pe�a nome e sobrenome, fa�a uma sauda��o e apresente o nome completo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  char nome[20];
	
  printf("Favor digitar o nome.\n");
  fflush(stdin);   fgets(nome, 20, stdin);  // <<-- Para se usar a fun��o 'fgets', deve-se primeiro usar a fun��o 'fflush' com
  	                                        // sua constante 'stdin' (nome do buffer em uso). Essa constante serve como 
  printf("Bom dia, %s", nome);			    // entrada padr�o do teclado. O fflush limpa as sujeiras do buffer do endere�o de
	                                        // mem�ria. V�lido apenas para o uso de strings. 
  system("pause");                          // J� o fgets l� dados do tipo char, aceitando caracteres em branco no meio da
                                            // string (coisa que o scanf n�o faz), colocando o caractere de controle '\n'
return 0;	                                // apenas quando for pressionado a tecla <Enter>.
}                                               

                                               

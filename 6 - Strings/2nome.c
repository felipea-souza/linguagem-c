/* Faça um programa que peça nome e sobrenome, faça uma saudação e apresente o nome completo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  char nome[20];
	
  printf("Favor digitar o nome.\n");
  fflush(stdin);   fgets(nome, 20, stdin);  // <<-- Para se usar a função 'fgets', deve-se primeiro usar a função 'fflush' com
  	                                        // sua constante 'stdin' (nome do buffer em uso). Essa constante serve como 
  printf("Bom dia, %s", nome);			    // entrada padrão do teclado. O fflush limpa as sujeiras do buffer do endereço de
	                                        // memória. Válido apenas para o uso de strings. 
  system("pause");                          // Já o fgets lê dados do tipo char, aceitando caracteres em branco no meio da
                                            // string (coisa que o scanf não faz), colocando o caractere de controle '\n'
return 0;	                                // apenas quando for pressionado a tecla <Enter>.
}                                               

                                               

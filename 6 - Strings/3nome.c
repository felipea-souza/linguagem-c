/* Faça um programa para ler e apresentar os nomes de dez pessoas. Considerar que cada nome tenha até 40 caracteres. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  char nome[10][40];
  int i;
	
  for (i=0 ; i<=9 ; i++) {
    printf("Favor digitar o %do nome:\n", i + 1);
	fflush(stdin);   fgets(nome[i], 40, stdin);
  }
      
  printf("Os dez nomes, digitados em ordem sao:\n");
      
  for (i=0 ; i<=9 ; i++)
    printf("%s", nome[i]);          // <<- Obs.: para a impressão de nomes (vetor do tipo char), observei que não foi
                                    // necessário colocar o '\n' para pular a linha, pois a cada impressão foi feita
  system("pause");                  // a "quebra" de linha AUTOMATICAMENTE. Isso deva acontecer devido à inserção
                                    // do caractere quando se aperta o <Enter>, durante a leitura do teclado.
return 0;
}

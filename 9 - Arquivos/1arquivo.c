/* Fazer um algoritmo para a cria��o, grava��o e leitura de um arquivo. */
// Cria��o do arquivo.

#include <stdio.h>

int main() {
	
  FILE *pont;     //<<-- Cria��o do ponteiro (do tipo 'FILE') que ir� apontar para o endere�o
	              //de mem�ria do arquivo (referenciando o arquivo). 
  pont = fopen("teste.txt", "a");  //<- cria��o e abertura do arquivo 'teste.txt' e a atribui��o
                                   //para a vari�vel (ponteiro) 'pont'
  fclose(pont);
  
return 0;
}

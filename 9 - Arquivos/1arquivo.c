/* Fazer um algoritmo para a criação, gravação e leitura de um arquivo. */
// Criação do arquivo.

#include <stdio.h>

int main() {
	
  FILE *pont;     //<<-- Criação do ponteiro (do tipo 'FILE') que irá apontar para o endereço
	              //de memória do arquivo (referenciando o arquivo). 
  pont = fopen("teste.txt", "a");  //<- criação e abertura do arquivo 'teste.txt' e a atribuição
                                   //para a variável (ponteiro) 'pont'
  fclose(pont);
  
return 0;
}

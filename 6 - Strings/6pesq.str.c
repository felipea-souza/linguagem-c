/* Algoritmo para realizar uma pesquisa. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int i, achei, resp;
  char nome[5][10], pesq[10];
	
  // Entrada de dados
  for (i=0 ; i<=4 ; i++) {
    printf("Favor digitar o %do nome.\n", i + 1);
	fflush(stdin);    fgets(nome[i], 10, stdin);
  }
	  
  // Pesquisa de dados
  resp = 1;
	
  while (resp == 1) {
    system("cls");
	printf("Favor digitar um nome a ser pesquisado.\n");
	fflush(stdin);    fgets(pesq, 10, stdin);
	
	i = 0;
	achei = 0;
	    	
	while (i<=4 && achei==0) {
	  if (strcmp(nome[i], pesq) == 0)
	    achei = 1;
	     else 
	       i++;
	}
	    	
    if (achei == 1)
	  printf("%s foi localizado na posicao %d.\n", pesq, i + 1);
	   else 
	     printf("%s nao foi localizado.\n", pesq);
	    	  
	printf("Voce deseja continuar com a pesquisa? [1]sim ou [2]nao\n");
	scanf("%d", &resp);
  }
	    
  system("pause");
  
return 0;
}

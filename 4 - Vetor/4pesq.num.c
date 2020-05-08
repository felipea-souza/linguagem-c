/* Algoritmo para realizar uma pesquisa. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  int num[5], i, pesq, achei;
  char resp;
	
  // Entrada de dados
  for (i=0 ; i<=4 ; i++) {
    printf("Favor digitar o %do numero.\n", i + 1);
	scanf("%d", &num[i]);
  }
	  
  // Pesquisa de dados
  resp = 's';
	
  while (resp == 's' || resp == 'S') {
    system("cls");
	printf("Favor digitar um numero a ser pesquisado.\n");
	scanf("%d", &pesq);
	
	i = 0;
	achei = 0;
	    	
	while (i<=4 && achei==0) {
	  if (pesq == num[i])
	    achei = 1;
	     else 
	       i++;
	}
	    	
    if (achei == 1)
	  printf("%d foi localizado na posicao %d.\n", pesq, i + 1);
	   else 
	     printf("%d nao foi localizado.\n", pesq);
	    	  
	printf("Voce deseja continuar com a pesquisa? [s]im ou [n]ao\n");
	fflush(stdin);    scanf("%s", &resp);
  }
	    
  system("pause");
  
return 0;
}



/* Ler dez nomes e organizá-los em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
  char nome[10][15], x[15];
  int i, j;
	
  for (i=0 ; i<=9 ; i++) {
    printf("Favor digitar o %do nome.\n", i + 1);
	fflush(stdin);    fgets(nome[i], 15, stdin);
  }
	  
  // Organizar a Matriz
  for (i=0 ; i<=8 ; i++)        //<<-- os contadores 'i' e 'j' representam somente as linhas da matriz (nos dois 'for')
    for (j=i+1 ; j<=9 ; j++)    //pois é somente na vertical que quero organizar (alfabeticamente).
    
	  if (strcmp(nome[i], nome[j]) > 0) {
	    strcpy(x, nome[i]);
	    strcpy(nome[i], nome[j]);
	    strcpy(nome[j], x);
	  }
	      
  printf("Matriz Organizada.\n");
	
  for (i=0 ; i<=9 ; i++)
    printf("%s\n", nome[i]);
	  
  system("pause");
  
return 0;
}



/* Faça com que o algoritmo do exercício 'notas3' apresente no final os dados dos alunos classificados por nome. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CADASTRO {
  char nome[30];
  float notas[4];
};

int main () {
	
  struct CADASTRO ALUNO[3], aux;
  int i, j;
	
  printf("***Programa de Cadastro de Alunos***\n");
	
  //Entrada de dados
  for (j=0 ; j<=2 ; j++) {
    printf("Favor digitar o nome do %do aluno: ", j + 1);
	fflush (stdin);   fgets (ALUNO[j].nome, 30, stdin);
	
	  for (i=0 ; i<=3 ; i++) {
	    printf("Favor digitar a %da nota do aluno %s\n", i + 1, ALUNO[j].nome);
     	scanf("%f", &ALUNO[j].notas[i]);
      }
  }
      
  //Organizando a struct (método da bolha)
  for (i=0 ; i<=1 ; i++) {
  	
    for (j=i+1 ; j<=2 ; j++) {
	 
	  if (strcmp(ALUNO[i].nome, ALUNO[j].nome) > 0) {
	  	
	    aux = ALUNO[i];
	   	ALUNO[i] = ALUNO[j];
	   	ALUNO[j] = aux;
	  }
	  
	}
  } 
	
  //Saída de dados
  system("cls");
	
  for (j=0 ; j<=2 ; j++) {
    printf("\n\nDados do %do aluno %s\n\n", j + 1, ALUNO[j].nome);
	
	for (i=0 ; i<=3 ; i++) {
	  printf("%da nota: %.1f\n", i + 1, ALUNO[j].notas[i]);
    }
  }
	
  system("pause");
  
return 0;
}



/* Melhore o algoritmo do exercício 'notas1' utilizando vetor para armazenar as notas. */

#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
  char nome[30];
  float nota[4];
};

int main () {
	
  struct CADASTRO ALUNO;
  int i;
	
  printf("***Programa de Cadastro de Alunos***\n");
	
  //Entrada de dados
  printf("Favor digitar o nome do aluno\n");
  fflush (stdin);   fgets (ALUNO.nome, 30, stdin);
	
  for (i=0 ; i<=3 ; i++) {
    printf("Favor digitar a %da nota do aluno %s\n", i + 1, ALUNO.nome);
    scanf("%f", &ALUNO.nota[i]);
  }
	
  //Saída de dados
  system("cls");
	
  printf("Dados do aluno %s\n\n", ALUNO.nome);
	
  for (i=0 ; i<=3 ; i++) {
    printf("%da nota: %.1f\n", i + 1, ALUNO.nota[i]);
  }
	
  system("pause");
  
return 0;
}
	


/* Desenvolva um algoritmo que informe o nome de um aluno e suas quatro notas bimestrais que devem ser agrupados 
em uma mesma estrutura. */

#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {    //<- é como se 'CADASTRO' fosse um TIPO DE DADO (assim como int, float, char, etc.)  
  char nome[30];     //ou uma MATRIZ, dependendo do ponto de vista
  float nota1, nota2, nota3, nota4;
};

int main () {
	
  struct CADASTRO ALUNO;   //<- variável 'ALUNO', do tipo 'CADASTRO'
	
  printf("***Programa de Cadastro de Alunos***\n");
	
  //Entrada de dados
  printf("Favor digitar o nome do aluno\n");
  fflush (stdin);   fgets (ALUNO.nome, 30, stdin);
  
  printf("Favor digitar a nota 1 de %s\n", ALUNO.nome);
  scanf("%f", &ALUNO.nota1);
  
  printf("Favor digitar a nota 2 de %s\n", ALUNO.nome);
  scanf("%f", &ALUNO.nota2);
  
  printf("Favor digitar a nota 3 de %s\n", ALUNO.nome);
  scanf("%f", &ALUNO.nota3);
  
  printf("Favor digitar a nota 4 de %s\n", ALUNO.nome);
  scanf("%f", &ALUNO.nota4);
	
  //Saída de dados
  system("cls");
	
  printf("Dados do aluno %s\n\n", ALUNO.nome);
  printf("Nota 1 = %.1f\n", ALUNO.nota1);
  printf("Nota 2 = %.1f\n", ALUNO.nota2);
  printf("Nota 3 = %.1f\n", ALUNO.nota3);
  printf("Nota 4 = %.1f\n", ALUNO.nota4);
	
  system("pause");
  
return 0;
}
	
	

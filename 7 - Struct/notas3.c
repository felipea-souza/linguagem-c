/* Modifique o algoritmo do exerc�cio 'notas2' para que o mesmo permita trabalhar com tr�s registros de alunos. */

#include <stdio.h>
#include <stdlib.h>

struct CADASTRO {
	char nome[30];
	float notas[4];
};

int main () {
	
  struct CADASTRO ALUNO[3];     //<<-- a quantidade de REGISTROS se faz na pr�pria vari�vel. � como se
  int i, j;                     //houvesse v�rias estruturas ("formul�rios" para os registros) mas s� foi  
                                //criada uma.
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
	
  //Sa�da de dados
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



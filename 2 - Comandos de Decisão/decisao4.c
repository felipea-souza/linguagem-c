/* Escrever um programa em linguagem C que faça a leitura de quatro valores numéricos referentes a quatro notas
bimestrais de um aluno, efetuar o cálculo da média e apresentá-la junto com uma das seguintes mensagens: caso
o valor da média seja maior ou igual a 5, apresentar "Aluno aprovado"; caso contrário, apresentar "Aluno reprovado".*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  float n1, n2, n3, n4, md;
	
  printf("Favor digitar as quatro notas.\n");
  scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
  
  md = (n1 + n2 + n3 + n4) / 4;
	
  if (md >= 5) {
    printf("A media eh: %.1f.\n", md);
	printf("Aluno aprovado.\n");
  } else {
	      printf("A media eh: %.1f.\n", md);
	      printf("Aluno reprovado.\n");
	}
	       
  system("pause");
  
 return 0;
}



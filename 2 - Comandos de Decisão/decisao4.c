/* Escrever um programa em linguagem C que fa�a a leitura de quatro valores num�ricos referentes a quatro notas
bimestrais de um aluno, efetuar o c�lculo da m�dia e apresent�-la junto com uma das seguintes mensagens: caso
o valor da m�dia seja maior ou igual a 5, apresentar "Aluno aprovado"; caso contr�rio, apresentar "Aluno reprovado".*/

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



/* Elaborar um programa que calcule e apresente o valor da m�dia geral de uma turma de oito alunos. Deve ser
a m�dia geral das m�dias de cada aluno obtida durante o ano letivo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
  float md[8], mdgeral = 0;
  int i;
	
  for (i=0 ; i<=7 ; i++) {
    
    printf("Favor digitar a %da media de aluno da turma.\n", i + 1);
	scanf("%f", &md[i]);        //<- Dica: para dados num�rios, este �nico colchetes representa as colunas. Se fosse dados
	                            //literais (com 'char'), este mesmo colchetes representaria as linhas. Tamb�m n�o seria
	mdgeral = mdgeral + md[i];  //necess�rio informar o '&', representando o endere�o de mem�ria
  }
	  
  printf("\nA media geral dos oito alunos eh: %.1f.\n", mdgeral / 8);
	
  system("pause");
  
return 0;
}


//Sem o conceito de matriz

/*int main() {
	
  float md1, md2, md3, md4, md5, md6, md7, md8, mdgeral;
    
  printf("Favor digitar as medias dos alunos da turma.\n");
  scanf("%f %f %f %f %f %f %f %f", &md1, &md2, &md3, &md4, &md5, &md6, &md7, &md8);
	
  mdgeral = (md1 + md2 + md3 + md4 + md5 + md6 + md7 + md8) / 8;
  
	  
  printf("\nA media geral dos oito alunos eh: %.1f.\n", mdgeral);
	
  system("pause");
  
return 0;
} */ 



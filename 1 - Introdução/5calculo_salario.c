/*Desenvolver um programa que calcule o sal�rio l�quido de um profissional que trabalha por hora.

Deve-se saber:
* valor da hora de trabalho;
* n�mero de horas trabalhadas no m�s;
* percentual de desconto do INSS.

Deve-se apresntar:
* o valor do sal�rio bruto;
* o valor descontado;
* o valor do sal�rio l�quido.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
  float vht, nht, pdesc, vsb, vdesc, vsl;

  printf("Favor digitar o valor da hora trabalhada.\n");
  scanf("%f", &vht); //8,50
  printf("Favor digitar o numero de horas trabalhadas.\n");
  scanf("%f", &nht); //200
  printf("Favor digitar o percentual de desconto do INSS.\n");
  scanf("%f", &pdesc); //10
  
  vsb = vht * nht;
  vdesc = vsb * (pdesc / 100);
  vsl = vsb - vdesc;
  
  printf("O valor do salario bruto eh de R$ %.2f\n", vsb);
  printf("O valor descontado eh de R$ %.2f\n", vdesc);
  printf("O valor do salario liquido eh de R$ %.2f\n", vsl);
  
  system("pause");
  
 return 0;  	
}

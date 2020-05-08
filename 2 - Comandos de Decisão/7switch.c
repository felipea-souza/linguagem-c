/* Criar um programa que peça ao usuário dois números e o sinal da operação aritmética. Depois, o programa
deve executar a operação escolhida e mostrar o resultado. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
  int n1, n2, i;
  char sinal, s;
	
  printf("*****PROGRAMA CALCULADORA*****\n\n");
  printf("Carregando, aguarde .");
  
  Sleep (1000);  // <- pause em milessegundos. Ou seja, este exemplo equivale a um segundo
  printf(".");
  Sleep (1000);
  printf(".");
  Sleep (1000);
  printf(".");
  Sleep (1000);
  printf(".");
  Sleep (1000);
  printf(".");
  Sleep (1000);
  system("cls");
	
  do {
      printf("*****PROGRAMA CALCULADORA*****\n\n");
	  printf("Favor digitar os dois numeros para a operacao aritmetica.\n");
	  scanf("%d", &n1);
	  scanf("%d", &n2);
	  printf("Informe a operacao desejada (+, -, * ou /).\n");
	  scanf("%s", &sinal);
	
	  switch(sinal) {
	    case '+':
         printf("O resultado de %d + %d = %d\n\n", n1, n2, n1 + n2);
    	 break;
	
    	case '-':
		 printf("O resultado de %d - %d = %d\n\n", n1, n2, n1 - n2);
         break;
		
    	case '*':
	     printf("O resultado de %d * %d = %d\n\n", n1, n2, n1 * n2);
         break;
	
    	case '/':
         printf("O resultado de %d / %d = %d\n\n", n1, n2, n1 / n2);
       	 break;	
	
	    default:
		 printf("Opcao invalida\n\n");
      }
    
      printf("Gostaria de realizar uma nova operacao? [S]im / [N]ao\n");
      scanf("%s", &s);
    
      if (s=='s' || s=='S') {
        i=0;
        system("cls");
      } else i=1;
      
  } while (i != 1); 

  system("pause");
  
return 0;
}



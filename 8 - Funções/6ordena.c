/* Criar um vetor para ler dez valores interiros e colocá-los em ordem crescente. A ordenação deverá ser 
feita por uma função */

#include<stdio.h>

int main() {
	
  int a[10], i;
  
  //Entradas dos valores
  printf("Favor digitar os dez valores inteiros para ordenacao.\n");
  
  for (i=0 ; i<=9 ; i++) {
  
    printf("%do valor: ", i + 1);
    scanf("%d", &a[i]);	
  }
  
  //Chamando a função para ordenação dos valores
  troca(&a);   //No caso de passagem de parâmetros por referência com vetores, não se informa os colchetes.
	  
  //Apresentando os valores em ordem crescente
  printf("\nValores apresentados em ordem crescente: ");
  for (i=0 ; i<=9 ; i++)
    printf("%d, ", a[i]);  	
	  
return 0;
}


//Protótipos
int troca(int b[]);


//Funções
int troca(int b[]) {
	
  int i, j, aux;
  
  for (i=0 ; i<=8 ; i++) 
  	
    for (j=i+1 ; j<=9 ; j++) 
    	
      if (b[i] > b[j]) {
      
	    aux = b[i];
		b[i] = b[j];
		b[j] = aux;	
	  }  	
}


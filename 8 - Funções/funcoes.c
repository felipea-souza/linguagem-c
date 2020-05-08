
int msg() {
	
  printf("Bem vindo!");
  
return 5;
}


int soma(int a, int b) {
	
  int soma;
  
  a = a + 1;
  soma = a + b;
  printf("\nResultado da funcao 'soma': %d.", soma);
  
return 0;
}

void msg2() {
	
  printf("PROGRAMA CALCULADORA.\n");
  printf("Escolha uma das opcoes.\n\n");
  printf("1 - adicao\n2 - subtracao\n3 - divisao\n4 - multiplicacao\n");
}

int calculos(int a, int b, int escolha) {
	
  switch(escolha) {
    	
    case 1:
      printf("\nFavor digitar os dois valores.\n");
	  scanf("%d%d", &a, &b);
	  printf("O resultado eh: %d", a + b);
	   break;
			
    case 2:
      printf("\nFavor digitar os dois valores.\n");
      scanf("%d%d", &a, &b);
	  printf("\nO resultado eh: %d", a - b);
	   break;
			
    case 3:
      printf("\nFavor digitar os dois valores.\n");
	  scanf("%d%d", &a, &b);
	  printf("\nO resultado eh: %d", a / b);
	   break;
			
    case 4:
      printf("\nFavor digitar os dois valores.\n");
	  scanf("%d%d", &a, &b);
	  printf("\nO resultado eh: %d", a * b);
	   break;
			
    default:
      printf("\nOpcao invalida.\n");
  }
}


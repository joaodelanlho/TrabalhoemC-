#include<stdio.h> 

  

int main(){		// funcao principal 

 

int numero;		// variavel inteira 

 

printf("Digite um numero inteiro:");	// exibe para digitar um numero inteiro 

scanf("%d", &numero);		// lê e armazena o numero  

 

printf("Antecessor: %d\n", numero - 1);	// exibe o antecessor  

printf("Sucessor: %d\n", numero + 1 );	// exibe o sucessor  

 

return 0;	// finaliza o programa  

 

} 


#include<stdio.h> 

  

int main(){		// funcao principal  

 

int numero, i;	// variaveis de controle e numero 

 

printf("Digite um numero: ");	// solicita o numero 

scanf("%d", &numero);	// lê o numero digitado 

 

printf("\nTabuada do %d:\n", numero); 	// exiber o titulo da tabuada  

 

for (i = 1; i <= 10; i++)		// repete de 1 ate 10 

{ 

printf("%d x %d = %d\n", numero, i, numero * i); 	// exibe a multiplicacao 

 

} 

 

 

return 0;	// finaliza o programa  

} 

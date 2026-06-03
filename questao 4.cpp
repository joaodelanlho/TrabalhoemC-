#include<stdio.h> 

  

int main(){		// funcao principal 

 

int num1, num2;	// variavel inteira  

 

printf("Digite o primeiro numero: ");	// solicita o primeiro numero 

scanf("%d", &num1);	// lê e armazena o primeiro numero  

printf("Digite o segundo numero: ");	// solicita o segundo numero  

scanf("%d", &num2);		// lê e armazena o segundo numero  

 

if (num1 == num2)		// verifica se os numeros sao iguais  

{ 

printf("Os numeros sao iguais!\n");		// exibe se os numeros forem iguais 

 

} 

 

else if (num1 > num2)		// Verifica se os o numero 1 é menor  

{ 

printf("O primeiro numero e maior!\n");	// exibe caso o numero 1 for menor  

 

} 

 

else	// caso o contrario o segundo é maior 

{ 

printf("O segundo numero e maior!\n");		// exibe a mensagem correspondente  

 

} 

 

 

 

return 0;	// finaliza o programa  

} 

 
 

#include<stdio.h> 

  

int main(){		// funcao principal  

 

 float num1, num2, resultado;	// variavel para numeros e resultados  

 char operacao;		// variavel para armazenar a operacao 

  

 printf("Digite o primeiro numero:"); 	// exibe para digitar o primeiro numero 

 scanf("%f", &num1);		// lê e armazena o primeiro numero  

  

 printf("Digite o segundo numero:"); 	// exibe para digitar o segundo numero 

 scanf("%f", &num2);		// lê e armazena o segundo numero  

  

 printf("Digite a operacao desejada (+, -, /, *)");		// exibe para escolher a operacao desejada 

 scanf(" %c", &operacao);	// lê e armazena a operacao 

  

 switch (operacao)		// verifica a operacao 

 { 

 	case '+':		// caso adicao 

 		resultado = num1 + num2; 

 		printf("Resultado: %.2f\n", resultado); 

 		break; 

 	 

 	case '-':		// caso subtracao 

 		resultado = num1 - num2; 

 		printf("Resultado: %.2f\n", resultado); 

 		break; 

 	 

case '*':		// caso multiplicacao 

resultado = num1 * num2; 

printf("Resultado: %.2f\n", resultado); 

break; 

 

case '/':		// caso divisao 

if (num2 != 0) 

{ 

resultado = num1 / num2; 

printf("Resultado: %.2f\n", resultado); 

 

} 

else 

{ 

printf("Erro divisao por zero! \n"); 

 

} 

break; 

 

default: 

printf("Operacao invalida \n ");		// exibe caso a operacao seja invalida 

 

 

 } 

  

  

  

  

 		 

return 0;	// finaliza o programa  

 

} 

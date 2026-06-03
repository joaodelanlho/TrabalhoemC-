#include<stdio.h> 

  

int main(){	// funcao principal  

 

float num1, num2;	// variavel dos numeros que serao utilizados 

float soma, divisao, subtracao, multiplicacao;	// variavel das operacoes solicitadas  

 

printf("Digite o primeiro numero: ");	// exibe para digitar o primeiro numero 

scanf("%f", &num1);	// lê o primeiro numero e armazena  

printf("Digite o segundo numero: ");	// exibe para digitar o segundo numero  

scanf("%f", &num2);		// lê o segundo numero e armazena  

 

soma = num1 + num2;		// calcula a soma  

divisao = num1 / num2;	// calcula a divisao  

subtracao = num1 - num2; 	// calcula a subtracao  

multiplicacao = num1 * num2;	// calcula a multiplicacao  

 

printf("\nResultados:\n");	// exibe o titulo para os resultados  

printf("Soma: %.2f\n", soma);	// exibe a soma  

printf("Divisao: %.2f\n", divisao);	// exibe a divisao  

printf("Subtracao: %.2f\n", subtracao); 	// exibe a subtracao  

printf("Multiplicacao: %.2f\n",multiplicacao);		// exibe a multiplicacao  

 

 

 

 

return 0;	// finaliza o programa  

} 


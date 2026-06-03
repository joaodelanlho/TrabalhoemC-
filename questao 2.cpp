#include<stdio.h> 

  

int main(){		// função principal  

 

int num1, num2;		// variavel inteira dos numeros solicitados 

int soma, divisaointeira;	// variaveis inteiras  

float divisaoreal;		// variavel decimal da divisao real  

 

printf("Digite o primeiro numero: ");	// exibe para digitar o primeiro numero  

scanf("%d", &num1 );	// lê o primeiro numero e armazena em num1 

printf("Digite o segundo numero: ");	// exibe para digitar o segundo numero  

scanf("%d", &num2);	// lê o segundo numero e armazena em num2  

 

soma= num1+num2;	// calcula a soma do num1 e num2  

divisaointeira = num1 / num2;	// calcula a divisao do num1 e num2 

divisaoreal = (float) num1 / num2; 	// transforma o num1 em float e calcula a divisao real  

 

printf("Soma: %d\n", soma);	// exibe a soma  

printf("Divisao inteira: %d\n ", divisaointeira );	// exibe a divisao inteira 	 

printf("Divisao real: %.2f\n", divisaoreal);	// exibe a divisao real  

 

 

  

return 0; 	// encerra o programa 

} 


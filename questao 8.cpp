#include<stdio.h> 

  

int main(){		// funcao preincipal 

 

float celsius;		// variavel decimal para celsius 

float fahrenheit;		// variavel decimal para fahrenheit 

 

printf("Digite a temperatura em celsius: ");	// exibe para digitar a temperatura  

scanf("%f", &celsius);		// lê e armazena a temperatura em celsius  

 

fahrenheit = (9 * celsius / 5) + 32;	// equacao de fahrenheit 

 

printf("Temperatura em farenheit: %.2f\n", fahrenheit);		// exibe a temperatura em fahrenheit 

 

 

return 0;	// finaliza o programa  

} 

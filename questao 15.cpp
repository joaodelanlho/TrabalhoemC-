 

#include<stdio.h> 

  

int main(){		// funcao principal 

 

int num, soma;		// variaveis inteiras  

 

for (int i = 1; i <= 5; i++){		// repete o processo 5 vezes  

printf("Digite o %d numero: ", i);		// exibe para digitar  

scanf("%d", &num);	// lê e armazena os numeros  

 

soma = soma + num;	// adiciona o numero a soma total 

 

} 

 

printf("A soma total e: %d\n", soma);		// exibe a soma total 

 

 

return 0;		// finaliza o programa  

} 

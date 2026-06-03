#include<stdio.h> 

  

int main(){  	// funcao principal 

 

int num;	// variavel inteira 

 

printf("Digite um numero inteiro: ");		// exibe para digitar o numero 

scanf("%d", &num);		// Lê e armazena o numero 

 

if (num % 2 == 0)	// verifica se o numero e par  

{ 

printf("O numero e par! \n");		// exibe que o numero e par  

} 

else 	// caso nao seja o numero e impar  

{ 

printf("O numero e impar! \n"); 	// exibe que o numero e impar  

 

} 

 

return 0; 	// finaliza o programa 

} 

#include<stdio.h> 

  

int main(){		// funcao principal 

 

int numero;		// variavel inteira 

long long fatorial = 1;		// armazena a variavel da fatorial  

 

printf("Digite um numero: ");	// exibe para digitar um numero  

scanf("%d", &numero);	// lê e armazena o numero 

 

for (int i = 1; i <= numero; i++){	// repete 1 ate o numero informado  

fatorial = fatorial * i;	// calcula a fatorial  

} 

  

printf("O fatorial de %d e: %lld\n", numero, fatorial);		// exibe o valor da fatorial  

 

 

return 0;	// finaliza o programa  

} 

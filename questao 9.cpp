#include<stdio.h> 

  

int main(){		// funcao principal 

  

int num;	// variavel inteira  

 

printf("Digite um numero:");	// exibe para digitar um numero 

scanf("%d", &num);		// lê e armazena o numero 

 

if( num > 0 )		// verifica se o numero e positivo  

{ 

printf("O numero e positivo!");	 

} 

else if ( num < 0 )		// verifica se o numero e negativo  

{ 

printf("O numero e negativo!"); 

} 

else 	// caso nao seja nenhum o numero e zero  

{ 

printf("O numero e zero!"); 

} 

return 0;	// finaliza o programa  

} 


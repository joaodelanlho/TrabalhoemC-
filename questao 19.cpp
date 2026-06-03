#include<stdio.h> 

  

int main(){		// funcao principal 

 

int matriz[2][2];		// variavel matriz  

int soma = 0;		// variavel soma  

 

for (int i = 0; i < 2; i++){	// percorre as linhas da matriz  

for (int j = 0; j < 2; j++){		// percorre as colunas da matriz  

printf("Digite o valor da posicao [%d][%d]: ", i, j);	// solicita o valor  

scanf("%d", &matriz[i][j]);	// lê e armazena cada valor 

 

soma = soma + matriz[i][j];		// adiciona o valor a soma  

} 

} 

 

printf("A soma de todos os elementos e: %d\n", soma);		// exibe o valor total da soma  

 

 

 

return 0;		// finaliza o programa  

} 

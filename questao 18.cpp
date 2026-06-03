#include<stdio.h> 

  

int main(){		// funcao principal 

 

int vetor[10];		// variavel do vetor 

int maior, posicao;		// variavel de posicao e maior 

 

for (int i = 0; i < 10; i++){	// lê os 10 numeros 

 

printf("Digite o %d numero: ", i + 1);	// exibe para digitar cada numero  

scanf("%d", &vetor[i]);	// lê e armazena cada numero  

 

} 

 

maior = vetor[0];	// assume o primeiro valor como maior  

posicao = 0;		// assume a primeira posicao  

 

for (int i = 1; i < 10; i++ ){		// percorre o restante do vetor  

if (vetor[i] > maior){		// verifica se encontrou um valor maior  

maior = vetor[i];		// atualiza o novo valor  

posicao = i;		// atualiza a nova posicao  

} 

 

 

} 

 

printf("Maior valor: %d\n", maior);		// exibe o maior valor  

printf("Posicao do maior valor: %d\n", posicao + 1);		// exibe a posicao do maior valor  

 

 

 

return 0;		// finaliza o programa  

} 

 

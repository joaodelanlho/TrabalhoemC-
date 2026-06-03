#include<stdio.h> 

  

int main(){		//funcao principal 

 

char nome[50];		//variavel do nome 

char cidade[50];	// variavel da cidade 

int idade;		// variavel da idade 

 

printf("Digite seu nome: ");	// exibe para digitar o nome  

scanf(" %[^\n]", nome );		// lê e armazena o nome  

 

printf("Digite a sua cidade: ");		// exibe para digitar a cidade  

scanf(" %[^\n]", cidade);		// lê e armazena a cidade 

 

printf("Digite a sua idade:");		// exiber para digitar a idade 

scanf("%d", &idade);		// lê e armazena a idade 

 

printf("\n--- Informacoes cadastradas ---\n");	// titulo  

printf("Nome: %s\n", nome );	// exibe o nome 

printf("Cidade: %s\n", cidade);		// exibe a cidade 

printf("Idade: %d anos \n", idade);		// exibe a idade 

 

return 0;		// finaliza o programa  

 

 

} 


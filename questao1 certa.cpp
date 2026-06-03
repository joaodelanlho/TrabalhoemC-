#include<stdio.h> 

  

int main(){ 	//	função principal do sistema  

int idade; 	//	variavel que armazena idade 

float altura;	// variavel que armazena altura  

char inicial;	// variavel que armazena inicial do nome  

 

printf("Digite a sua idade:");	// Exibe uma imagem pediando a idade 

scanf("%d", &idade);	//  lê um valor inteiro e armazena a idade 

printf("Digite sua altura:");	// Exibe uma imagem pedindo a altura  

scanf("%f", &altura);	// Lê um valor decimal e armazena a altura  

printf("Digite a inicial do seu nome:");	// Exibe uma imagem pedindo a inicial do nome  

scanf(" %c", &inicial);	// Lê um caractere e armazena a inicial  

 

printf("\nDados informados:\n");	// Exibe um titulo  

printf("Idade: %d anos\n", idade);	// Mostra a idade  

printf("Altura: %.2f cm \n", altura);	// Mostra a altura 

printf("Inicial do nome : %c\n", inicial);	// Mostra a inicial do nome  

 

 

return 0;	// Encerra o programa 

}]

#include<stdio.h> 

  

int main(){		// funcao principal  

 

float nota1, nota2, media;	// variaveis decimais 

 

printf("Digite a primeira nota: ");		// exibe para inserir a primeira nota  

scanf("%f", &nota1);	// lê e armazena a primeira nota  

 

printf("Digite a segunda nota: ");		// exibe para inseir a segunda nota  

scanf("%f", &nota2);		// lê e armazena a segunda nota  

 

media = (nota1 + nota2) / 2;	// media das notas  

printf("Media: %.1f\n", media);		// exibe a media desejada  

 

if (media >= 7)		// verifica se a media e maior que 7 

{ 

printf("Aluno aprovado!");	// exibe o resultado  

 

} 

else if (media >= 5 )		// verifica se a media esta entre 5 e 6.9 

{ 

printf("Aluno em recuperacao!");	// exibe o resultado  

 

} 

else		// caso nao atinja a media  

{ 

printf("Aluno reprovado!");		// exibe o resultado  

 

} 

 

 

return 0;	// finaliza o programa  

} 

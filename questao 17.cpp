#include<stdio.h> 

  

int main(){ 	// funcao principal 

 

int v[5] = {10,20,30,40,50};		// variavel inteira dos numeros 

int i;		// variavel inteira 

float s = 0;	// variavel da soma  

 

for (i = 0; i < 5; i++){	// repete ate o 5 

 

s += v[i];		// faz a soma  

 

}	 

 

printf("O resultado e: %2.f\n", s);	// exibe o resultado 

 

 

return 0;	// finaliza o programa  

} 

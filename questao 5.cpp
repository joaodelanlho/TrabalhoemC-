#include <stdio.h> // Biblioteca para entrada e saída 

  

int main() // Função principal 

{ 

    float media, frequencia; // Variáveis para média e frequência 

  

    printf("Digite a media do aluno: "); // Solicita a média 

    scanf("%f", &media); // Lê a média 

  

    printf("Digite a frequencia (em %%): "); // Solicita a frequência 

    scanf("%f", &frequencia); // Lê a frequência 

  

    // Verifica se a média é maior ou igual a 7 E a frequência é maior ou igual a 75 

    if (media >= 7 && frequencia >= 75) 

    { 

        printf("Aluno APROVADO!\n"); // Exibe mensagem de aprovação 

    } 

    else 

    { 

        printf("Aluno REPROVADO!\n"); // Exibe mensagem de reprovação 

    } 

  

    // Exemplo de uso do operador ! 

    if (!(media >= 7 && frequencia >= 75)) 

    { 

        printf("O aluno nao atendeu a todas as condicoes.\n"); 

    } 

  

    return 0; // Encerra o programa 

} 

#include <stdio.h> 

  

int main() { // Função principal 

  

    int matriz[3][3]; // Declara uma matriz 3x3 

  

    for (int i = 0; i < 3; i++) { // Percorre as linhas 

        for (int j = 0; j < 3; j++) { // Percorre as colunas 

            printf("Digite o valor da posicao [%d][%d]: ", i, j); // Solicita um valor 

            scanf("%d", &matriz[i][j]); // Armazena o valor na matriz 

        } 

    } 

  

    printf("Elementos da diagonal principal:\n"); // Título 

  

    for (int i = 0; i < 3; i++) { // Percorre a diagonal principal 

        printf("%d ", matriz[i][i]); // Exibe os elementos da diagonal 

    } 

     

  

    printf("\n"); // Quebra de linha 

  

    return 0; // Encerra o programa 

} 

#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS] = {0}; // Inicializa toda a matriz com 0

    // Define os valores específicos da matriz usando um loop
    for (int j = 4; j <= 6; j++) { // Percorre as colunas G (6), H (7) e I (8)
        matriz[2][j] = 3; // Linha 4 (índice 3), colunas G a I
    }

    for (int i = 4; i <= 6; i++)
    {
        matriz[i][7] = 3;
    }
    
    for (int i = 0; i <= 2; i++) {
        matriz[i][i] = 3; // Define o número 3 na posição (i, i)
    }

    for (int i = 0; i <= 2; i++) {
        matriz[i][9 - i] = 3; // Linha i, coluna decrescendo de 9 para 7
    }

    // Exibe cabeçalho das colunas
    printf("   ");
    for (char c = 'A'; c <= 'J'; c++) {
        printf("%c  ", c);
    }
    printf("\n");

    // Exibe matriz
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);  // Índice das linhas
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
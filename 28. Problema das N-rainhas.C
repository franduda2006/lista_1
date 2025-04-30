#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int ehSeguro(int tabuleiro[MAX][MAX], int linha, int coluna, int n) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i][coluna]) {
            return 0;
        }
    }

    for (int i = linha, j = coluna; i >= 0 && j >= 0; i--, j--) {
        if (tabuleiro[i][j]) {
            return 0;
        }
    }

    for (int i = linha, j = coluna; i >= 0 && j < n; i--, j++) {
        if (tabuleiro[i][j]) {
            return 0;
        }
    }
    return 1; 
}

void imprimirTabuleiro(int tabuleiro[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", tabuleiro[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}

void resolverNQueens(int tabuleiro[MAX][MAX], int linha, int n) {
    if (linha >= n) {
        imprimirTabuleiro(tabuleiro, n);
        return;
    }

    for (int coluna = 0; coluna < n; coluna++) {
        if (ehSeguro(tabuleiro, linha, coluna, n)) {
            tabuleiro[linha][coluna] = 1;
            resolverNQueens(tabuleiro, linha + 1, n);
            tabuleiro[linha][coluna] = 0;
        }
    }
}

int main() {
    int n = 4; 
    int tabuleiro[MAX][MAX] = {0};
    printf("Soluções para %d rainhas:\n", n);
    resolverNQueens(tabuleiro, 0, n);
    return 0;
}
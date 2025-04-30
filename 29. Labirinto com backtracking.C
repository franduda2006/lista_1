#include <stdio.h>
#define MAX 10

int ehSeguro(int labirinto[MAX][MAX], int solucao[MAX][MAX], int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m && labirinto[x][y] == 0 && solucao[x][y] == 0);
}

int resolverLabirinto(int labirinto[MAX][MAX], int solucao[MAX][MAX], int x, int y, int n, int m) {
    if (x == n - 1 && y == m - 1) {
        solucao[x][y] = 1;
        return 1;
    }

    if (ehSeguro(labirinto, solucao, x, y, n, m)) {
        solucao[x][y] = 1;
        if (resolverLabirinto(labirinto, solucao, x, y + 1, n, m)) {
            return 1;
        }
        if (resolverLabirinto(labirinto, solucao, x + 1, y, n, m)) {
            return 1;
        }
        solucao[x][y] = 0;
    }
    return 0; 
}

void imprimirSolucao(int solucao[MAX][MAX], int n, int m) {
    printf("Solução encontrada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", solucao[i][j] ? '*' : '.');
        }
        printf("\n");
    }
}

int main() {
    int labirinto[MAX][MAX] = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 1, 1, 0}
    };
    int n = 3, m = 4;
    int solucao[MAX][MAX] = {0};

    if (resolverLabirinto(labirinto, solucao, 0, 0, n, m)) {
        imprimirSolucao(solucao, n, m);
    } else {
        printf("Nenhuma solução encontrada.\n");
    }

    return 0;
}
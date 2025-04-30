#include <stdio.h>

void encontrarCaminho(int x1, int y1, int x2, int y2, char caminho[]) {
    int pos = (x1 + y1) * 4;
    sprintf(&caminho[pos], "(%d,%d) → ", x1, y1);
    
    if (x1 == x2 && y1 == y2) {
        printf("%s(%d,%d)\n", caminho, x2, y2);
        return;
    }

    if (y1 < y2) {
        encontrarCaminho(x1, y1 + 1, x2, y2, caminho);
    }

    if (x1 < x2) {
        encontrarCaminho(x1 + 1, y1, x2, y2, caminho);
    }
}

int contarCaminhos(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) {
        return 1;
    }
    if (x1 > x2 || y1 > y2) {
        return 0;
    }
    return contarCaminhos(x1 + 1, y1, x2, y2) + contarCaminhos(x1, y1 + 1, x2, y2);
}

int main() {
    int x1 = 0, y1 = 0, x2 = 2, y2 = 2;
    char caminho[100] = "";

    printf("Todos os caminhos de (%d,%d) até (%d,%d):\n", x1, y1, x2, y2);
    
    encontrarCaminho(x1, y1, x2, y2, caminho);

    printf("\nNúmero total de caminhos possíveis: %d\n", contarCaminhos(x1, y1, x2, y2));
    return 0;
}
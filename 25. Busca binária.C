#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int alvo) {
    if (esquerda > direita) {
        return -1;
    }

    int meio = esquerda + (direita - esquerda) / 2;

    if (arr[meio] == alvo) {
        return meio;
    } else if (arr[meio] > alvo) {
        return buscaBinaria(arr, esquerda, meio - 1, alvo);
    } else {
        return buscaBinaria(arr, meio + 1, direita, alvo);
    }
}

void resultadoBusca(int indice) {
    if (indice != -1) {
        printf("Elemento encontrado no índice: %d\n", indice);
    } else {
        printf("Elemento não encontrado.\n");
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 7;

    printf("Buscando %d...\n", alvo);
    int indice = buscaBinaria(arr, 0, tamanho - 1, alvo);
    resultadoBusca(indice);
    return 0;
}
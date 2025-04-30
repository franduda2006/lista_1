#include <stdio.h>
#define MAX 100

void gerarSubconjuntos(int arr[], int aux[], int tamanho, int indice) {
    if (indice == tamanho) {
        printf("{ ");
        for (int i = 0; i < tamanho; i++) {
            if (aux[i]) {
                printf("%d ", arr[i]);
            }
        }
        printf("}\n");
        return;
    }

    aux[indice] = 0;
    gerarSubconjuntos(arr, aux, tamanho, indice + 1);
    aux[indice] = 1;
    gerarSubconjuntos(arr, aux, tamanho, indice + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int aux[MAX] = {0};

    printf("Todos os subconjuntos:\n");
    gerarSubconjuntos(arr, aux, tamanho, 0);
    return 0;
}
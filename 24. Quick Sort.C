#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int esquerda, int direita) {
    int pivo = arr[direita];
    int i = esquerda - 1;

    for (int j = esquerda; j < direita; j++) {
        if (arr[j] < pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[direita]);
    return (i + 1);
}

void quickSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int indicePivo = particionar(arr, esquerda, direita);

        quickSort(arr, esquerda, indicePivo - 1);
        quickSort(arr, indicePivo + 1, direita);
    }
}

void imprimirArray(int arr[], int tamanho) {
    printf("{ ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

int main() {
    int arr[] = {5, 3, 8, 1, 4, 7};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, tamanho);

    quickSort(arr, 0, tamanho - 1);

    printf("Array ordenado: ");
    imprimirArray(arr, tamanho);
    return 0;
}
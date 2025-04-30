#include <stdio.h>

void merge(int arr[], int esquerda, int meio, int direita) {
    int i, j, k;
    int tamanho1 = meio - esquerda + 1;
    int tamanho2 = direita - meio;
    int L[tamanho1], R[tamanho2];

    for (i = 0; i < tamanho1; i++)
        L[i] = arr[esquerda + i];
    for (j = 0; j < tamanho2; j++)
        R[j] = arr[meio + 1 + j];
        i = 0; 
        j = 0; 
        k = esquerda; 

    while (i < tamanho1 && j < tamanho2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < tamanho1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < tamanho2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(arr, esquerda, meio);
        mergeSort(arr, meio + 1, direita);
        merge(arr, esquerda, meio, direita);
    }
}

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    imprimirArray(arr, tamanho);

    mergeSort(arr, 0, tamanho - 1);

    printf("Array ordenado:\n");
    imprimirArray(arr, tamanho);
    return 0;
}
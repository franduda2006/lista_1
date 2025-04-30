#include <stdio.h>

int somaArray(int arr[], int tamanho, int index) {
    if (index == tamanho) {
        return 0;
    }
    return arr[index] + somaArray(arr, tamanho, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("A soma dos elementos do array é %d\n", somaArray(arr, tamanho, 0));

    return 0;
}
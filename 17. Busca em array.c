#include <stdio.h>
#include <stdbool.h>

bool buscarElementoRecursivo(int arr[], int tamanho, int elemento, int indice) {
    if (indice == tamanho) {
        return false;
    }

    if (arr[indice] == elemento) {
        return true;
    }
    return buscarElementoRecursivo(arr, tamanho, elemento, indice + 1);
}

bool buscarElemento(int arr[], int tamanho, int elemento) {
    return buscarElementoRecursivo(arr, tamanho, elemento, 0);
}

int main() {
    int array1[] = {2, 4, 6, 8};
    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    int elemento1 = 6;
    bool resultado1 = buscarElemento(array1, tamanho1, elemento1);
    printf("O elemento %d está presente no array? %s\n", elemento1, resultado1 ? "Sim" : "Não");

    int array2[] = {2, 4, 6, 8};
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);
    int elemento2 = 5;
    bool resultado2 = buscarElemento(array2, tamanho2, elemento2);
    printf("O elemento %d está presente no array? %s\n", elemento2, resultado2 ? "Sim" : "Não"); 

    int array3[] = {10, 20, 30, 40, 50};
    int tamanho3 = sizeof(array3) / sizeof(array3[0]);
    int elemento3 = 30;
    bool resultado3 = buscarElemento(array3, tamanho3, elemento3);
    printf("O elemento %d está presente no array? %s\n", elemento3, resultado3 ? "Sim" : "Não");
    
    int array4[] = {10, 20, 30, 40, 50};
    int tamanho4 = sizeof(array4) / sizeof(array4[0]);
    int elemento4 = 60;
    bool resultado4 = buscarElemento(array4, tamanho4, elemento4);
    printf("O elemento %d está presente no array? %s\n", elemento4, resultado4 ? "Sim" : "Não");
    return 0;
}
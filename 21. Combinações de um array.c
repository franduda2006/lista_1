#include <stdio.h>

void imprimirCombinacao(int combinacao[], int k) {
    printf("{");
    for (int i = 0; i < k; i++) {
        printf("%d", combinacao[i]);
        if (i < k - 1) {
            printf(",");
        }
    }
    printf("} ");
}

void combinacoesRecursivas(int arr[], int n, int k, int combinacao[], int indiceCombinacao, int indiceAtual) {
    if (indiceCombinacao == k) {
        imprimirCombinacao(combinacao, k);
        return;
    }

    if (indiceAtual >= n) {
        return;
    }

    combinacao[indiceCombinacao] = arr[indiceAtual];
    combinacoesRecursivas(arr, n, k, combinacao, indiceCombinacao + 1, indiceAtual + 1);
    combinacoesRecursivas(arr, n, k, combinacao, indiceCombinacao, indiceAtual + 1);
}

void gerarCombinacoes(int arr[], int n, int k) {
    int combinacao[k];
    combinacoesRecursivas(arr, n, k, combinacao, 0, 0);
    printf("\n");
}

int main() {
    int array1[] = {1, 2, 3};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int k1 = 1;
    printf("Combinações de tamanho %d do array {1, 2, 3}: ", k1);
    gerarCombinacoes(array1, n1, k1);

    int array2[] = {1, 2, 3, 4};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int k2 = 3;
    printf("Combinações de tamanho %d do array {1, 2, 3, 4}: ", k2);
    gerarCombinacoes(array2, n2, k2);

    int array3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    int k3 = 4;
    printf("Combinações de tamanho %d do array {1, 2, 3, 4, 5}: ", k3);
    gerarCombinacoes(array3, n3, k3);
    return 0;
}
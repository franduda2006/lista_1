#include <stdio.h>

void imprimirImparesRecursivo(int n, int atual) {
    if (atual > n) {
        return;
    }

    printf("%d ", atual);
    imprimirImparesRecursivo(n, atual + 2);
}

void imprimirImpares(int n) {
    if (n >= 1) {
        imprimirImparesRecursivo(n, 1);
    }
}

#include <stdio.h>

void imprimirImpares(int n, int atual) {
    if (atual > n) {
        return;
    }

    printf("%d ", atual);

    imprimirImpares(n, atual + 2);
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("Números ímpares de 1 até %d:\n", num);
    
    imprimirImpares(num, 1);

    printf("\n");
    return 0;
}
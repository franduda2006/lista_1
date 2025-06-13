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

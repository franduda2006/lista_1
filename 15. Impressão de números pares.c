#include <stdio.h>

void imprimirPares(int n, int atual) {
    if (atual > n) {
        return;
    }

    printf("%d ", atual);
    
    imprimirPares(n, atual + 2);
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("Números pares de 0 até %d:\n", num);
    
    imprimirPares(num, 0);

    printf("\n"); 
    return 0;
}
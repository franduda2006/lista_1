#include <stdio.h>

void decimalParaBinario(int n) {
    if (n == 0) {
        return;
    }

    decimalParaBinario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
    } else {
        decimalParaBinario(num);
        printf("\n");
    }
    return 0;
}
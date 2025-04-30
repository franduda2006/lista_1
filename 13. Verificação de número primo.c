#include <stdio.h>

int ehPrimoRec(int n, int divisor) {
    if (divisor * divisor > n) {
        return 1;
    }
    if (n % divisor == 0) {
        return 0;
    }
    return ehPrimoRec(n, divisor + 1);
}

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    return ehPrimoRec(n, 2);
}

int main() {
    int num;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (ehPrimo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }
    return 0;
}
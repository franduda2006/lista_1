#include <stdio.h>

long long exponenciacaoRapida(int x, int n) {
    if (n == 0) {
        return 1;
    }

    long long temp = exponenciacaoRapida(x, n / 2);

    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return x * temp * temp;
    }
}

int main() {
    int x = 2, n = 10;
    printf("%d^%d = %lld\n", x, n, exponenciacaoRapida(x, n));
    return 0;
}
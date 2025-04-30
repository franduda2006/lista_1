#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiplicar(a, b - 1);
}

int main() {
    int num1, num2;
    
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num1);
    
    printf("Digite outro número inteiro não negativo: ");
    scanf("%d", &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Por favor, insira números inteiros não negativos.\n");
    } else {
        printf("%d x %d = %d\n", num1, num2, multiplicar(num1, num2));
    }

    return 0;
}
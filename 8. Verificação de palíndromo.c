#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificarPalindromo(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }

    if (str[inicio] != str[fim]) {
        return 0;
    }

    return verificarPalindromo(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str);

    int tamanho = strlen(str);

    if (verificarPalindromo(str, 0, tamanho - 1)) {
        printf("'%s' é um palíndromo.\n", str);
    } else {
        printf("'%s' não é um palíndromo.\n", str);
    }

    return 0;
}
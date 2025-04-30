#include <stdio.h>
#include <stdlib.h>

void gerarParenteses(int aberto, int fechado, int n, char *resultado, int pos) {
    if (pos == 2 * n) {
        resultado[pos] = '\0';
        printf("%s\n", resultado);
        return;
    }

    if (aberto < n) {
        resultado[pos] = '(';
        gerarParenteses(aberto + 1, fechado, n, resultado, pos + 1);
    }

    if (fechado < aberto) {
        resultado[pos] = ')';
        gerarParenteses(aberto, fechado + 1, n, resultado, pos + 1);
    }
}

int main() {
    int n;
    
    printf("Digite o número de pares de parênteses: ");
    scanf("%d", &n);

    char *resultado = (char *)malloc((2 * n + 1) * sizeof(char));
    
    if (resultado == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    gerarParenteses(0, 0, n, resultado, 0);
    free(resultado);
    return 0;
}
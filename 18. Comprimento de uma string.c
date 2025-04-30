#include <stdio.h>

int comprimentoString(char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + comprimentoString(str + 1);
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    scanf("%s", str);

    printf("O comprimento da string \"%s\" é %d\n", str, comprimentoString(str));
    return 0;
}
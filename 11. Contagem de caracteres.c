#include <stdio.h>

int contarCaracter(char *str, char c, int index) {
    if (str[index] == '\0') {
        return 0;
    }
    int contagem = (str[index] == c) ? 1 : 0;
    return contagem + contarCaracter(str, c, index + 1);
}

int main() {
    char str[100], c;

    printf("Digite uma string: ");
    scanf("%s", str);
    
    printf("Digite o caractere que deseja contar: ");
    scanf(" %c", &c);  
    
    printf("O caractere '%c' aparece %d vezes na string \"%s\".\n", c, contarCaracter(str, c, 0), str);
    return 0;
}
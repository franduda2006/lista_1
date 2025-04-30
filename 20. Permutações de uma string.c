#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutarString(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s, ", str);
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar((str + inicio), (str + i));
            permutarString(str, inicio + 1, fim);
            trocar((str + inicio), (str + i));
        }
    }
}

int main() {
    char string1[] = "abc";
    printf("Permutações da string \"%s\": ", string1);
    permutarString(string1, 0, strlen(string1) - 1); 
    printf("\n");

    char string2[] = "prof";
    printf("Permutações da string \"%s\": ", string2);
    permutarString(string2, 0, strlen(string2) - 1);
    printf("\n");

    char string3[] = "abb";
    printf("Permutações da string \"%s\": ", string3);
    permutarString(string3, 0, strlen(string3) - 1);
    printf("\n");
    return 0;
    
}
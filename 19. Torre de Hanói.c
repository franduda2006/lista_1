#include <stdio.h>

void torreDeHanoi(int n, char origem, char auxiliar, char destino) {
    
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    torreDeHanoi(n - 1, origem, destino, auxiliar);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);

    torreDeHanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int numDiscos;

    printf("Digite o número de discos: ");
    scanf("%d", &numDiscos);

    printf("Solução para a Torre de Hanói com %d discos:\n", numDiscos);
    torreDeHanoi(numDiscos, 'A', 'B', 'C');
    return 0;
}
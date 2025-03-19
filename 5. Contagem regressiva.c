#include <stdio.h>

void contagem_regressiva(int n) {
  if (n >= 0) {
    printf("%d ", n);
    contagem_regressiva(n - 1);
  }
}

int main() {
  int num = 3;
  contagem_regressiva(num);
  printf("\n");
  return 0;
}

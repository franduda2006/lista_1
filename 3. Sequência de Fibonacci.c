#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int num = 6;
  printf("O %d-ésimo termo da sequência de Fibonacci é %d\n", num, fibonacci(num));
  return 0;
}

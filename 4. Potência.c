#include <stdio.h>

int power(int x, int n) {
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return x;
  } else if (n % 2 == 0) { // n é par
    return power(x * x, n / 2);
  } else { // n é ímpar
    return x * power(x * x, (n - 1) / 2);
  }
}

int main() {
  int x = 2, n = 5;
  printf("%d elevado a %d é %d\n", x, n, power(x, n));
  return 0;
}

#include <stdio.h>
#include <string.h>

void inverter_string(char *str, int inicio, int fim) {
  if (inicio >= fim) {
    return;
  }
  char temp = str[inicio];
  str[inicio] = str[fim];
  str[fim] = temp;
  inverter_string(str, inicio + 1, fim - 1);
}

int main() {
  char str[] = "recursão";
  int n = strlen(str);
  inverter_string(str, 0, n - 1);
  printf("String invertida: %s\n", str);
  return 0;
}


#include <stdio.h>

int sstrlen(char *pi) {
  int l = 0;

  for (l = 0; *pi != '\0'; pi++) {
    l++;
  }

  return l;
}

int main() {
  char str[] = "12345";

  printf("str %s has length %d", str, sstrlen(str));

  return 0;
}

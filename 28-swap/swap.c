#include <stdio.h>

// C can pass what other languages refer to as "primitive types" by reference.
//
// This gives insane power to do insane things, like swaping the values of two integers.
//
void swap_ints(int *a, int *b) {
  int c;

  c = *a;
  *a = *b;
  *b = c;
}

int main() {
  int a = 1, b = 2;

  printf("a: %d, b: %d \n", a, b);

  swap_ints(&a, &b);

  printf("a: %d, b: %d \n", a, b);

  return 0;
}

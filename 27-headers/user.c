#include <stdio.h>
#include "stack.h"

int main() {
  int ary[] = { 1, 2, 3, 4, 5 };
  int i;

  for (i = 0; i < 5; i++) {
    push(ary[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("Popped off %d \n", pop());
  }

  return 0;
}

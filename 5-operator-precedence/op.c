#include <stdio.h>

int main() {
  int c;

  // != has higher precedence than assignment, so
  // c = getchar() != EOF results in 0 or 1 (true or false)
  //
  // When EOF is finally reached, it will be 1, so the program will terminate
  while ((c = getchar() != EOF) != 0) {
    printf("c %d", c);
  }
}

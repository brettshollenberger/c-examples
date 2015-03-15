#include <stdio.h>

int main() {
  int count;

  for (count = 0; (getchar() != EOF); ++count)
    ;

  printf("%d\n", count);
}

#include <stdio.h>

int main() {
  int c, lines;

  lines = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      lines++;
    }
  }

  printf("%d", lines);
}

#include <stdio.h>

/* count digits, white space, others */

int main() {
  int c, i, whitespace, others;
  int num_digits[10];

  whitespace = others = 0;

  for (i = 0; i < 10; i++) {
    num_digits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      num_digits[c-'0'] += 1;
    } else if (c == ' ' || c == '\n' || c == '\t') {
      whitespace += 1;
    } else {
      others += 1;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("number of %ds: %d \n", i, num_digits[i]);
  }

  printf("number of spaces: %d \n", whitespace);
  printf("number of other characters: %d \n", others);
}

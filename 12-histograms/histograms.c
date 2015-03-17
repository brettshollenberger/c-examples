#include <stdio.h>

#define IN  1
#define OUT 0 

int main() {
  int c, i, current_length, in_word, l;
  int counts[20];

  current_length = 0;
  in_word = OUT;

  for (i = 0; i < 20; i++) {
    counts[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      in_word = IN;
      current_length++;
    } else {
      if (in_word == IN) {
        counts[current_length-1]++;
      }

      in_word = OUT;
      current_length = 0;
    }
  }

  counts[current_length-2]++;

  for (i = 0; i < 20; i++) {
    printf("%d: ", i+1);

    for (l = 0; l < counts[i]; l++) {
      printf("x");
    }

    printf("\n");
  }
}

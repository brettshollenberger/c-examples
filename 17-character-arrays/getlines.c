#include <stdio.h>

#define MAXLINE 10

int grabline(char line[], int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}

void copyline(char from[], char to[]) {
  int i;

  for (i = 0; from[i] != '\0'; i++) {
    to[i] = from[i];
  }
}

int main() {
  int len, maxlen = 0;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = grabline(line, MAXLINE)) > 0) {
    if (len > maxlen) {
      maxlen = len;
      copyline(line, longest);
    }

    printf("%s", line);
  }

  printf("The longest line is %d characters long. It is: %s", maxlen, longest);

  return 0;
}

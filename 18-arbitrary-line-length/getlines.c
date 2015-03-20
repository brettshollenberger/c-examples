#include <stdio.h>

#define MAXLENGTH 10

int nextline(char input[], int len) {
  int i = 0, c;

  while ((c = getchar()) != EOF && c != '\n') {
    if (i <= len) {
      input[i] = c;
    }

    i++;
  }

  if (i < len) {
    input[i] = '\0';
  } else {
    input[len-1] = '\0';
  }

  return i;
}

void copyline(char input[], char output[]) {
  int i;

  for (i = 0; input[i] != '\0'; i++) {
    output[i] = input[i];
  }
}

int main() {
  int len, maxlen = 0;
  char line[MAXLENGTH], ml[MAXLENGTH];

  while ((len = nextline(line, MAXLENGTH)) > 0) {
    if (len > maxlen) {
      maxlen = len;
      copyline(line, ml);
    }

    printf("%s\n", line);
  }

  printf("The max line is: %s \n", ml);
  printf("The max line is: %d characters long \n", maxlen);

  return 0;
}

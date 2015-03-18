#include <stdio.h>
#include <string.h>

#define MAXLENGTH 1000

#define TRUE  1
#define FALSE 0

void clearline(char line[]) {
  int l;

  for (l = 0; line[l] != '\0'; l++) {
    line[l] = ' ';
  }
}

int getline2(char line[]) {
  int c, i, l;

  i = 0;

  clearline(line);

  while ((c = getchar()) != EOF && c != '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  if (i == 0) {
    return FALSE;
  } else {
    return TRUE;
  }
}

int main() {
  int max;
  char maxline[MAXLENGTH], line[MAXLENGTH];

  max = 0;

  while (getline2(line) == TRUE) {
    printf("%s : %lu\n", line, strlen(line));

    if (strlen(line) > max) {
      max = strlen(line);
    }
  }

  printf("Maxline size: %d", max);

  return 0;
}



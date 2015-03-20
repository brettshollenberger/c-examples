#include <stdio.h>
#include <strings.h>

#define MAXLINE 1000

int nextline(char output[], int lim) {
  int c, i=0;

  while ((c = getchar()) != EOF && c != '\n' && i < lim) {
    output[i] = c;
    i++;
  }

  output[i] = '\0';

  return i;
}

void reverse(char line[]) {
  char *start, *end, tmp;
  int len = strlen(line);

  start = line;
  end = line + len-1;

  while (start < end) {
    tmp = *start;

    *start = *end;
    *end = tmp;

    start++;
    end--;
  }
}

int main() {
  int len;
  char line[MAXLINE];

  while ((len = nextline(line, MAXLINE)) > 0) {
    printf("line: %s | ", line);
    reverse(line);
    printf("reverse: %s\n", line);
  }

  return 0;
}

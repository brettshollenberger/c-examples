#include <stdio.h>
#include <strings.h>

#define MAXLINE 2000
#define TRUE  1
#define FALSE 0

int nextline(char str[], int maxline) {
  int c, i=0;

  while ((c = getchar()) != EOF && c != '\n') {
    str[i] = c;
    i++;
  }

  if (c == '\n') {
    str[i] = c;
    i++;
  }

  str[i] = '\0';

  return i;
}

int strindex(char str[], char pattern[]) {
  int i,
      len = strlen(str), 
      pattern_len = strlen(pattern),
      match_start = 0,
      match_count = 0;

  for (i=0; i < len; i++) {
    if (match_count == pattern_len) {
      return match_start;
    }

    if (str[i] == pattern[match_count]) {
      if (match_count == 0) { 
        match_start = i;
      }

      match_count++;
    } else {
      match_count = 0;
    }
  }

  return -1;
}

int strmatch(char str[], char pattern[]) {
  return strindex(str, pattern) >= 0;
}

int main() {
  int len;
  char input[MAXLINE];
  char pattern[] = "Drank";

  while ((len = nextline(input, MAXLINE)) > 0) {
    if (strmatch(input, pattern)) {
      printf("%s", input);
    }
  }

  return 0;
}

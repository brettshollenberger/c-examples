#include "getintt.h"

int getintt(int *addr) {
  int sign = 1, i = 0;
  char c, intt[MAXINTSIZE];

  while (isspace(c = getchh()))
    ;

  if (c == EOF) {
    *addr = '\0';
    return c;
  }

  if (c == '-') {
    sign = -1;
    c = getchh();
  }

  if (isnumber(c)) {
    intt[i++] = c;

    while (isnumber(intt[i++] = c = getchh()))
      ;
  }

  *addr = atoi(intt) * sign;

  if (c != EOF) {
    ungetchh(c);
  }

  return NUMBER;
}

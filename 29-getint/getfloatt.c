#include "getfloatt.h"

int getfloatt(double *addr) {
  int sign = 1, i = 0;
  char c, floatt[MAXFLOATSIZE];

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
    floatt[i++] = c;

    while (isnumber(floatt[i++] = c = getchh()))
      ;
  }

  if (c == '.') {
    while (isnumber(floatt[i++] = c = getchh()))
      ;
  }

  *addr = atof(floatt);

  if (c != EOF) {
    ungetchh(c);
  }

  return NUMBER;
}

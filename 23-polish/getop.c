#include "getop.h"

// getop returns the type of the operation
int getop(char loader[]) {
  int c, i = 0;

  // skip spaces and tabs
  while ((c = getchh()) == ' ' || c == '\t')
    ;

  // if is operation, return operation (single char)
  if (!isnumber(c)) {
    return c;
  }

  // if is number, load entire number into loader
  if (isnumber(loader[i] = c)) {
    while (isnumber(loader[++i] = c = getchh()))
      ;
  }

  // set end of loader string to null char
  loader[++i] = '\0';

  // number loader continues loading until it has read one char too many;
  // as long as this last char is not EOF, put it back in the ungetchh buffer
  if (c != EOF) {
    ungetchh(c);
  }

  return NUMBER;
}

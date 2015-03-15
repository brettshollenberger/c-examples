#include <stdio.h>

// Since all representations are stored internally as just byte patterns,
// we're not obligated to store a character as a character.
//
// In fact, since we're attempting to check for the char == EOF, a symbolic
// constant defined in stdio.h (often as -1), we have to ensure that the
// value of c is large enough to store either a character or whatever
// integer EOF is defined as.
//
// Therefore, we use int type to hold it.
int main() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

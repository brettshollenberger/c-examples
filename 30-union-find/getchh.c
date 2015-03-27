#include "getchh.h"

static char buff[MAXBUFF];
static int buffj = 0;

char getchh() {
  return (buffj > 0) ? buff[buffj] : getchar();
}

void ungetchh(char c) {
  if (buffj < MAXBUFF) {
    buff[buffj] = c;
  } else {
    printf("Error: Ungetchh buffer full");
  }
}

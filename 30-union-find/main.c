#include <stdio.h>
#include "unionfind.h"
#include "getintt.h"
#include "printbool.h"

int main() {
  int type, type2, c1, c2;

  initializecomponents();

  while ((type = getintt(&c1)) != EOF && (type2 = getintt(&c2)) != EOF) {
    if (type == NUMBER && type2 == NUMBER) {
      makeunion(c1, c2);
    }
  }

  printf("connected? 4, 3: %s \n", printbool(findunion(4, 3)));
  printf("connected? 3, 8: %s \n", printbool(findunion(3, 8)));
  printf("connected? 4, 8: %s \n", printbool(findunion(4, 8)));
  printf("connected? 6, 5: %s \n", printbool(findunion(6, 5)));
  printf("connected? 3, 0: %s \n", printbool(findunion(3, 0)));

  return 0;
}

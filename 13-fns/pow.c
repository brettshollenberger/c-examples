#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isEven(int n) {
  return n % 2 == 0;
}

int powa(int n, int m) {
  int i, base;
  base = n;

  if (isEven(m) != TRUE) {
    return n * powa(n, m-1);
  } else {
    for (i = 1; i < m; i++) {
      n = n * base;
    }
    return n;
  }
}

int main() {
  printf("pow 2, 5 %d", powa(2, 5));
  
  return 0;
}

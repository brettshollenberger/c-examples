#include <stdio.h>

int main() {
  int a = 1, b = 2, c[10];

  int *ip;

  ip = &a;

  printf("After pointing ip to a, ip = 1; %d", *ip == 1);
  printf("\n");

  *ip = 200;

  printf("Dereferencing *ip = 200, a now = 200; %d", a == 200);
  printf("\n");

  *ip = b;

  printf("Dereferencing *ip = b, a now = 2; %d", a == 2);
  printf("\n");

  ip = &b;

  printf("Ip now points to b; ip = 2; %d", *ip == 2);
  printf("\n");

  *ip = 3;

  printf("Dereferncing ip = 3; b = 3; %d", b == 3);
  printf("\n");

  ip = &c[0];
  *ip = 1;

  printf("Ip points to c[0]; c[0] = 1; %d", c[0] == 1);
  printf("\n");
}

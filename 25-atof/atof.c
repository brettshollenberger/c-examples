#include <stdio.h>
#include <ctype.h>

double atoff(char str[]) {
  double val;
  int i, sign;

  for (i=0; isspace(str[i]); i++)
    ;

  if (str[i] == '-') {
    i++;
    sign = -1;
  } else {
    sign = 1;
  }

  for (val = 0.0; isdigit(str[i]); i++) {
    val = 10.0 * val + (str[i] - '0');
    printf("%f \n", val);
  }

  return sign * val;
}

int main() {
  char val[] = "-2120";
  double cmp = -2120;

  printf("atoff '-2120' == -2120 %d; %f", atoff(val) == cmp, atoff(val));
}

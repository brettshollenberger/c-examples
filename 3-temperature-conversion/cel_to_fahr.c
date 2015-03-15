#include <stdio.h>

int main() {
  float fahr, cel, start, stop, step;

  start = -17.8;
  stop  = 37.8;
  step  = 5;

  for (cel = start; cel <= stop; cel = cel + step) {
    fahr = (cel * 9.0 / 5.0) + 32;

    printf("cel: %.1f, fahr: %.1f\n", cel, fahr);
  }
}

#include <stdio.h>

int main() {
  float fahr, cel;

  int start, stop, step;

  start = 0;
  stop  = 100;
  step  = 20;

  for (fahr = start; fahr <= stop; fahr = fahr + step) {
    cel = 5.0 * (fahr-32) / 9.0;

    printf("fahr: %f, cel: %.1f\n", fahr, cel);
  }
}

#include <stdio.h>
#include <limits.h>

// Int size depends on the machine architecture
//
// A 16-bit machine is one in which the length of each word
// is 16-bits; for signed integers, that means a range of
// -32768 to 32767
//
// A 32-bit machine has a range of -2147483648 to 2147483647
//
int main() {
  int min, max;

  min = INT_MAX+1;
  max = INT_MAX;

  printf("min: %d, max: %d", min, max);
}

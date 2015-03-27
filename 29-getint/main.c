#include <stdio.h>
#include "getintt.h"
#include "getfloatt.h"

#define MAXNUMS 1000

int main() {
  int type, i=0, count;
  double nums[MAXNUMS];

  while ((type = getfloatt(&nums[i++])) != EOF)
    ;

  count = sizeof(nums)/sizeof(nums[0]);

  for (i=0; i < count && nums[i] != '\0'; i++) {
    printf("%.3f\n", nums[i]);
  }

  return 0;
}

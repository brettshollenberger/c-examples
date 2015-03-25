#include <stdio.h>
#include <limits.h>
#include <float.h>

#define TRUE  1
#define FALSE 0

void describe_char_limits() {
  printf("Min char is %c; Max char is %c \n", CHAR_MIN, CHAR_MAX);
}

void describe_char_properties() {
  char max, min;
 
  min = CHAR_MAX + 1;
  max = CHAR_MAX;

  int truth = min == CHAR_MIN;

  printf("Min char is max char + 1? %s \n", truth == TRUE ? "true" : "false");
}

void describe_short_limits() {
  printf("Min short is %d, max short is %d \n", SHRT_MIN, SHRT_MAX);
}

void describe_short_properties() {
  short max, min;

  min = SHRT_MAX + 1;
  max = SHRT_MAX;

  printf("Min short is max short + 1? %s \n", (min == max + 1) == TRUE ? "true" : "false");
}

void describe_ushort_limits() {
  printf("Min unsigned short is %d, max unsigned short is %d \n", 0, USHRT_MAX);
}

void describe_ushort_properties() {
  unsigned short max, min;

  min = 0;
  max = USHRT_MAX;

  printf("Min unsigned short is max unsigned short + 1? %s \n", (min == max + 1) == TRUE ? "true" : "false");
}

void describe_long_limits() {
  printf("Min long is %lu, max long is %lu \n", LONG_MIN, LONG_MAX);
}

void describe_long_properties() {
  printf("Min long is max long + 1? %s \n", (LONG_MIN == LONG_MAX + 1) == TRUE ? "true" : "false");
}

void describe_int_limits() {
  printf("Min int is %d, max int is %d \n", INT_MIN, INT_MAX);
}

void describe_int_properties() {
  printf("Min int is max int + 1? %s \n", (INT_MIN == INT_MAX + 1) == TRUE ? "true" : "false");
}

int main() {
  describe_char_limits();
  describe_char_properties();
  describe_short_limits();
  describe_short_properties();
  describe_ushort_limits();
  describe_ushort_properties();
  describe_long_limits();
  describe_long_properties();
  describe_int_limits();
  describe_int_properties();

  return 0;
}

#include "stack.h"

static char stack[MAXSTACK];
static int stackj = 0;

void push(char c) {
  if (stackj < MAXSTACK) {
    stack[stackj++] = c;
  } else {
    printf("Error: Stack overflow");
  }
}

char pop() {
  if (stackj > 0) {
    return stack[--stackj];
  } else {
    printf("Error: Stack underflow. Nothing to be popped");
  }
}

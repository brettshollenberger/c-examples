#include <stdio.h>

#define STACK_SIZE 1000

int stack[STACK_SIZE];
int sp = 0;

void push(int i) {
  if (sp < STACK_SIZE) {
    stack[sp++] = i;
  } else {
    printf("Error: Stack overflow \n");
  }
}

int pop() {
  if (sp >= 1) {
    return stack[--sp];
  } else {
    printf("Error: Stack underflow");
  }
}

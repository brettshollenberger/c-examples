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

int main() {
  int ary[] = { 1, 2, 3, 4, 5 };
  int i;

  for (i = 0; i < 5; i++) {
    push(ary[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("Popped off %d \n", pop());
  }

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "getop.h"

int main() {
  int type, op2;
  char number[100];

  while ((type = getop(number)) != EOF) {
    switch(type) {
      case NUMBER:
        push(atoi(number));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '*':
        push(pop() * pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '/':
        op2 = pop();

        if (op2 == 0) {
          printf("Error: Cannot divide by zero");
        } else {
          push(pop() / op2);
        }
        break;
    }
  }

  printf("Polish calculator computed %d", pop());

  return 0;
}

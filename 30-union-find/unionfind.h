#include <stdlib.h>

#define MAXCOMPONENTS  2000
#define MAXCONNECTIONS 2000

void initializecomponents();
void makeunion(int c1, int c2);
int findunion(int c1, int c2);

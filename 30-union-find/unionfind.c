#include "unionfind.h"

struct component {
  int n;
  int *connections;
};

static struct component components[MAXCOMPONENTS];
static int connections[MAXCOMPONENTS][MAXCONNECTIONS];
static int i;

void initializecomponents() {
  int i;

  for (i = 0; i < MAXCOMPONENTS; i++) {
    components[i].n = i;
    components[i].connections = &connections[i][0];
    connections[i][0] = i;
    connections[i][1] = -1;
  }
}

// connect component 1 to component 2 unless already connected
void makeunion(int c1, int c2) {
  int i, j;

  struct component *cmp1 = &components[c1];
  struct component *cmp2 = &components[c2];

  for (i = 0; cmp1->connections[i] != -1; i++) {
    // cmp2 is already connected to cmp1
    if (cmp1->connections[i] == cmp2->n) {
      return;
    }
  }

  // copy cmp2's connections into cmp1's connections
  for (j = 0; cmp2->connections[j] != -1; j++) {
    cmp1->connections[i] = cmp2->connections[j];
    i++;
  }

  cmp1->connections[i] = -1;

  // all connections in cmp2's old connections are now the new set of
  // cmp1's connections
  for (j = 0; cmp2->connections[j] != -1; j++) {
    components[cmp2->connections[j]].connections = cmp1->connections;
  }
}

// find whether or not component1 is connected to component2
int findunion(int c1, int c2) {
  struct component *cmp1 = &components[c1];
  struct component *cmp2 = &components[c2];

  return cmp1->connections == cmp2->connections;
}


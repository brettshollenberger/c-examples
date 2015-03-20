#include <stdio.h>

void swap(int items[], int a, int b) {
  int temp = items[a];

  items[a] = items[b];
  items[b] = temp;
}

void insertion_sort(int items[], int t_len) {
  int i, j;

  for (i = 0; i < t_len; i++) {
    j = i-1;

    while (j >= 0 && items[j] > items[i]) {
      swap(items, i, j);
      i--;
      j--;
    }
  }
}

int main() {
  int i = 0, arr[5] = { 3, 5, 1, 4, 2 };

  insertion_sort(arr, sizeof(arr)/sizeof(arr[0]));

  for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
    printf("%d %d\n", i, arr[i]);
  }

  return 0;
}

#include <stdio.h>

int main() {
  int arr[] = {100,48 ,32 ,2 , 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  int min = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Maximum element: %d\n", max);
  printf("Minimum element: %d\n", min);

  return 0;
}
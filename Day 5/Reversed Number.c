#include <stdio.h>
int main() {
  int num = 123;
  int reversed_num = 0;
  while (num != 0) {
    int remainder = num % 10;
    reversed_num = reversed_num * 10 + remainder;
    num /= 10;
  }
  printf("Reversed number: %d\n", reversed_num);
  return 0;
}
#include <stdio.h>
int main() {
  int num = 123;
  int sum = 0;
  int digit;
  while (num != 0) {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }
  printf("Sum of digits: %d\n", sum);
  return 0;
}
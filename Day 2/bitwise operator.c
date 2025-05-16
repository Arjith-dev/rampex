
#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  int average = (num1 & num2) + ((num1 ^ num2) >> 1);
  printf("The average is: %d\n", average);
  return 0;
}

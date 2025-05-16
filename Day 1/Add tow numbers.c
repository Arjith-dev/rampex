#include <stdio.h>

int main() {
  int num1, num2,num3,num4, sum;
  printf("Enter two integers:");
  scanf("%d %d %d %d", &num1, &num2,&num3,&num4);
  sum = num1 + num2 +num3 +num4 ;
  printf("Sum: %d\n", sum);
  return 0;
}
#include<stdio.h>
int main()
{
  int num1, num2, Sum;
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);  
  Sum = num1 + num2;
  printf("Sum of %d and %d is: %d", num1, num2, Sum);
  return 0;
}
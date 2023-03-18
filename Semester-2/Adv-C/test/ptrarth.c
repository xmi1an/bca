#include<stdio.h>

void main()
{
  int x = 10;
  int y = 20;
  int sum;
  int *ptr1 = &x;
  int *ptr2 = &y;
  sum = *ptr1 + *ptr2;
  printf("Sum is %d", sum);
}

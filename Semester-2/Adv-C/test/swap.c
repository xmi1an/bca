/*
1. Declare variables `x`, `y`, `a`, `b`, and `temp`.
2. Prompt the user to enter values for `x` and `y`.
3. Print the original values of `x` and `y`.
4. Set `a` to the address of `x` and `b` to the address of `y`.
5. Swap the values of `x` and `y` by setting `temp` to the value at `b`, setting the value at `b` to the value at `a`, and setting the value at `a` to `temp`.
6. Print the new values of `x` and `y`. */

#include <stdio.h>

void main()
{
  int x, y, *a, *b, temp;
  x= 2;
  y = 4;

  a = &x;
  b = &y;

  temp = *b;
  *b = *a;
  *a = temp;

  printf("After Swap\n");
  printf("x = %d \ny = %d", x, y);
}

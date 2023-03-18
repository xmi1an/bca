
#include <stdio.h>

int main()
{
  //Declare two integer variables
  int a = 10;
  int b = 20;

  //Declare a pointer to integer
  int *p;

  //Assign the pointer to the address of integer b
  p = &b;

  //Print results
  printf("a = %d, b = %d\n", a, b);

  //Increment integer at the address given by pointer p
  (*p) += 10;

  //Print results
  printf("a = %d, b = %d\n", a, b);

  return 0;
}
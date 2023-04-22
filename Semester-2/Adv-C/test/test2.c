#include <stdio.h>

int main()
{
  int num = 1, sum = 0;
  int *ptr = &num;

  while ((*ptr) < 6)
  {
    sum += *ptr;
    *ptr += 1;
  }
  printf("sum = %d", sum);
}
  
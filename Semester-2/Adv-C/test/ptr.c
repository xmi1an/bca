#include <stdio.h>

void main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  int sum = *ptr + *ptr + 1 + * ptr + 2 + *ptr + 3 + *ptr + 4;
  printf("The sum of the array is %d\n", sum);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int even;
  int odd;
  int num;
  FILE *data;
  data = fopen("Practical-24-Data.txt", "r");
  if (data == NULL)
  {
    printf("Error!");
    exit(1);
  }
  FILE *ptrodd = fopen("24-odd.txt", "w+");
  FILE *ptreven = fopen("24-even.txt", "w+");
  while (fscanf(data, "%d", &num) > 0)
  {
    if (num % 2 == 0)
      fprintf(ptreven, "%d\n", num);
    else
      fprintf(ptrodd, "%d\n", num);
  }
  fclose(ptrodd);
  fclose(ptreven);
  ptreven = fopen("24-even.txt", "r");
  ptreven = fopen("24-odd.txt", "r");

  printf("The even numbers are:\n");
  while (fscanf(ptreven, "%d", &even) > 0)
    printf("%d\n", even);

  printf("\nThe odd numbers are:\n");
  while (fscanf(ptrodd, "%d", &odd) > 0)
    printf("%d\n", odd);

  fclose(ptrodd);
  fclose(ptreven);
  return 0;
}

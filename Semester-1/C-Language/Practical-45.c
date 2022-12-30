/* 45. Write a C program to display following output on the screen.
           1
          2 3
         4 5 6
       7 8 9 10
     11 12 13 14 15
 */

#include <stdio.h>
void main()
{
  int i, j, num = 1;

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 - i; j++)
    {
      printf(" "); // Print Space
    }

    for (int j = 1; j <= i; j++)
    {
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }
}
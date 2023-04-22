/*
44. Write a C program to display following output on the screen.
      *
     * *
    * * *
   * * * *
  * * * * *
 */

#include <stdio.h>
void main()
{
      int i, j;

      for (int i = 1; i <= 5; i++)
      {
            for (int j = 1; j <= 5 - i; j++)
            {
                  printf(" "); // Print Space
            }

            for (int j = 1; j <= i; j++)
            {                   // loop for star
                  printf("* "); // prints * and blank space
            }
            printf("\n"); // New line
      }
}
/* 39. Write a C program to display following output on the screen.  */
#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
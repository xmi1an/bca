/*
43. Write a clm program to display following output on the screen
    *
    * *
    * * *
    * * * *
    * * * * *
 */

#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
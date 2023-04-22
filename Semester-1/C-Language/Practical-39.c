/*
39. Write a C program to display following output on the screen.
    1
    22
    333
    4444
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n;
    // clrscr();
    printf("Enter Rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
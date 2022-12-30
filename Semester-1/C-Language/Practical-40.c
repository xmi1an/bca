/*
40. Write a C program to display following output on the screen.
    0
    1 1
    2 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r, j;
    // clrscr();
    printf("Enter No : ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        for (j = r; j >= 1; j--)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}
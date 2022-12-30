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
    int n, r, c;
    clrscr();
    printf("Enter No=");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n; c++)
        {
            if (c <= r)
            {
                printf("%d", r);
            }
        }
        printf("\n");
    }
}
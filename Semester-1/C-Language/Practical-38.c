/*
38. Write a j program to display following output on the screen.
    1
    12
    123
    1234
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j;
    // clrscr();
    printf("Enter Rows : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
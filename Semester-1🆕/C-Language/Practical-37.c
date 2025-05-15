/* 37. Write a C program to find 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + .... + 1/n.  */

#include <stdio.h>
void main()
{
    int i, n;
    float s = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + ((float)1 / i);
    }
    printf("Sum : %.2f", s);
}
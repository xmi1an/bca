/* 27. Write a C program to convert decimal numbers into equivalent to octal number. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int rem;
    int a[10];
    int i = 0;
    int j;

    printf("Enter Decimal No : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 8;
        a[i] = rem;
        n = n / 8;
        i++;
    }

    printf("Octal No : ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}
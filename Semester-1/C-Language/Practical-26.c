/* 26. Write a C program to convert decimal numbers into equivalent binary number. */

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
        rem = n % 2;
        a[i] = rem;
        n = n / 2;
        i++;
    }

    printf("Binary No : ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}
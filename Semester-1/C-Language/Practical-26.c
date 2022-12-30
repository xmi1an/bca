/* 26. Write a C program to convert decimal numbers into equivalent binary number. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s = 1, x, b = 0;
    clrscr();

    printf("Enter Decimal No : ");
    scanf("%d", &n);

    while (n != 0)
    {
        x = n % 2;
        s = s * 10 + x;
        n = n / 2;
    }
    while (s != 0)
    {
        x = s % 10;
        b = b * 10 + x;
        s = s / 10;
    }
    b = b / 10;
    printf("Binary No=%d\n", b);
}
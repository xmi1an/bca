/* 27. Write a C program to convert decimal numbers into equivalent to octal number. */

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s = 1, x, b = 0;
    clrscr();
    printf("Enter Decimal No=");
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 8;
        s = s * 10 + x;
        n = n / 8;
    }
    while (s != 0)
    {
        x = s % 10;
        b = b * 10 + x;
        s = s / 10;
    }
    b = b / 10;
    printf("Octal No=%d\n", b);
}
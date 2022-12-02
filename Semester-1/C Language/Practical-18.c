/* 18. Write a C program to find the sum of digit of accepted number. */

#include <stdio.h>

void main()
{
    int num = 134;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits is %d", sum);
}
/* 18. Write a C program to find the sum of digit of accepted number. */

#include <stdio.h>

void main()
{
    int num;
    int sum = 0;
    int digit;
    int temp;
    printf("Enter Number : ");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits %d is %d ", temp, sum);
}
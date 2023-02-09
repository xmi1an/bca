/* Write a program to find factorial of given no using UDF (NO recursion.) */

#include <stdio.h>

int factorial(int num)
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int num, res;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Invalid input!\n");
        return 1;
    }

    res = factorial(num);

    printf("The factorial of %d is %d\n", num, res);
}
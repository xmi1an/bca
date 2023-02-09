/* Write a program to display first 25 terms of Fibonacci series using recursion. */

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int i;
    printf("The first 25 terms of the Fibonacci series are:\n");
    for (i = 0; i < 25; i++)
    {
        printf("%d\t", fibonacci(i));
    }
    printf("\n");
    return 0;
}

/*
Explanation:

The function fibonacci takes an integer n as input and returns the nth term in the Fibonacci series.
If n is 0, it returns 0, as the first term in the series is 0.
If n is 1, it returns 1, as the second term in the series is 1.
If n is greater than 1, it returns fibonacci(n - 1) + fibonacci(n - 2). The fibonacci function is called recursively with n - 1 and n - 2 until n becomes 0 or 1.
In the main function, the first 25 terms of the Fibonacci series are calculated using the fibonacci function and displayed.
 */
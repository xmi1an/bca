/* 3. Write a program to find factorial of given no using recursion. */

#include <stdio.h>

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Invalid input!\n");
        return 1;
    }
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}

/*
Explanation:

The function factorial takes an integer num as input and returns its factorial.
If num is 0, it returns 1, as the factorial of 0 is 1.
If num is greater than 0, it returns num * factorial(num - 1). The factorial function is called recursively with num - 1 until num becomes 0.
In the main function, the user is prompted to enter a positive integer. If the input is negative, an error message is displayed and the program exits.
The factorial of the input number is calculated using the factorial function and the result is displayed.

 */